
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vcodec_ctx {struct mtk_q_data* q_data; } ;
struct mtk_q_data {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct mtk_q_data *FUNC_1(struct mtk_vcodec_ctx *VAR_2,
           enum v4l2_buf_type VAR_3)
{
 if (FUNC_0(VAR_3))
  return &VAR_2->q_data[VAR_1];

 return &VAR_2->q_data[VAR_0];
}
