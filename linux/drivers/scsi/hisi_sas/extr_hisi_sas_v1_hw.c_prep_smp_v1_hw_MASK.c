
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
struct hisi_sas_device {unsigned int device_id; } ;
struct hisi_sas_cmd_hdr {void* sts_buffer_addr; void* cmd_table_addr; void* transfer_tags; void* dw2; void* dw1; void* dw0; } ;
struct hisi_hba {int dummy; } ;
struct domain_device {struct hisi_sas_device* lldd_dev; } ;
typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (unsigned int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct hisi_sas_slot*) ;
 int FUNC_3 (struct scatterlist*) ;
 unsigned int FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_5(struct hisi_hba *VAR_9,
     struct hisi_sas_slot *VAR_10)
{
 struct sas_task *VAR_11 = VAR_10->task;
 struct hisi_sas_cmd_hdr *VAR_12 = VAR_10->cmd_hdr;
 struct domain_device *VAR_13 = VAR_11->dev;
 struct hisi_sas_port *VAR_14 = VAR_10->port;
 struct scatterlist *VAR_15;
 struct hisi_sas_device *VAR_16 = VAR_13->lldd_dev;
 dma_addr_t VAR_17;
 unsigned int VAR_18;


 VAR_15 = &VAR_11->smp_task.smp_req;
 VAR_18 = FUNC_4(VAR_15);
 VAR_17 = FUNC_3(VAR_15);



 VAR_12->dw0 = FUNC_0((VAR_14->id << VAR_6) |
          (1 << VAR_7) |
          (1 << VAR_4) |
          (2 << VAR_1));


 VAR_12->dw1 = FUNC_0(VAR_16->device_id << VAR_2);


 VAR_12->dw2 = FUNC_0((((VAR_18-4)/4) << VAR_0) |
          (VAR_8/4 <<
          VAR_5));

 VAR_12->transfer_tags = FUNC_0(VAR_10->idx << VAR_3);

 VAR_12->cmd_table_addr = FUNC_1(VAR_17);
 VAR_12->sts_buffer_addr = FUNC_1(FUNC_2(VAR_10));
}
