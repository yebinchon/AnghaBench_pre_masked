
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm8001_hba_info {TYPE_1__* pdev; } ;
struct TYPE_2__ {int subsystem_vendor; int device; } ;




 int FUNC_0 (struct pm8001_hba_info*) ;
 int FUNC_1 (struct pm8001_hba_info*) ;

__attribute__((used)) static int FUNC_2(struct pm8001_hba_info *VAR_0)
{
 switch (VAR_0->pdev->subsystem_vendor) {
 case 128:
  if (VAR_0->pdev->device == 0x0042)
   return 0;
  else
   return FUNC_1(VAR_0);

 case 129:
 case 0:
  return 0;

 default:
  return FUNC_0(VAR_0);
 }
}
