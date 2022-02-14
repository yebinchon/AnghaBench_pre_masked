
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_veu_file {int dummy; } ;
struct sh_veu_dev {struct sh_veu_file* output; struct sh_veu_file* capture; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static int FUNC_0(struct sh_veu_dev *VAR_2, struct sh_veu_file *VAR_3,
         enum v4l2_buf_type VAR_4)
{
 struct sh_veu_file **VAR_5;

 switch (VAR_4) {
 case 129:
  VAR_5 = &VAR_2->capture;
  break;
 case 128:
  VAR_5 = &VAR_2->output;
  break;
 default:
  return -VAR_1;
 }

 if (*VAR_5 == VAR_3)
  return 0;

 if (*VAR_5)
  return -VAR_0;

 *VAR_5 = VAR_3;

 return 0;
}
