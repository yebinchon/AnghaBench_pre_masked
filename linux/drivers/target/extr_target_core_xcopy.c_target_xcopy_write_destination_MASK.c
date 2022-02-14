
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct se_cmd {int se_cmd_flags; int scsi_status; int t_data_nents; int t_data_sg; } ;
struct xcopy_pt_cmd {struct se_cmd se_cmd; int * sense_buffer; int xpt_passthrough_sem; } ;
struct xcopy_op {scalar_t__ op_origin; int xop_data_nents; int xop_data_sg; TYPE_2__* src_pt_cmd; struct xcopy_pt_cmd* dst_pt_cmd; } ;
struct TYPE_3__ {int block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {struct se_cmd se_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 struct xcopy_pt_cmd* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (char*,unsigned long long,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,unsigned char*) ;
 int FUNC_6 (scalar_t__,unsigned char*) ;
 int FUNC_7 (struct xcopy_pt_cmd*) ;
 int FUNC_8 (struct xcopy_pt_cmd*,struct xcopy_op*,struct se_device*,unsigned char*,int,int) ;
 int FUNC_9 (struct se_cmd*,int ) ;
 int FUNC_10 (struct se_cmd*,int *,int *,int,int ,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(
 struct se_cmd *VAR_8,
 struct xcopy_op *VAR_9,
 struct se_device *VAR_10,
 sector_t VAR_11,
 u32 VAR_12)
{
 struct xcopy_pt_cmd *VAR_13;
 struct se_cmd *VAR_14;
 u32 VAR_15 = (VAR_12 * VAR_10->dev_attrib.block_size);
 int VAR_16;
 unsigned char VAR_17[16];
 bool VAR_18 = (VAR_9->op_origin == VAR_5);

 VAR_13 = FUNC_1(sizeof(struct xcopy_pt_cmd), VAR_2);
 if (!VAR_13) {
  FUNC_4("Unable to allocate xcopy_pt_cmd\n");
  return -VAR_1;
 }
 FUNC_0(&VAR_13->xpt_passthrough_sem);
 VAR_14 = &VAR_13->se_cmd;

 FUNC_2(&VAR_17[0], 0, 16);
 VAR_17[0] = VAR_4;
 FUNC_6(VAR_11, &VAR_17[2]);
 FUNC_5(VAR_12, &VAR_17[10]);
 FUNC_3("XCOPY: Built WRITE_16: LBA: %llu Sectors: %u Length: %u\n",
  (unsigned long long)VAR_11, VAR_12, VAR_15);

 FUNC_10(VAR_14, &VAR_7, &VAR_6, VAR_15,
         VAR_0, 0, &VAR_13->sense_buffer[0]);
 VAR_9->dst_pt_cmd = VAR_13;

 VAR_16 = FUNC_8(VAR_13, VAR_9, VAR_10, &VAR_17[0],
    VAR_18, 0);
 if (VAR_16 < 0) {
  struct se_cmd *VAR_19 = &VAR_9->src_pt_cmd->se_cmd;
  VAR_8->scsi_status = VAR_13->se_cmd.scsi_status;





  VAR_19->se_cmd_flags &= ~VAR_3;
  VAR_19->t_data_sg = VAR_9->xop_data_sg;
  VAR_19->t_data_nents = VAR_9->xop_data_nents;

  FUNC_9(VAR_14, 0);
  return VAR_16;
 }

 VAR_16 = FUNC_7(VAR_13);
 if (VAR_16 < 0) {
  VAR_8->scsi_status = VAR_13->se_cmd.scsi_status;
  VAR_14->se_cmd_flags &= ~VAR_3;
  FUNC_9(VAR_14, 0);
  return VAR_16;
 }

 return 0;
}
