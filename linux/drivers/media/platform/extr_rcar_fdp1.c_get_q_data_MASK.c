
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdp1_q_data {int dummy; } ;
struct fdp1_ctx {struct fdp1_q_data cap_q; struct fdp1_q_data out_q; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct fdp1_q_data *FUNC_1(struct fdp1_ctx *VAR_0,
      enum v4l2_buf_type VAR_1)
{
 if (FUNC_0(VAR_1))
  return &VAR_0->out_q;
 else
  return &VAR_0->cap_q;
}
