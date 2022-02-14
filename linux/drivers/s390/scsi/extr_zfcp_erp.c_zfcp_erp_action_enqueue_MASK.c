
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zfcp_port {int dummy; } ;
struct zfcp_erp_action {int list; } ;
struct zfcp_adapter {int erp_ready_wq; int erp_ready_head; int erp_total_count; int status; int erp_thread; } ;
struct scsi_device {int dummy; } ;
typedef enum zfcp_erp_act_type { ____Placeholder_zfcp_erp_act_type } zfcp_erp_act_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,struct zfcp_adapter*,struct zfcp_port*,struct scsi_device*,int,int) ;
 int FUNC_4 (int,struct zfcp_adapter*,struct zfcp_port*,struct scsi_device*) ;
 int FUNC_5 (int,struct zfcp_adapter*,struct zfcp_port*,struct scsi_device*) ;
 struct zfcp_erp_action* FUNC_6 (int,int ,struct zfcp_adapter*,struct zfcp_port*,struct scsi_device*) ;

__attribute__((used)) static void FUNC_7(enum zfcp_erp_act_type VAR_3,
        struct zfcp_adapter *VAR_4,
        struct zfcp_port *VAR_5,
        struct scsi_device *VAR_6,
        char *VAR_7, u32 VAR_8)
{
 enum zfcp_erp_act_type VAR_9;
 struct zfcp_erp_action *VAR_10;

 VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);
 if (!VAR_9) {
  VAR_9 = VAR_0;
  goto out;
 }

 if (!VAR_4->erp_thread) {
  VAR_9 = VAR_1;
  goto out;
 }

 VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
 if (!VAR_9)
  goto out;

 VAR_10 = FUNC_6(VAR_9, VAR_8, VAR_4, VAR_5, VAR_6);
 if (!VAR_10) {
  VAR_9 |= VAR_1;
  goto out;
 }
 FUNC_0(VAR_2, &VAR_4->status);
 ++VAR_4->erp_total_count;
 FUNC_1(&VAR_10->list, &VAR_4->erp_ready_head);
 FUNC_2(&VAR_4->erp_ready_wq);
 out:
 FUNC_3(VAR_7, VAR_4, VAR_5, VAR_6, VAR_3, VAR_9);
}
