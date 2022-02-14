
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_veu_vfmt {int dummy; } ;
struct sh_veu_dev {struct sh_veu_vfmt vfmt_in; struct sh_veu_vfmt vfmt_out; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;





__attribute__((used)) static struct sh_veu_vfmt *FUNC_0(struct sh_veu_dev *VAR_0,
        enum v4l2_buf_type VAR_1)
{
 switch (VAR_1) {
 case 129:
  return &VAR_0->vfmt_out;
 case 128:
  return &VAR_0->vfmt_in;
 default:
  return ((void*)0);
 }
}
