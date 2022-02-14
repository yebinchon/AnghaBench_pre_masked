
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_subdev_info {struct v4l2_input* inputs; } ;
struct vpfe_device {TYPE_1__* cfg; } ;
struct v4l2_input {int index; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct vpfe_subdev_info* sub_devs; } ;


 int VAR_0 ;
 struct vpfe_device* FUNC_0 (struct file*) ;
 int FUNC_1 (int,struct vpfe_device*,char*) ;
 scalar_t__ FUNC_2 (struct vpfe_device*,int*,int*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
      struct v4l2_input *VAR_3)
{
 struct vpfe_device *VAR_4 = FUNC_0(VAR_1);
 struct vpfe_subdev_info *VAR_5;
 int VAR_6, VAR_7;

 FUNC_1(2, VAR_4, "vpfe_enum_input\n");

 if (FUNC_2(VAR_4, &VAR_6, &VAR_7,
     VAR_3->index) < 0) {
  FUNC_1(1, VAR_4,
   "input information not found for the subdev\n");
  return -VAR_0;
 }
 VAR_5 = &VAR_4->cfg->sub_devs[VAR_6];
 *VAR_3 = VAR_5->inputs[VAR_7];

 return 0;
}
