
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_selection {scalar_t__ type; int target; int r; } ;
struct saa7134_dev {int crop_bounds; int crop_defrect; int crop_current; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 struct saa7134_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4, struct v4l2_selection *VAR_5)
{
 struct saa7134_dev *VAR_6 = FUNC_0(VAR_3);

 if (VAR_5->type != VAR_1 &&
     VAR_5->type != VAR_2)
  return -VAR_0;

 switch (VAR_5->target) {
 case 130:
  VAR_5->r = VAR_6->crop_current;
  break;
 case 128:
  VAR_5->r = VAR_6->crop_defrect;
  break;
 case 129:
  VAR_5->r = VAR_6->crop_bounds;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
