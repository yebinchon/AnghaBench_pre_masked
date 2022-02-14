
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct bnx2x {TYPE_1__* pdev; int wol; } ;
typedef int pci_power_t ;
struct TYPE_3__ {int dev; scalar_t__ pm_cap; int enable_cnt; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int) ;

int FUNC_7(struct bnx2x *VAR_5, pci_power_t VAR_6)
{
 u16 VAR_7;


 if (!VAR_5->pdev->pm_cap) {
  FUNC_0("No power capability. Breaking.\n");
  return 0;
 }

 FUNC_5(VAR_5->pdev, VAR_5->pdev->pm_cap + VAR_1, &VAR_7);

 switch (VAR_6) {
 case 129:
  FUNC_6(VAR_5->pdev, VAR_5->pdev->pm_cap + VAR_1,
          ((VAR_7 & ~VAR_4) |
           VAR_3));

  if (VAR_7 & VAR_4)

   FUNC_4(20);
  break;

 case 128:


  if (FUNC_2(&VAR_5->pdev->enable_cnt) != 1)
   return 0;

  if (FUNC_1(VAR_5))
   return 0;

  VAR_7 &= ~VAR_4;
  VAR_7 |= 3;

  if (VAR_5->wol)
   VAR_7 |= VAR_2;

  FUNC_6(VAR_5->pdev, VAR_5->pdev->pm_cap + VAR_1,
          VAR_7);




  break;

 default:
  FUNC_3(&VAR_5->pdev->dev, "Can't support state = %d\n", VAR_6);
  return -VAR_0;
 }
 return 0;
}
