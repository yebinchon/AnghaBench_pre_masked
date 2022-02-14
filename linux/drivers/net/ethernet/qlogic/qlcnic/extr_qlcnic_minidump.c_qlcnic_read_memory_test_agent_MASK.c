
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; TYPE_1__* pdev; } ;
struct __mem {int size; int addr; } ;
typedef int __le32 ;
struct TYPE_4__ {int mem_lock; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct qlcnic_adapter*,int ) ;
 int FUNC_7 (struct qlcnic_adapter*,int ,int) ;
 int * VAR_8 ;

__attribute__((used)) static u32 FUNC_8(struct qlcnic_adapter *VAR_9,
      struct __mem *VAR_10, __le32 *VAR_11,
      int *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;

 VAR_17 = VAR_10->size;
 VAR_13 = VAR_10->addr;

 if ((VAR_13 & 0xf) || (VAR_17%16)) {
  FUNC_2(&VAR_9->pdev->dev,
    "Unaligned memory addr:0x%x size:0x%x\n",
    VAR_13, VAR_17);
  *VAR_12 = -VAR_0;
  return 0;
 }

 FUNC_3(&VAR_9->ahw->mem_lock);

 while (VAR_17 != 0) {
  FUNC_7(VAR_9, VAR_4, VAR_13);
  FUNC_7(VAR_9, VAR_3, 0);
  FUNC_7(VAR_9, VAR_5, VAR_6);

  for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
   VAR_15 = FUNC_6(VAR_9, VAR_5);
   if (!(VAR_15 & VAR_7))
    break;
  }
  if (VAR_16 == VAR_2) {
   if (FUNC_5()) {
    FUNC_1(&VAR_9->pdev->dev,
     "failed to read through agent\n");
    *VAR_12 = -VAR_1;
    goto out;
   }
  }
  for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
   VAR_14 = FUNC_6(VAR_9, VAR_8[VAR_16]);
   *VAR_11++ = FUNC_0(VAR_14);
  }
  VAR_13 += 16;
  VAR_17 -= 16;
  VAR_12 += 16;
 }
out:
 FUNC_4(&VAR_9->ahw->mem_lock);
 return VAR_10->size;
}
