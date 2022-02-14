
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vim2m_q_data {int dummy; } ;
struct vim2m_ctx {struct vim2m_q_data* q_data; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;




 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static struct vim2m_q_data *FUNC_0(struct vim2m_ctx *VAR_2,
           enum v4l2_buf_type VAR_3)
{
 switch (VAR_3) {
 case 128:
  return &VAR_2->q_data[VAR_1];
 case 129:
  return &VAR_2->q_data[VAR_0];
 default:
  return ((void*)0);
 }
}
