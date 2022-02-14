
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_size; } ;
struct se_device {int caw_sem; TYPE_1__ dev_attrib; } ;
struct se_cmd {int data_length; int t_task_nolb; int * transport_complete_callback; int t_bidi_data_nents; int t_bidi_data_sg; struct se_device* se_dev; struct sbc_ops* protocol_data; } ;
struct sbc_ops {scalar_t__ (* execute_rw ) (struct se_cmd*,int ,int ,int ) ;} ;
typedef scalar_t__ sense_reason_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct se_cmd*,int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static sense_reason_t
FUNC_3(struct se_cmd *VAR_3)
{
 struct sbc_ops *VAR_4 = VAR_3->protocol_data;
 struct se_device *VAR_5 = VAR_3->se_dev;
 sense_reason_t VAR_6;
 int VAR_7;




 VAR_7 = FUNC_0(&VAR_5->caw_sem);
 if (VAR_7 != 0) {
  VAR_3->transport_complete_callback = ((void*)0);
  return VAR_1;
 }





 VAR_3->data_length = VAR_3->t_task_nolb * VAR_5->dev_attrib.block_size;

 VAR_6 = VAR_4->execute_rw(VAR_3, VAR_3->t_bidi_data_sg, VAR_3->t_bidi_data_nents,
         VAR_0);
 if (VAR_6) {
  VAR_3->transport_complete_callback = ((void*)0);
  FUNC_2(&VAR_5->caw_sem);
  return VAR_6;
 }





 return VAR_2;
}
