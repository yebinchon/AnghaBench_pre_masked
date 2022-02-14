
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {unsigned int block_size; } ;
struct se_device {unsigned int prot_length; TYPE_2__ dev_attrib; } ;
struct se_cmd {unsigned int data_length; int se_cmd_flags; unsigned int residual_count; unsigned int prot_length; TYPE_1__* se_tfo; } ;
typedef int sense_reason_t ;
struct TYPE_3__ {unsigned int max_data_sg_nents; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static sense_reason_t
FUNC_0(struct se_cmd *VAR_4, struct se_device *VAR_5,
          unsigned int VAR_6)
{
 u32 VAR_7;

 if (!VAR_4->se_tfo->max_data_sg_nents)
  return VAR_3;






 VAR_7 = (VAR_4->se_tfo->max_data_sg_nents * VAR_0);
 if (VAR_4->data_length > VAR_7) {
  if (VAR_4->se_cmd_flags & VAR_1) {
   VAR_4->residual_count = (VAR_6 - VAR_7);
  } else if (VAR_4->se_cmd_flags & VAR_2) {
   u32 VAR_8 = VAR_6 + VAR_4->residual_count;
   VAR_4->residual_count = (VAR_8 - VAR_7);
  } else {
   VAR_4->se_cmd_flags |= VAR_2;
   VAR_4->residual_count = (VAR_4->data_length - VAR_7);
  }
  VAR_4->data_length = VAR_7;




  if (VAR_4->prot_length) {
   u32 VAR_9 = (VAR_7 / VAR_5->dev_attrib.block_size);
   VAR_4->prot_length = VAR_5->prot_length * VAR_9;
  }
 }
 return VAR_3;
}
