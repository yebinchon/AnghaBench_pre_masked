
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {int dummy; } ;
struct venus_format {int dummy; } ;
struct TYPE_2__ {int step_height; int max_height; int min_height; int step_width; int max_width; int min_width; } ;
struct v4l2_frmsizeenum {TYPE_1__ stepwise; int type; scalar_t__ index; int pixel_format; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct venus_format* FUNC_0 (struct venus_inst*,int ,int ) ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (struct venus_inst*) ;
 int FUNC_3 (struct venus_inst*) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (struct venus_inst*) ;
 int FUNC_6 (struct venus_inst*) ;
 struct venus_inst* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_4, void *VAR_5,
    struct v4l2_frmsizeenum *VAR_6)
{
 struct venus_inst *VAR_7 = FUNC_7(VAR_4);
 const struct venus_format *VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_6->pixel_format,
     VAR_1);
 if (!VAR_8) {
  VAR_8 = FUNC_0(VAR_7, VAR_6->pixel_format,
      VAR_2);
  if (!VAR_8)
   return -VAR_0;
 }

 if (VAR_6->index)
  return -VAR_0;

 VAR_6->type = VAR_3;

 VAR_6->stepwise.min_width = FUNC_5(VAR_7);
 VAR_6->stepwise.max_width = FUNC_4(VAR_7);
 VAR_6->stepwise.step_width = FUNC_6(VAR_7);
 VAR_6->stepwise.min_height = FUNC_2(VAR_7);
 VAR_6->stepwise.max_height = FUNC_1(VAR_7);
 VAR_6->stepwise.step_height = FUNC_3(VAR_7);

 return 0;
}
