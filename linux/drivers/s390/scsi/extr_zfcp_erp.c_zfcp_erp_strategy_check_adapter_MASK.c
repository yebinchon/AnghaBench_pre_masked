
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {int status; TYPE_1__* ccw_device; int erp_counter; } ;
typedef enum zfcp_erp_act_result { ____Placeholder_zfcp_erp_act_result } zfcp_erp_act_result ;
struct TYPE_2__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct zfcp_adapter*,int ) ;
 int FUNC_5 (struct zfcp_adapter*) ;
 int FUNC_6 (struct zfcp_adapter*,int) ;

__attribute__((used)) static enum zfcp_erp_act_result FUNC_7(
 struct zfcp_adapter *VAR_2, enum zfcp_erp_act_result VAR_3)
{
 switch (VAR_3) {
 case 128 :
  FUNC_2(&VAR_2->erp_counter, 0);
  FUNC_5(VAR_2);
  break;

 case 130 :
  FUNC_0(&VAR_2->erp_counter);
  if (FUNC_1(&VAR_2->erp_counter) > VAR_0) {
   FUNC_3(&VAR_2->ccw_device->dev,
    "ERP cannot recover an error "
    "on the FCP device\n");
   FUNC_6(VAR_2,
         VAR_1);
  }
  break;
 case 133:
 case 131:
 case 132:
 case 129:

  break;
 }

 if (FUNC_1(&VAR_2->status) & VAR_1) {
  FUNC_4(VAR_2, 0);
  VAR_3 = 131;
 }
 return VAR_3;
}
