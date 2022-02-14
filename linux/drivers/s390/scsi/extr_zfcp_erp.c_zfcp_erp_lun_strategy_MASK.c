
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_scsi_dev {int status; } ;
struct zfcp_erp_action {int step; int status; struct scsi_device* sdev; } ;
struct scsi_device {int dummy; } ;
typedef enum zfcp_erp_act_result { ____Placeholder_zfcp_erp_act_result } zfcp_erp_act_result ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct zfcp_scsi_dev* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (struct zfcp_erp_action*) ;
 int FUNC_4 (struct zfcp_erp_action*) ;

__attribute__((used)) static enum zfcp_erp_act_result FUNC_5(
 struct zfcp_erp_action *VAR_5)
{
 struct scsi_device *VAR_6 = VAR_5->sdev;
 struct zfcp_scsi_dev *VAR_7 = FUNC_1(VAR_6);

 switch (VAR_5->step) {
 case 128:
  FUNC_2(VAR_6);
  if (FUNC_0(&VAR_7->status) & VAR_3)
   return FUNC_3(VAR_5);


 case 133:
  if (FUNC_0(&VAR_7->status) & VAR_3)
   return VAR_1;
  if (VAR_5->status & VAR_4)
   return VAR_0;
  return FUNC_4(VAR_5);

 case 132:
  if (FUNC_0(&VAR_7->status) & VAR_3)
   return VAR_2;
  break;
 case 131:
 case 130:
 case 129:

  break;
 }
 return VAR_1;
}
