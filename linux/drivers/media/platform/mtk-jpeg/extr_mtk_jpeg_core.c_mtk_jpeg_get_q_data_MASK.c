
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_jpeg_q_data {int dummy; } ;
struct mtk_jpeg_ctx {struct mtk_jpeg_q_data cap_q; struct mtk_jpeg_q_data out_q; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct mtk_jpeg_q_data *FUNC_1(struct mtk_jpeg_ctx *VAR_0,
         enum v4l2_buf_type VAR_1)
{
 if (FUNC_0(VAR_1))
  return &VAR_0->out_q;
 return &VAR_0->cap_q;
}
