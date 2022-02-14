
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_m2m_queue_ctx {int dummy; } ;
struct v4l2_m2m_ctx {struct v4l2_m2m_queue_ctx cap_q_ctx; struct v4l2_m2m_queue_ctx out_q_ctx; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct v4l2_m2m_queue_ctx *FUNC_1(struct v4l2_m2m_ctx *VAR_0,
      enum v4l2_buf_type VAR_1)
{
 if (FUNC_0(VAR_1))
  return &VAR_0->out_q_ctx;
 else
  return &VAR_0->cap_q_ctx;
}
