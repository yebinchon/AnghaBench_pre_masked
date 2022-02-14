
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int iov_cnt; int iov_bidi_cnt; int cdb_off; struct iovec* iov; } ;
struct TYPE_3__ {int len_op; scalar_t__ cmd_id; scalar_t__ uflags; scalar_t__ kflags; } ;
struct tcmu_mailbox {int cmd_head; TYPE_2__ req; TYPE_1__ hdr; } ;
struct tcmu_dev {int cmdr_size; size_t data_size; int uio_info; int inflight_queue; int cmd_timer; int cmd_time_out; struct tcmu_mailbox* mb_addr; int qfull_queue; int flags; } ;
struct tcmu_cmd_entry {int cmd_head; TYPE_2__ req; TYPE_1__ hdr; } ;
struct tcmu_cmd {int dbi_cnt; int dbi_cur; int flags; int queue_entry; scalar_t__ cmd_id; struct se_cmd* se_cmd; struct tcmu_dev* tcmu_dev; } ;
struct se_cmd {scalar_t__ data_direction; int se_cmd_flags; int t_task_cdb; int t_bidi_data_nents; int t_bidi_data_sg; int t_data_nents; int t_data_sg; } ;
struct iovec {int dummy; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,size_t,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct tcmu_cmd*) ;
 size_t FUNC_3 (int,int) ;
 int FUNC_4 (struct tcmu_dev*,struct tcmu_cmd*,size_t,size_t) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (void*,int ,int ) ;
 int FUNC_8 (struct tcmu_mailbox*,int ,size_t) ;
 int FUNC_9 (char*,size_t,size_t,int,size_t) ;
 int FUNC_10 (struct tcmu_dev*,struct tcmu_cmd*,int ,int ,struct iovec**,int*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct tcmu_cmd*,int) ;
 size_t FUNC_14 (int) ;
 size_t FUNC_15 (struct tcmu_cmd*,size_t) ;
 size_t FUNC_16 (struct tcmu_cmd*) ;
 int FUNC_17 (struct tcmu_cmd*) ;
 int FUNC_18 (struct tcmu_mailbox*,int) ;
 int FUNC_19 (int *,size_t) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (struct tcmu_cmd*,int ,int *) ;
 scalar_t__ FUNC_22 (int ,int *) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int FUNC_24(struct tcmu_cmd *VAR_13, sense_reason_t *VAR_14)
{
 struct tcmu_dev *VAR_15 = VAR_13->tcmu_dev;
 struct se_cmd *VAR_16 = VAR_13->se_cmd;
 size_t VAR_17, VAR_18;
 struct tcmu_mailbox *VAR_19;
 struct tcmu_cmd_entry *VAR_20;
 struct iovec *VAR_21;
 int VAR_22, VAR_23;
 uint32_t VAR_24;
 uint64_t VAR_25;
 bool VAR_26;
 size_t VAR_27 = FUNC_16(VAR_13);

 *VAR_14 = VAR_11;

 if (FUNC_22(VAR_4, &VAR_15->flags)) {
  *VAR_14 = VAR_10;
  return -1;
 }

 if (FUNC_22(VAR_5, &VAR_15->flags)) {
  *VAR_14 = VAR_9;
  return -1;
 }
 VAR_17 = FUNC_14(VAR_13->dbi_cnt);
 VAR_18 = FUNC_15(VAR_13, VAR_17);

 if (!FUNC_6(&VAR_15->qfull_queue))
  goto queue;

 VAR_19 = VAR_15->mb_addr;
 VAR_24 = VAR_19->cmd_head % VAR_15->cmdr_size;
 if ((VAR_18 > (VAR_15->cmdr_size / 2)) ||
     VAR_27 > VAR_15->data_size) {
  FUNC_9("TCMU: Request of size %zu/%zu is too big for %u/%zu "
   "cmd ring/data area\n", VAR_18, VAR_27,
   VAR_15->cmdr_size, VAR_15->data_size);
  *VAR_14 = VAR_8;
  return -1;
 }

 if (!FUNC_4(VAR_15, VAR_13, VAR_18, VAR_27)) {




  FUNC_13(VAR_13, VAR_13->dbi_cur);
  FUNC_17(VAR_13);
  goto queue;
 }


 if (FUNC_3(VAR_24, VAR_15->cmdr_size) < VAR_18) {
  size_t VAR_28 = FUNC_3(VAR_24, VAR_15->cmdr_size);

  VAR_20 = (void *) VAR_19 + VAR_0 + VAR_24;
  FUNC_20(&VAR_20->hdr.len_op, VAR_7);
  FUNC_19(&VAR_20->hdr.len_op, VAR_28);
  VAR_20->hdr.cmd_id = 0;
  VAR_20->hdr.kflags = 0;
  VAR_20->hdr.uflags = 0;
  FUNC_18(VAR_20, sizeof(*VAR_20));

  FUNC_0(VAR_19->cmd_head, VAR_28, VAR_15->cmdr_size);
  FUNC_18(VAR_19, sizeof(*VAR_19));

  VAR_24 = VAR_19->cmd_head % VAR_15->cmdr_size;
  FUNC_1(VAR_24 != 0);
 }

 VAR_20 = (void *) VAR_19 + VAR_0 + VAR_24;
 FUNC_8(VAR_20, 0, VAR_18);
 FUNC_20(&VAR_20->hdr.len_op, VAR_6);


 FUNC_17(VAR_13);
 VAR_21 = &VAR_20->req.iov[0];
 VAR_22 = 0;
 VAR_26 = (VAR_16->data_direction == VAR_1
  || VAR_16->se_cmd_flags & VAR_2);
 FUNC_10(VAR_15, VAR_13, VAR_16->t_data_sg,
     VAR_16->t_data_nents, &VAR_21, &VAR_22,
     VAR_26);
 VAR_20->req.iov_cnt = VAR_22;


 VAR_22 = 0;
 if (VAR_16->se_cmd_flags & VAR_2) {
  VAR_21++;
  FUNC_10(VAR_15, VAR_13, VAR_16->t_bidi_data_sg,
      VAR_16->t_bidi_data_nents, &VAR_21, &VAR_22,
      0);
 }
 VAR_20->req.iov_bidi_cnt = VAR_22;

 VAR_23 = FUNC_21(VAR_13, VAR_15->cmd_time_out,
       &VAR_15->cmd_timer);
 if (VAR_23) {
  FUNC_13(VAR_13, VAR_13->dbi_cnt);

  *VAR_14 = VAR_12;
  return -1;
 }
 VAR_20->hdr.cmd_id = VAR_13->cmd_id;





 VAR_17 = FUNC_14(VAR_20->req.iov_cnt +
             VAR_20->req.iov_bidi_cnt);
 VAR_18 = FUNC_15(VAR_13, VAR_17);

 FUNC_19(&VAR_20->hdr.len_op, VAR_18);


 VAR_25 = VAR_0 + VAR_24 + VAR_17;
 FUNC_7((void *) VAR_19 + VAR_25, VAR_16->t_task_cdb, FUNC_11(VAR_16->t_task_cdb));
 VAR_20->req.cdb_off = VAR_25;
 FUNC_18(VAR_20, sizeof(*VAR_20));

 FUNC_0(VAR_19->cmd_head, VAR_18, VAR_15->cmdr_size);
 FUNC_18(VAR_19, sizeof(*VAR_19));

 FUNC_5(&VAR_13->queue_entry, &VAR_15->inflight_queue);
 FUNC_12(VAR_3, &VAR_13->flags);


 FUNC_23(&VAR_15->uio_info);

 return 0;

queue:
 if (FUNC_2(VAR_13)) {
  *VAR_14 = VAR_12;
  return -1;
 }

 return 1;
}
