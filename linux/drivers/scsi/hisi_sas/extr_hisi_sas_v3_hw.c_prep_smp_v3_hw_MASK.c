
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_2__ {struct scatterlist smp_req; } ;
struct sas_task {TYPE_1__ smp_task; struct domain_device* dev; } ;
struct hisi_sas_slot {unsigned int idx; struct hisi_sas_port* port; struct hisi_sas_cmd_hdr* cmd_hdr; struct sas_task* task; } ;
struct hisi_sas_port {int id; } ;
struct hisi_sas_device {int device_id; } ;
struct hisi_sas_cmd_hdr {void* sts_buffer_addr; void* cmd_table_addr; void* transfer_tags; void* dw2; void* dw1; void* dw0; } ;
struct hisi_hba {int dummy; } ;
struct domain_device {struct hisi_sas_device* lldd_dev; } ;
typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (unsigned int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct hisi_sas_slot*) ;
 int FUNC_3 (struct scatterlist*) ;
 unsigned int FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_5(struct hisi_hba *VAR_11,
     struct hisi_sas_slot *VAR_12)
{
 struct sas_task *VAR_13 = VAR_12->task;
 struct hisi_sas_cmd_hdr *VAR_14 = VAR_12->cmd_hdr;
 struct domain_device *VAR_15 = VAR_13->dev;
 struct hisi_sas_port *VAR_16 = VAR_12->port;
 struct scatterlist *VAR_17;
 struct hisi_sas_device *VAR_18 = VAR_15->lldd_dev;
 dma_addr_t VAR_19;
 unsigned int VAR_20;


 VAR_17 = &VAR_13->smp_task.smp_req;
 VAR_20 = FUNC_4(VAR_17);
 VAR_19 = FUNC_3(VAR_17);



 VAR_14->dw0 = FUNC_0((VAR_16->id << VAR_7) |
          (1 << VAR_8) |
          (2 << VAR_1));


 VAR_14->dw1 = FUNC_0((VAR_18->device_id << VAR_2) |
          (1 << VAR_4) |
          (VAR_9 << VAR_3));


 VAR_14->dw2 = FUNC_0((((VAR_20 - 4) / 4) << VAR_0) |
          (VAR_10 / 4 <<
          VAR_6));

 VAR_14->transfer_tags = FUNC_0(VAR_12->idx << VAR_5);

 VAR_14->cmd_table_addr = FUNC_1(VAR_19);
 VAR_14->sts_buffer_addr = FUNC_1(FUNC_2(VAR_12));

}
