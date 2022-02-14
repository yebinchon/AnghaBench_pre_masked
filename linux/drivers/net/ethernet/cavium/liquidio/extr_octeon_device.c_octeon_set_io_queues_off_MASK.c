
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ rings_per_vf; } ;
struct octeon_device {scalar_t__ chip_id; TYPE_2__* pci_dev; TYPE_1__ sriov_info; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct octeon_device*) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (struct octeon_device*,int ) ;
 int FUNC_5 (struct octeon_device*,int ,int ) ;
 int FUNC_6 (struct octeon_device*,int ,int) ;

int FUNC_7(struct octeon_device *VAR_6)
{
 int VAR_7 = VAR_0;

 if (FUNC_2(VAR_6)) {
  FUNC_5(VAR_6, VAR_3, 0);
  FUNC_5(VAR_6, VAR_4, 0);
 } else if (VAR_6->chip_id == VAR_5) {
  u32 VAR_8;





  for (VAR_8 = 0; VAR_8 < VAR_6->sriov_info.rings_per_vf; VAR_8++) {
   u64 VAR_9 = FUNC_4(
    VAR_6, FUNC_1(VAR_8));

   while ((VAR_9 & VAR_2) &&
          !(VAR_9 & VAR_1) &&
          VAR_7) {
    VAR_9 = FUNC_4(
     VAR_6, FUNC_0(VAR_8));
    VAR_7--;
   }
   if (!VAR_7) {
    FUNC_3(&VAR_6->pci_dev->dev,
     "clearing the reset reg failed or setting the quiet reg failed for qno: %u\n",
     VAR_8);
    return -1;
   }

   VAR_9 = VAR_9 & ~VAR_2;
   FUNC_6(VAR_6,
        FUNC_0(VAR_8),
        VAR_9);

   VAR_9 = FUNC_4(
     VAR_6, FUNC_0(VAR_8));
   if (VAR_9 & VAR_2) {
    FUNC_3(&VAR_6->pci_dev->dev,
     "unable to reset qno %u\n", VAR_8);
    return -1;
   }
  }
 }
 return 0;
}
