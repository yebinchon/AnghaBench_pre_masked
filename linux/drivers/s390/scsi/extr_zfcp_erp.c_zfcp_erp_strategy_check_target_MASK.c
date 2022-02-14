
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {int dummy; } ;
struct zfcp_erp_action {int type; struct scsi_device* sdev; struct zfcp_port* port; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int dummy; } ;
struct scsi_device {int dummy; } ;
typedef enum zfcp_erp_act_result { ____Placeholder_zfcp_erp_act_result } zfcp_erp_act_result ;






 int FUNC_0 (struct zfcp_adapter*,int) ;
 int FUNC_1 (struct scsi_device*,int) ;
 int FUNC_2 (struct zfcp_port*,int) ;

__attribute__((used)) static enum zfcp_erp_act_result FUNC_3(
 struct zfcp_erp_action *VAR_0, enum zfcp_erp_act_result VAR_1)
{
 struct zfcp_adapter *VAR_2 = VAR_0->adapter;
 struct zfcp_port *VAR_3 = VAR_0->port;
 struct scsi_device *VAR_4 = VAR_0->sdev;

 switch (VAR_0->type) {

 case 130:
  VAR_1 = FUNC_1(VAR_4, VAR_1);
  break;

 case 128:
 case 129:
  VAR_1 = FUNC_2(VAR_3, VAR_1);
  break;

 case 131:
  VAR_1 = FUNC_0(VAR_2, VAR_1);
  break;
 }
 return VAR_1;
}
