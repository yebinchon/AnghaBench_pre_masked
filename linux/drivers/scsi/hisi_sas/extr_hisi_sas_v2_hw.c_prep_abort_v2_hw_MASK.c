
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sas_task {struct domain_device* dev; } ;
struct hisi_sas_slot {int idx; struct timer_list internal_abort_timer; struct hisi_sas_port* port; struct hisi_sas_cmd_hdr* cmd_hdr; struct sas_task* task; } ;
struct hisi_sas_port {int id; } ;
struct hisi_sas_cmd_hdr {void* transfer_tags; void* dw7; void* dw1; void* dw0; } ;
struct hisi_hba {int dummy; } ;
struct domain_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct domain_device*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct timer_list*,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct timer_list*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hisi_hba *VAR_8,
  struct hisi_sas_slot *VAR_9,
  int VAR_10, int VAR_11, int VAR_12)
{
 struct sas_task *VAR_13 = VAR_9->task;
 struct domain_device *VAR_14 = VAR_13->dev;
 struct hisi_sas_cmd_hdr *VAR_15 = VAR_9->cmd_hdr;
 struct hisi_sas_port *VAR_16 = VAR_9->port;
 struct timer_list *VAR_17 = &VAR_9->internal_abort_timer;


 FUNC_4(VAR_17, VAR_6, 0);

 FUNC_2(VAR_17, VAR_7 + FUNC_3(100));


 VAR_15->dw0 = FUNC_0((5 << VAR_3) |
          (VAR_16->id << VAR_5) |
          (FUNC_1(VAR_14) <<
    VAR_0) |
          (VAR_11 << VAR_1));


 VAR_15->dw1 = FUNC_0(VAR_10 << VAR_4);


 VAR_15->dw7 = FUNC_0(VAR_12 << VAR_2);
 VAR_15->transfer_tags = FUNC_0(VAR_9->idx);
}
