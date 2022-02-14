
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_scsi_dev {int status; } ;
struct zfcp_port {int status; } ;
struct zfcp_adapter {int status; } ;
struct scsi_device {int dummy; } ;
typedef enum zfcp_erp_act_type { ____Placeholder_zfcp_erp_act_type } zfcp_erp_act_type ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct zfcp_scsi_dev* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct zfcp_adapter*,int) ;
 int FUNC_3 (struct zfcp_port*,int) ;

__attribute__((used)) static enum zfcp_erp_act_type FUNC_4(
 enum zfcp_erp_act_type VAR_1, struct zfcp_adapter *VAR_2,
 struct zfcp_port *VAR_3, struct scsi_device *VAR_4)
{
 enum zfcp_erp_act_type VAR_5 = VAR_1;
 struct zfcp_scsi_dev *VAR_6;

 switch (VAR_1) {
 case 130:
  VAR_6 = FUNC_1(VAR_4);
  if (FUNC_0(&VAR_6->status) & VAR_0)
   VAR_5 = 0;
  break;
 case 128:
  if (FUNC_0(&VAR_3->status) & VAR_0)
   VAR_5 = 0;
  break;
 case 129:
  if (FUNC_0(&VAR_3->status) &
      VAR_0) {
   VAR_5 = 0;

   FUNC_3(
    VAR_3, VAR_0);
  }
  break;
 case 131:
  if (FUNC_0(&VAR_2->status) &
      VAR_0) {
   VAR_5 = 0;

   FUNC_2(
    VAR_2, VAR_0);
  }
  break;
 }

 return VAR_5;
}
