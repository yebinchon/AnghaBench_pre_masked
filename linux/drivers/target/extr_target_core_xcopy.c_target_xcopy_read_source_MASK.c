
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct se_cmd {scalar_t__ t_data_nents; int * t_data_sg; int scsi_status; } ;
struct xcopy_pt_cmd {struct se_cmd se_cmd; int * sense_buffer; int xpt_passthrough_sem; } ;
struct xcopy_op {scalar_t__ op_origin; scalar_t__ xop_data_nents; int * xop_data_sg; struct xcopy_pt_cmd* src_pt_cmd; } ;
struct TYPE_2__ {int block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 struct xcopy_pt_cmd* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (char*,unsigned long long,int,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,unsigned char*) ;
 int FUNC_6 (scalar_t__,unsigned char*) ;
 int FUNC_7 (struct xcopy_pt_cmd*) ;
 int FUNC_8 (struct xcopy_pt_cmd*,struct xcopy_op*,struct se_device*,unsigned char*,int,int) ;
 int FUNC_9 (struct se_cmd*,int ) ;
 int FUNC_10 (struct se_cmd*,int *,int *,int,int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(
 struct se_cmd *VAR_7,
 struct xcopy_op *VAR_8,
 struct se_device *VAR_9,
 sector_t VAR_10,
 u32 VAR_11)
{
 struct xcopy_pt_cmd *VAR_12;
 struct se_cmd *VAR_13;
 u32 VAR_14 = (VAR_11 * VAR_9->dev_attrib.block_size);
 int VAR_15;
 unsigned char VAR_16[16];
 bool VAR_17 = (VAR_8->op_origin == VAR_4);

 VAR_12 = FUNC_1(sizeof(struct xcopy_pt_cmd), VAR_2);
 if (!VAR_12) {
  FUNC_4("Unable to allocate xcopy_pt_cmd\n");
  return -VAR_1;
 }
 FUNC_0(&VAR_12->xpt_passthrough_sem);
 VAR_13 = &VAR_12->se_cmd;

 FUNC_2(&VAR_16[0], 0, 16);
 VAR_16[0] = VAR_3;
 FUNC_6(VAR_10, &VAR_16[2]);
 FUNC_5(VAR_11, &VAR_16[10]);
 FUNC_3("XCOPY: Built READ_16: LBA: %llu Sectors: %u Length: %u\n",
  (unsigned long long)VAR_10, VAR_11, VAR_14);

 FUNC_10(VAR_13, &VAR_6, &VAR_5, VAR_14,
         VAR_0, 0, &VAR_12->sense_buffer[0]);
 VAR_8->src_pt_cmd = VAR_12;

 VAR_15 = FUNC_8(VAR_12, VAR_8, VAR_9, &VAR_16[0],
    VAR_17, 1);
 if (VAR_15 < 0) {
  VAR_7->scsi_status = VAR_12->se_cmd.scsi_status;
  FUNC_9(VAR_13, 0);
  return VAR_15;
 }

 VAR_8->xop_data_sg = VAR_13->t_data_sg;
 VAR_8->xop_data_nents = VAR_13->t_data_nents;
 FUNC_3("XCOPY-READ: Saved xop->xop_data_sg: %p, num: %u for READ"
  " memory\n", VAR_8->xop_data_sg, VAR_8->xop_data_nents);

 VAR_15 = FUNC_7(VAR_12);
 if (VAR_15 < 0) {
  VAR_7->scsi_status = VAR_12->se_cmd.scsi_status;
  FUNC_9(VAR_13, 0);
  return VAR_15;
 }




 VAR_13->t_data_sg = ((void*)0);
 VAR_13->t_data_nents = 0;

 return 0;
}
