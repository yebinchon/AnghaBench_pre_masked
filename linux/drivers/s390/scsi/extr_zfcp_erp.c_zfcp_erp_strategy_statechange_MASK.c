
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zfcp_scsi_dev {int status; } ;
struct zfcp_port {int status; } ;
struct zfcp_erp_action {int type; int status; struct scsi_device* sdev; struct zfcp_port* port; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int status; } ;
struct scsi_device {int dummy; } ;
typedef enum zfcp_erp_act_type { ____Placeholder_zfcp_erp_act_type } zfcp_erp_act_type ;
typedef enum zfcp_erp_act_result { ____Placeholder_zfcp_erp_act_result } zfcp_erp_act_result ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_1 (struct scsi_device*,int ,char*,int ) ;
 int FUNC_2 (struct zfcp_port*,int ,char*) ;
 struct zfcp_scsi_dev* FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static enum zfcp_erp_act_result FUNC_5(
 struct zfcp_erp_action *VAR_2, enum zfcp_erp_act_result VAR_3)
{
 enum zfcp_erp_act_type VAR_4 = VAR_2->type;
 struct zfcp_adapter *VAR_5 = VAR_2->adapter;
 struct zfcp_port *VAR_6 = VAR_2->port;
 struct scsi_device *VAR_7 = VAR_2->sdev;
 struct zfcp_scsi_dev *VAR_8;
 u32 VAR_9 = VAR_2->status;

 switch (VAR_4) {
 case 131:
  if (FUNC_4(&VAR_5->status, VAR_9)) {
   FUNC_0(VAR_5,
       VAR_1,
       "ersscg1");
   return VAR_0;
  }
  break;

 case 128:
 case 129:
  if (FUNC_4(&VAR_6->status, VAR_9)) {
   FUNC_2(VAR_6,
           VAR_1,
           "ersscg2");
   return VAR_0;
  }
  break;

 case 130:
  VAR_8 = FUNC_3(VAR_7);
  if (FUNC_4(&VAR_8->status, VAR_9)) {
   FUNC_1(VAR_7,
          VAR_1,
          "ersscg3", 0);
   return VAR_0;
  }
  break;
 }
 return VAR_3;
}
