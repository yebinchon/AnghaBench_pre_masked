
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int index; int capability; int rangelow; int rangehigh; int type; int name; } ;
struct msi2500_dev {int v4l2_subdev; int dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,struct v4l2_tuner*) ;
 struct msi2500_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7, struct v4l2_tuner *VAR_8)
{
 struct msi2500_dev *VAR_9 = FUNC_3(VAR_6);
 int VAR_10;

 FUNC_0(VAR_9->dev, "index=%d\n", VAR_8->index);

 if (VAR_8->index == 0) {
  FUNC_1(VAR_8->name, "Mirics MSi2500", sizeof(VAR_8->name));
  VAR_8->type = VAR_1;
  VAR_8->capability = VAR_2 | VAR_3;
  VAR_8->rangelow = 1200000;
  VAR_8->rangehigh = 15000000;
  VAR_10 = 0;
 } else if (VAR_8->index == 1) {
  VAR_10 = FUNC_2(VAR_9->v4l2_subdev, VAR_5, VAR_4, VAR_8);
 } else {
  VAR_10 = -VAR_0;
 }

 return VAR_10;
}
