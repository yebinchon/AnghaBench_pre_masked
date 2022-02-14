
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_port {int status; scalar_t__ wwpn; TYPE_2__* adapter; int erp_counter; } ;
typedef enum zfcp_erp_act_result { ____Placeholder_zfcp_erp_act_result } zfcp_erp_act_result ;
struct TYPE_4__ {TYPE_1__* ccw_device; } ;
struct TYPE_3__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,unsigned long long) ;
 int FUNC_4 (struct zfcp_port*,int ) ;
 int FUNC_5 (struct zfcp_port*) ;
 int FUNC_6 (struct zfcp_port*,int) ;

__attribute__((used)) static enum zfcp_erp_act_result FUNC_7(
 struct zfcp_port *VAR_3, enum zfcp_erp_act_result VAR_4)
{
 switch (VAR_4) {
 case 128 :
  FUNC_2(&VAR_3->erp_counter, 0);
  FUNC_5(VAR_3);
  break;

 case 130 :
  if (FUNC_1(&VAR_3->status) & VAR_2) {
   FUNC_4(VAR_3, 0);
   VAR_4 = 131;
  }
  FUNC_0(&VAR_3->erp_counter);
  if (FUNC_1(&VAR_3->erp_counter) > VAR_0) {
   FUNC_3(&VAR_3->adapter->ccw_device->dev,
    "ERP failed for remote port 0x%016Lx\n",
    (unsigned long long)VAR_3->wwpn);
   FUNC_6(VAR_3,
      VAR_1);
  }
  break;
 case 133:
 case 131:
 case 132:
 case 129:

  break;
 }

 if (FUNC_1(&VAR_3->status) & VAR_1) {
  FUNC_4(VAR_3, 0);
  VAR_4 = 131;
 }
 return VAR_4;
}
