
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcmu_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ read_len; int scsi_status; int sense_buffer; } ;
struct TYPE_3__ {int uflags; } ;
struct tcmu_cmd_entry {TYPE_2__ rsp; TYPE_1__ hdr; } ;
struct tcmu_cmd {int dbi_cnt; struct se_cmd* se_cmd; int queue_entry; int flags; struct tcmu_dev* tcmu_dev; } ;
struct se_cmd {scalar_t__ data_length; int se_cmd_flags; struct se_cmd* data_direction; } ;


 struct se_cmd* VAR_0 ;
 struct se_cmd* VAR_1 ;
 struct se_cmd* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct se_cmd*) ;
 int FUNC_1 (struct tcmu_dev*,struct tcmu_cmd*,int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*,int ) ;
 int FUNC_6 (struct se_cmd*,int ,scalar_t__) ;
 int FUNC_7 (struct tcmu_cmd*,int ) ;
 int FUNC_8 (struct tcmu_cmd*) ;
 int FUNC_9 (struct tcmu_cmd*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct se_cmd*,int ) ;

__attribute__((used)) static void FUNC_12(struct tcmu_cmd *VAR_9, struct tcmu_cmd_entry *VAR_10)
{
 struct se_cmd *VAR_11 = VAR_9->se_cmd;
 struct tcmu_dev *VAR_12 = VAR_9->tcmu_dev;
 bool VAR_13 = 0;
 uint32_t VAR_14;





 if (FUNC_10(VAR_6, &VAR_9->flags)) {
  FUNC_0(VAR_11);
  goto out;
 }

 FUNC_2(&VAR_9->queue_entry);

 FUNC_8(VAR_9);

 if (VAR_10->hdr.uflags & VAR_8) {
  FUNC_4("TCMU: Userspace set UNKNOWN_OP flag on se_cmd %p\n",
   VAR_9->se_cmd);
  VAR_10->rsp.scsi_status = VAR_3;
  goto done;
 }

 VAR_14 = VAR_11->data_length;
 if (VAR_11->data_direction == VAR_0 &&
     (VAR_10->hdr.uflags & VAR_7) && VAR_10->rsp.read_len) {
  VAR_13 = 1;
  if (VAR_10->rsp.read_len < VAR_14)
   VAR_14 = VAR_10->rsp.read_len;
 }

 if (VAR_10->rsp.scsi_status == VAR_3) {
  FUNC_11(VAR_11, VAR_10->rsp.sense_buffer);
  if (!VAR_13 )
   goto done;
  else
   VAR_11->se_cmd_flags |= VAR_5;
 }
 if (VAR_11->se_cmd_flags & VAR_4) {

  FUNC_1(VAR_12, VAR_9, 1, VAR_14);
 } else if (VAR_11->data_direction == VAR_0) {
  FUNC_1(VAR_12, VAR_9, 0, VAR_14);
 } else if (VAR_11->data_direction == VAR_2) {

 } else if (VAR_11->data_direction != VAR_1) {
  FUNC_4("TCMU: data direction was %d!\n",
   VAR_11->data_direction);
 }

done:
 if (VAR_13) {
  FUNC_3("read_len = %d\n", VAR_14);
  FUNC_6(VAR_9->se_cmd,
     VAR_10->rsp.scsi_status, VAR_14);
 } else
  FUNC_5(VAR_9->se_cmd, VAR_10->rsp.scsi_status);

out:
 VAR_9->se_cmd = ((void*)0);
 FUNC_7(VAR_9, VAR_9->dbi_cnt);
 FUNC_9(VAR_9);
}
