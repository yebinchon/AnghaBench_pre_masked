
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zfcp_erp_action {int type; int status; scalar_t__ fsf_req_id; int step; int timer; int list; struct zfcp_adapter* adapter; struct scsi_device* sdev; struct zfcp_port* port; } ;
struct zfcp_scsi_dev {int status; struct zfcp_erp_action erp_action; } ;
struct zfcp_port {int status; struct zfcp_erp_action erp_action; int dev; } ;
struct zfcp_adapter {int status; struct zfcp_erp_action erp_action; int ref; } ;
struct scsi_device {int dummy; } ;
typedef enum zfcp_erp_act_type { ____Placeholder_zfcp_erp_act_type } zfcp_erp_act_type ;


 int FUNC_0 (int) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct scsi_device*) ;
 struct zfcp_scsi_dev* FUNC_7 (struct scsi_device*) ;
 int FUNC_8 (struct zfcp_adapter*) ;
 int FUNC_9 (struct zfcp_port*) ;

__attribute__((used)) static struct zfcp_erp_action *FUNC_10(enum zfcp_erp_act_type VAR_5,
        u32 VAR_6,
        struct zfcp_adapter *VAR_7,
        struct zfcp_port *VAR_8,
        struct scsi_device *VAR_9)
{
 struct zfcp_erp_action *VAR_10;
 struct zfcp_scsi_dev *VAR_11;

 if (FUNC_0(VAR_5 != 130 &&
    VAR_5 != 129 &&
    VAR_5 != 128 &&
    VAR_5 != 131))
  return ((void*)0);

 switch (VAR_5) {
 case 130:
  VAR_11 = FUNC_7(VAR_9);
  if (!(VAR_6 & VAR_4))
   if (FUNC_6(VAR_9))
    return ((void*)0);
  FUNC_1(VAR_1,
    &VAR_11->status);
  VAR_10 = &VAR_11->erp_action;
  FUNC_0(VAR_10->port != VAR_8);
  FUNC_0(VAR_10->sdev != VAR_9);
  if (!(FUNC_2(&VAR_11->status) &
        VAR_2))
   VAR_6 |= VAR_3;
  break;

 case 129:
 case 128:
  if (!FUNC_3(&VAR_8->dev))
   return ((void*)0);
  FUNC_9(VAR_8);
  FUNC_1(VAR_1, &VAR_8->status);
  VAR_10 = &VAR_8->erp_action;
  FUNC_0(VAR_10->port != VAR_8);
  FUNC_0(VAR_10->sdev != ((void*)0));
  if (!(FUNC_2(&VAR_8->status) & VAR_2))
   VAR_6 |= VAR_3;
  break;

 case 131:
  FUNC_4(&VAR_7->ref);
  FUNC_8(VAR_7);
  FUNC_1(VAR_1, &VAR_7->status);
  VAR_10 = &VAR_7->erp_action;
  FUNC_0(VAR_10->port != ((void*)0));
  FUNC_0(VAR_10->sdev != ((void*)0));
  if (!(FUNC_2(&VAR_7->status) &
        VAR_2))
   VAR_6 |= VAR_3;
  break;
 }

 FUNC_0(VAR_10->adapter != VAR_7);
 FUNC_5(&VAR_10->list, 0, sizeof(VAR_10->list));
 FUNC_5(&VAR_10->timer, 0, sizeof(VAR_10->timer));
 VAR_10->step = VAR_0;
 VAR_10->fsf_req_id = 0;
 VAR_10->type = VAR_5;
 VAR_10->status = VAR_6;

 return VAR_10;
}
