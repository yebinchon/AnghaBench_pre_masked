
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {int dev; } ;
struct zfcp_erp_action {int type; int status; int step; struct scsi_device* sdev; struct zfcp_port* port; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int ref; int service_level; int ns_up_work; int work_queue; } ;
struct scsi_device {int dummy; } ;
typedef enum zfcp_erp_act_result { ____Placeholder_zfcp_erp_act_result } zfcp_erp_act_result ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct scsi_device*) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct zfcp_port*) ;
 int FUNC_7 (struct zfcp_adapter*) ;

__attribute__((used)) static void FUNC_8(struct zfcp_erp_action *VAR_4,
        enum zfcp_erp_act_result VAR_5)
{
 struct zfcp_adapter *VAR_6 = VAR_4->adapter;
 struct zfcp_port *VAR_7 = VAR_4->port;
 struct scsi_device *VAR_8 = VAR_4->sdev;

 switch (VAR_4->type) {
 case 130:
  if (!(VAR_4->status & VAR_2))
   FUNC_4(VAR_8);
  FUNC_6(VAR_7);
  break;

 case 129:





  if (VAR_4->step != VAR_0)
   if (VAR_5 == VAR_1)
    FUNC_6(VAR_7);

 case 128:
  FUNC_1(&VAR_7->dev);
  break;

 case 131:
  if (VAR_5 == VAR_1) {
   FUNC_3(&VAR_6->service_level);
   FUNC_7(VAR_6);
   FUNC_2(VAR_6->work_queue, &VAR_6->ns_up_work);
  } else
   FUNC_5(&VAR_6->service_level);

  FUNC_0(&VAR_6->ref, VAR_3);
  break;
 }
}
