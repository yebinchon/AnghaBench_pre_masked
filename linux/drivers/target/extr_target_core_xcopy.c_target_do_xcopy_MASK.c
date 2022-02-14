
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xcopy_op {int xop_work; struct se_cmd* xop_se_cmd; } ;
struct TYPE_2__ {int emulate_3pc; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
struct se_cmd {int* t_task_cdb; scalar_t__ data_length; struct se_device* se_dev; } ;
typedef int sense_reason_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct xcopy_op*) ;
 struct xcopy_op* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct se_cmd*,int ) ;
 int VAR_7 ;
 int VAR_8 ;

sense_reason_t FUNC_7(struct se_cmd *VAR_9)
{
 struct se_device *VAR_10 = VAR_9->se_dev;
 struct xcopy_op *VAR_11;
 unsigned int VAR_12;

 if (!VAR_10->dev_attrib.emulate_3pc) {
  FUNC_4("EXTENDED_COPY operation explicitly disabled\n");
  return VAR_5;
 }

 VAR_12 = VAR_9->t_task_cdb[1] & 0x1f;
 if (VAR_12 != 0x00) {
  FUNC_4("EXTENDED_COPY(LID4) not supported\n");
  return VAR_5;
 }

 if (VAR_9->data_length == 0) {
  FUNC_6(VAR_9, VAR_1);
  return VAR_2;
 }
 if (VAR_9->data_length < VAR_6) {
  FUNC_4("XCOPY parameter truncation: length %u < hdr_len %u\n",
    VAR_9->data_length, VAR_6);
  return VAR_4;
 }

 VAR_11 = FUNC_3(sizeof(struct xcopy_op), VAR_0);
 if (!VAR_11)
  goto err;
 VAR_11->xop_se_cmd = VAR_9;
 FUNC_0(&VAR_11->xop_work, VAR_7);
 if (FUNC_1(!FUNC_5(VAR_8, &VAR_11->xop_work)))
  goto free;
 return VAR_2;

free:
 FUNC_2(VAR_11);

err:
 return VAR_3;
}
