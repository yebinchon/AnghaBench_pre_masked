
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
 int FUNC_0 (struct hl_ctx*,int) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct hl_ctx *VAR_3, u64 VAR_4, u32 VAR_5)
{
 struct hl_device *VAR_6 = VAR_3->hdev;
 u64 VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_6->mmu_enable)
  return 0;





 if ((VAR_5 % VAR_1) == 0) {
  VAR_8 = VAR_1;
 } else if ((VAR_5 % VAR_2) == 0) {
  VAR_8 = VAR_2;
 } else {
  FUNC_1(VAR_6->dev,
   "page size of %u is not 4KB nor 2MB aligned, can't unmap\n",
    VAR_5);

  return -VAR_0;
 }

 VAR_9 = VAR_5 / VAR_8;
 VAR_7 = VAR_4;

 for (VAR_10 = 0 ; VAR_10 < VAR_9 ; VAR_10++) {
  VAR_11 = FUNC_0(VAR_3, VAR_7);
  if (VAR_11)
   return VAR_11;

  VAR_7 += VAR_8;
 }

 return 0;
}
