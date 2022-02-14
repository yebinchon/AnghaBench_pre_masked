
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hl_device {int dev; int mmu_enable; } ;
struct hl_ctx {struct hl_device* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (struct hl_ctx*,int,int,int) ;
 scalar_t__ FUNC_2 (struct hl_ctx*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(struct hl_ctx *VAR_3, u64 VAR_4, u64 VAR_5, u32 VAR_6)
{
 struct hl_device *VAR_7 = VAR_3->hdev;
 u64 VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;

 if (!VAR_7->mmu_enable)
  return 0;





 if ((VAR_6 % VAR_1) == 0) {
  VAR_10 = VAR_1;
 } else if ((VAR_6 % VAR_2) == 0) {
  VAR_10 = VAR_2;
 } else {
  FUNC_3(VAR_7->dev,
   "page size of %u is not 4KB nor 2MB aligned, can't map\n",
    VAR_6);

  return -VAR_0;
 }

 FUNC_0((VAR_5 & (VAR_10 - 1)),
  "Mapping 0x%llx with page size of 0x%x is erroneous! Address must be divisible by page size",
  VAR_5, VAR_10);

 VAR_11 = VAR_6 / VAR_10;
 VAR_8 = VAR_4;
 VAR_9 = VAR_5;

 for (VAR_12 = 0 ; VAR_12 < VAR_11 ; VAR_12++) {
  VAR_13 = FUNC_1(VAR_3, VAR_8, VAR_9,
    VAR_10);
  if (VAR_13)
   goto err;

  VAR_8 += VAR_10;
  VAR_9 += VAR_10;
  VAR_14++;
 }

 return 0;

err:
 VAR_8 = VAR_4;
 for (VAR_12 = 0 ; VAR_12 < VAR_14 ; VAR_12++) {
  if (FUNC_2(VAR_3, VAR_8))
   FUNC_4(VAR_7->dev,
    "failed to unmap va: 0x%llx\n", VAR_8);

  VAR_8 += VAR_10;
 }

 return VAR_13;
}
