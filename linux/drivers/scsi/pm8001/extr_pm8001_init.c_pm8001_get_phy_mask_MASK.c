
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm8001_hba_info {TYPE_1__* pdev; } ;
struct TYPE_2__ {int subsystem_device; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static
void FUNC_2(struct pm8001_hba_info *VAR_0, int *VAR_1)
{
 switch (VAR_0->pdev->subsystem_device) {
 case 0x0070:
 case 0x0072:
  *VAR_1 = 0x0000;
  break;

 case 0x0071:
 case 0x0073:
  *VAR_1 = 0xFFFF;
  break;

 case 0x0080:
  *VAR_1 = 0x00F0;
  break;

 case 0x0081:
  *VAR_1 = 0x0FF0;
  break;

 case 0x0082:
  *VAR_1 = 0xFF00;
  break;

 default:
  FUNC_0(VAR_0,
   FUNC_1("Unknown subsystem device=0x%.04x",
    VAR_0->pdev->subsystem_device));
 }
}
