
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_frame {int dummy; } ;
struct g2d_ctx {struct g2d_frame out; struct g2d_frame in; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 struct g2d_frame* FUNC_0 (int ) ;



__attribute__((used)) static struct g2d_frame *FUNC_1(struct g2d_ctx *VAR_1,
       enum v4l2_buf_type VAR_2)
{
 switch (VAR_2) {
 case 128:
  return &VAR_1->in;
 case 129:
  return &VAR_1->out;
 default:
  return FUNC_0(-VAR_0);
 }
}
