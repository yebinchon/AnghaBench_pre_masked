
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxp_q_data {int dummy; } ;
struct pxp_ctx {struct pxp_q_data* q_data; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static struct pxp_q_data *FUNC_0(struct pxp_ctx *VAR_3,
      enum v4l2_buf_type VAR_4)
{
 if (VAR_4 == VAR_0)
  return &VAR_3->q_data[VAR_2];
 else
  return &VAR_3->q_data[VAR_1];
}
