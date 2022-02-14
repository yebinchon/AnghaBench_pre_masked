
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct request_queue {struct nvme_ns* queuedata; } ;
struct ppa_addr {int ppa; } ;
struct TYPE_4__ {int spba; int nsid; int opcode; } ;
struct nvme_nvm_command {TYPE_2__ get_bb; } ;
struct nvme_nvm_bb_tbl {char* tblid; int blk; int tblks; int verid; } ;
struct nvme_ns {TYPE_1__* head; struct nvme_ctrl* ctrl; } ;
struct nvme_ctrl {int device; int admin_q; } ;
struct nvme_command {int dummy; } ;
struct nvm_geo {int num_chk; int num_pln; } ;
struct nvm_dev {struct nvm_geo geo; struct request_queue* q; } ;
struct TYPE_3__ {int ns_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct nvme_nvm_bb_tbl*) ;
 struct nvme_nvm_bb_tbl* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int) ;
 int VAR_4 ;
 int FUNC_8 (int ,struct nvme_command*,struct nvme_nvm_bb_tbl*,int) ;

__attribute__((used)) static int FUNC_9(struct nvm_dev *VAR_5, struct ppa_addr VAR_6,
        u8 *VAR_7)
{
 struct request_queue *VAR_8 = VAR_5->q;
 struct nvm_geo *VAR_9 = &VAR_5->geo;
 struct nvme_ns *VAR_10 = VAR_8->queuedata;
 struct nvme_ctrl *VAR_11 = VAR_10->ctrl;
 struct nvme_nvm_command VAR_12 = {};
 struct nvme_nvm_bb_tbl *VAR_13;
 int VAR_14 = VAR_9->num_chk * VAR_9->num_pln;
 int VAR_15 = sizeof(struct nvme_nvm_bb_tbl) + VAR_14;
 int VAR_16 = 0;

 VAR_12.get_bb.opcode = VAR_4;
 VAR_12.get_bb.nsid = FUNC_0(VAR_10->head->ns_id);
 VAR_12.get_bb.spba = FUNC_1(VAR_6.ppa);

 VAR_13 = FUNC_4(VAR_15, VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_16 = FUNC_8(VAR_11->admin_q, (struct nvme_command *)&VAR_12,
        VAR_13, VAR_15);
 if (VAR_16) {
  FUNC_2(VAR_11->device, "get bad block table failed (%d)\n", VAR_16);
  VAR_16 = -VAR_1;
  goto out;
 }

 if (VAR_13->tblid[0] != 'B' || VAR_13->tblid[1] != 'B' ||
  VAR_13->tblid[2] != 'L' || VAR_13->tblid[3] != 'T') {
  FUNC_2(VAR_11->device, "bbt format mismatch\n");
  VAR_16 = -VAR_0;
  goto out;
 }

 if (FUNC_5(VAR_13->verid) != 1) {
  VAR_16 = -VAR_0;
  FUNC_2(VAR_11->device, "bbt version not supported\n");
  goto out;
 }

 if (FUNC_6(VAR_13->tblks) != VAR_14) {
  VAR_16 = -VAR_0;
  FUNC_2(VAR_11->device,
    "bbt unsuspected blocks returned (%u!=%u)",
    FUNC_6(VAR_13->tblks), VAR_14);
  goto out;
 }

 FUNC_7(VAR_7, VAR_13->blk, VAR_9->num_chk * VAR_9->num_pln);
out:
 FUNC_3(VAR_13);
 return VAR_16;
}
