
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_jpeg_q_data {int dummy; } ;
struct s5p_jpeg_ctx {struct s5p_jpeg_q_data cap_q; struct s5p_jpeg_q_data out_q; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct s5p_jpeg_q_data *FUNC_0(struct s5p_jpeg_ctx *VAR_2,
       enum v4l2_buf_type VAR_3)
{
 if (VAR_3 == VAR_1)
  return &VAR_2->out_q;
 if (VAR_3 == VAR_0)
  return &VAR_2->cap_q;

 return ((void*)0);
}
