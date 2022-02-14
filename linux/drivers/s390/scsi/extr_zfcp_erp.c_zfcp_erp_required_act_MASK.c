
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct zfcp_scsi_dev* FUNC_1 (struct scsi_device*) ;

__attribute__((used)) static enum zfcp_erp_act_type FUNC_2(enum zfcp_erp_act_type VAR_6,
     struct zfcp_adapter *VAR_7,
     struct zfcp_port *VAR_8,
     struct scsi_device *VAR_9)
{
 enum zfcp_erp_act_type VAR_10 = VAR_6;
 int VAR_11, VAR_12, VAR_13;
 struct zfcp_scsi_dev *VAR_14;

 switch (VAR_6) {
 case 130:
  VAR_14 = FUNC_1(VAR_9);
  VAR_11 = FUNC_0(&VAR_14->status);
  if (VAR_11 & VAR_1)
   return 0;
  VAR_12 = FUNC_0(&VAR_8->status);
  if (!(VAR_12 & VAR_4) ||
        VAR_12 & VAR_0)
   return 0;
  if (!(VAR_12 & VAR_5))
   VAR_10 = 129;

 case 128:
  VAR_12 = FUNC_0(&VAR_8->status);
  if (!(VAR_12 & VAR_3))
   VAR_10 = 129;

 case 129:
  VAR_12 = FUNC_0(&VAR_8->status);
  if (VAR_12 & VAR_1)
   return 0;
  VAR_13 = FUNC_0(&VAR_7->status);
  if (!(VAR_13 & VAR_4) ||
        VAR_13 & VAR_0)
   return 0;
  if (VAR_12 & VAR_2)
   return VAR_10;
  if (!(VAR_13 & VAR_5))
   VAR_10 = 131;

 case 131:
  VAR_13 = FUNC_0(&VAR_7->status);
  if (VAR_13 & VAR_1)
   return 0;
  if (!(VAR_13 & VAR_4) &&
      !(VAR_13 & VAR_3))
   return 0;
 }

 return VAR_10;
}
