
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_veu_file {int dummy; } ;
struct sh_veu_dev {struct sh_veu_file* output; struct sh_veu_file* capture; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct sh_veu_dev *VAR_2, struct sh_veu_file *VAR_3,
          enum v4l2_buf_type VAR_4)
{
 return (VAR_4 == VAR_0 &&
  VAR_3 == VAR_2->capture) ||
  (VAR_4 == VAR_1 &&
   VAR_3 == VAR_2->output);
}
