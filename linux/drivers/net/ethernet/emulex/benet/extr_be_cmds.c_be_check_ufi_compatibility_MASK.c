
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flash_file_hdr_g3 {int* build; int asic_type_rev; } ;
struct be_adapter {int asic_rev; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*) ;
 scalar_t__ FUNC_2 (struct be_adapter*) ;



 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct be_adapter*) ;

__attribute__((used)) static bool FUNC_5(struct be_adapter *VAR_0,
           struct flash_file_hdr_g3 *VAR_1)
{
 if (!VAR_1) {
  FUNC_3(&VAR_0->pdev->dev, "Invalid FW UFI file");
  return 0;
 }




 switch (VAR_1->build[0]) {
 case 128:
  if (!FUNC_4(VAR_0))
   return 0;
  break;
 case 129:
  if (!FUNC_1(VAR_0))
   return 0;
  break;
 case 130:
  if (!FUNC_0(VAR_0))
   return 0;
  break;
 default:
  return 0;
 }






 if (FUNC_2(VAR_0) && VAR_1->asic_type_rev == 0)
  return VAR_0->asic_rev < 0x10;
 else
  return (VAR_1->asic_type_rev >= VAR_0->asic_rev);
}
