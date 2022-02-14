
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {scalar_t__ session_type; unsigned int output_buf_size; scalar_t__ opb_buftype; unsigned int output2_buf_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

unsigned int FUNC_0(struct venus_inst *VAR_3)
{

 if (VAR_3->session_type == VAR_2)
  return VAR_3->output_buf_size;

 if (VAR_3->opb_buftype == VAR_0)
  return VAR_3->output_buf_size;
 else if (VAR_3->opb_buftype == VAR_1)
  return VAR_3->output2_buf_size;

 return 0;
}
