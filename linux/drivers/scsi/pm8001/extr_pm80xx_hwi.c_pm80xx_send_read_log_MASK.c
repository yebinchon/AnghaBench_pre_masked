
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sata_start_req {int fis_type; int flags; int lbal; int sector_count; int ncqtag_atap_dir_m_dad; int sata_fis; void* device_id; void* tag; int command; } ;
struct sas_task {struct domain_device* dev; int task_done; } ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {size_t device_id; int id; } ;
struct pm8001_ccb_info {size_t ccb_tag; scalar_t__ n_elem; struct sas_task* task; struct pm8001_device* device; } ;
struct inbound_queue_table {int dummy; } ;
struct host_to_dev_fis {int fis_type; int flags; int lbal; int sector_count; int ncqtag_atap_dir_m_dad; int sata_fis; void* device_id; void* tag; int command; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;
typedef int sata_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (struct domain_device*) ;
 struct domain_device* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct sata_start_req*,int) ;
 int FUNC_5 (struct sata_start_req*,int ,int) ;
 int FUNC_6 (struct pm8001_hba_info*,struct inbound_queue_table*,size_t,struct sata_start_req*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct pm8001_hba_info*,size_t*) ;
 int FUNC_9 (struct pm8001_hba_info*,size_t) ;
 int VAR_5 ;
 struct sas_task* FUNC_10 (int ) ;
 int FUNC_11 (struct sas_task*) ;

__attribute__((used)) static void FUNC_12(struct pm8001_hba_info *VAR_6,
  struct pm8001_device *VAR_7)
{
 struct sata_start_req VAR_8;
 int VAR_9;
 u32 VAR_10;
 struct pm8001_ccb_info *VAR_11;
 struct sas_task *VAR_12 = ((void*)0);
 struct host_to_dev_fis VAR_13;
 struct domain_device *VAR_14;
 struct inbound_queue_table *VAR_15;
 u32 VAR_16 = VAR_4;

 VAR_12 = FUNC_10(VAR_1);

 if (!VAR_12) {
  FUNC_0(VAR_6,
   FUNC_7("cannot allocate task !!!\n"));
  return;
 }
 VAR_12->task_done = VAR_5;

 VAR_9 = FUNC_8(VAR_6, &VAR_10);
 if (VAR_9) {
  FUNC_11(VAR_12);
  FUNC_0(VAR_6,
   FUNC_7("cannot allocate tag !!!\n"));
  return;
 }




 VAR_14 = FUNC_3(sizeof(struct domain_device), VAR_1);
 if (!VAR_14) {
  FUNC_11(VAR_12);
  FUNC_9(VAR_6, VAR_10);
  FUNC_0(VAR_6,
   FUNC_7("Domain device cannot be allocated\n"));
  return;
 }

 VAR_12->dev = VAR_14;
 VAR_12->dev->lldd_dev = VAR_7;

 VAR_11 = &VAR_6->ccb_info[VAR_10];
 VAR_11->device = VAR_7;
 VAR_11->ccb_tag = VAR_10;
 VAR_11->task = VAR_12;
 VAR_11->n_elem = 0;
 VAR_7->id |= VAR_3;
 VAR_7->id |= VAR_2;

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_15 = &VAR_6->inbnd_q_tbl[0];


 FUNC_5(&VAR_13, 0, sizeof(struct host_to_dev_fis));
 VAR_13.fis_type = 0x27;
 VAR_13.flags = 0x80;
 VAR_13.command = VAR_0;
 VAR_13.lbal = 0x10;
 VAR_13.sector_count = 0x1;

 VAR_8.tag = FUNC_1(VAR_10);
 VAR_8.device_id = FUNC_1(VAR_7->device_id);
 VAR_8.ncqtag_atap_dir_m_dad |= ((0x1 << 7) | (0x5 << 9));
 FUNC_4(&VAR_8.sata_fis, &VAR_13, sizeof(struct host_to_dev_fis));

 VAR_9 = FUNC_6(VAR_6, VAR_15, VAR_16, &VAR_8, 0);
 if (VAR_9) {
  FUNC_11(VAR_12);
  FUNC_9(VAR_6, VAR_10);
  FUNC_2(VAR_14);
 }
}
