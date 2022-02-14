
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_task {struct domain_device* dev; } ;
struct hisi_sas_slot {int idx; struct hisi_sas_port* port; struct hisi_sas_cmd_hdr* cmd_hdr; struct sas_task* task; } ;
struct hisi_sas_port {unsigned int id; } ;
struct hisi_sas_cmd_hdr {void* transfer_tags; void* dw7; void* dw1; void* dw0; } ;
struct hisi_hba {int dummy; } ;
struct domain_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 void* FUNC_0 (int) ;
 unsigned int FUNC_1 (struct domain_device*) ;

__attribute__((used)) static void FUNC_2(struct hisi_hba *VAR_6,
  struct hisi_sas_slot *VAR_7,
  int VAR_8, int VAR_9, int VAR_10)
{
 struct sas_task *VAR_11 = VAR_7->task;
 struct domain_device *VAR_12 = VAR_11->dev;
 struct hisi_sas_cmd_hdr *VAR_13 = VAR_7->cmd_hdr;
 struct hisi_sas_port *VAR_14 = VAR_7->port;


 VAR_13->dw0 = FUNC_0((5U << VAR_3) |
          (VAR_14->id << VAR_5) |
       (FUNC_1(VAR_12)
     << VAR_0) |
     (VAR_9
      << VAR_1));


 VAR_13->dw1 = FUNC_0(VAR_8
   << VAR_4);


 VAR_13->dw7 = FUNC_0(VAR_10 << VAR_2);
 VAR_13->transfer_tags = FUNC_0(VAR_7->idx);

}
