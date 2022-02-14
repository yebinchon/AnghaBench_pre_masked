
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_10__ {int* scsi_lun; } ;
struct srp_cmd {int add_cdb_len; int tag; int task_attr; TYPE_5__ lun; int cdb; int sol_not; } ;
struct TYPE_7__ {struct ibmvscsis_nexus* ibmv_nexus; } ;
struct scsi_info {int intr_lock; int dev; int active_q; TYPE_2__ tport; } ;
struct iu_entry {TYPE_1__* sbuf; } ;
struct ibmvscsis_nexus {int se_sess; } ;
struct TYPE_9__ {int tag; } ;
struct TYPE_8__ {int sol_not; } ;
struct ibmvscsis_cmd {int list; int sense_buf; TYPE_4__ se_cmd; TYPE_3__ rsp; struct iu_entry* iue; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {scalar_t__ buf; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct scsi_info*,struct ibmvscsis_cmd*) ;
 int FUNC_3 (struct scsi_info*,int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct srp_cmd*,int*,int *) ;
 int FUNC_10 (TYPE_4__*,int ,int ,int ,int ,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_11(struct scsi_info *VAR_5,
    struct ibmvscsis_cmd *VAR_6)
{
 struct iu_entry *VAR_7 = VAR_6->iue;
 struct srp_cmd *VAR_8 = (struct srp_cmd *)VAR_7->sbuf->buf;
 struct ibmvscsis_nexus *VAR_9;
 u64 VAR_10 = 0;
 enum dma_data_direction VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;

 VAR_9 = VAR_5->tport.ibmv_nexus;
 if (VAR_8->add_cdb_len & 0x03) {
  FUNC_1(&VAR_5->dev, "parse_cmd: reserved bits set in IU\n");
  FUNC_7(&VAR_5->intr_lock);
  FUNC_3(VAR_5, VAR_0, 0);
  FUNC_2(VAR_5, VAR_6);
  FUNC_8(&VAR_5->intr_lock);
  return;
 }

 if (FUNC_9(VAR_8, &VAR_11, &VAR_10)) {
  FUNC_1(&VAR_5->dev, "0x%llx: parsing SRP descriptor table failed.\n",
   VAR_8->tag);
  goto fail;
 }

 VAR_6->rsp.sol_not = VAR_8->sol_not;

 switch (VAR_8->task_attr) {
 case 128:
  VAR_12 = VAR_4;
  break;
 case 129:
  VAR_12 = VAR_3;
  break;
 case 130:
  VAR_12 = VAR_2;
  break;
 case 131:
  VAR_12 = VAR_1;
  break;
 default:
  FUNC_1(&VAR_5->dev, "Invalid task attribute %d\n",
   VAR_8->task_attr);
  goto fail;
 }

 VAR_6->se_cmd.tag = FUNC_0(VAR_8->tag);

 FUNC_7(&VAR_5->intr_lock);
 FUNC_4(&VAR_6->list, &VAR_5->active_q);
 FUNC_8(&VAR_5->intr_lock);

 VAR_8->lun.scsi_lun[0] &= 0x3f;

 VAR_13 = FUNC_10(&VAR_6->se_cmd, VAR_9->se_sess, VAR_8->cdb,
          VAR_6->sense_buf, FUNC_6(&VAR_8->lun),
          VAR_10, VAR_12, VAR_11, 0);
 if (VAR_13) {
  FUNC_1(&VAR_5->dev, "target_submit_cmd failed, rc %d\n", VAR_13);
  FUNC_7(&VAR_5->intr_lock);
  FUNC_5(&VAR_6->list);
  FUNC_2(VAR_5, VAR_6);
  FUNC_8(&VAR_5->intr_lock);
  goto fail;
 }
 return;

fail:
 FUNC_7(&VAR_5->intr_lock);
 FUNC_3(VAR_5, VAR_0, 0);
 FUNC_8(&VAR_5->intr_lock);
}
