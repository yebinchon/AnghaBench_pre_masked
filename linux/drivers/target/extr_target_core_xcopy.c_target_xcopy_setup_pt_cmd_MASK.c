
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int t_data_nents; int t_data_sg; int se_cmd_flags; int data_length; scalar_t__ tag; struct se_device* se_dev; int * se_lun; } ;
struct xcopy_pt_cmd {struct se_cmd se_cmd; } ;
struct xcopy_op {int xop_data_nents; int xop_data_sg; TYPE_1__* xop_se_cmd; } ;
struct se_device {int xcopy_lun; } ;
typedef scalar_t__ sense_reason_t ;
struct TYPE_2__ {struct se_device* se_dev; int * se_lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int *,int ,int,int) ;
 scalar_t__ FUNC_2 (struct se_cmd*,unsigned char*) ;
 scalar_t__ FUNC_3 (struct se_cmd*,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(
 struct xcopy_pt_cmd *VAR_3,
 struct xcopy_op *VAR_4,
 struct se_device *VAR_5,
 unsigned char *VAR_6,
 bool VAR_7,
 bool VAR_8)
{
 struct se_cmd *VAR_9 = &VAR_3->se_cmd;
 sense_reason_t VAR_10;
 int VAR_11 = 0, VAR_12;





 if (VAR_7) {
  VAR_9->se_lun = &VAR_5->xcopy_lun;
  VAR_9->se_dev = VAR_5;
 } else {
  VAR_9->se_lun = VAR_4->xop_se_cmd->se_lun;
  VAR_9->se_dev = VAR_4->xop_se_cmd->se_dev;
 }
 VAR_9->se_cmd_flags |= VAR_2;

 VAR_9->tag = 0;
 VAR_10 = FUNC_2(VAR_9, VAR_6);
 if (VAR_10) {
  VAR_11 = -VAR_0;
  goto out;
 }

 if (VAR_8) {
  VAR_12 = FUNC_1(&VAR_9->t_data_sg, &VAR_9->t_data_nents,
          VAR_9->data_length, 0, 0);
  if (VAR_12 < 0) {
   VAR_11 = VAR_12;
   goto out;
  }





  VAR_9->se_cmd_flags |= VAR_1;
 } else {




  VAR_10 = FUNC_3(VAR_9,
     VAR_4->xop_data_sg, VAR_4->xop_data_nents,
     ((void*)0), 0);
  if (VAR_10) {
   VAR_11 = -VAR_0;
   goto out;
  }

  FUNC_0("Setup PASSTHROUGH_NOALLOC t_data_sg: %p t_data_nents:"
    " %u\n", VAR_9->t_data_sg, VAR_9->t_data_nents);
 }

 return 0;

out:
 return VAR_11;
}
