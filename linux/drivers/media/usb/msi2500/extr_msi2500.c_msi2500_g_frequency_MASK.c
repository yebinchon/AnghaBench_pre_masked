
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int tuner; int type; int frequency; } ;
struct msi2500_dev {int v4l2_subdev; int f_adc; int dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,struct v4l2_frequency*) ;
 struct msi2500_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
          struct v4l2_frequency *VAR_6)
{
 struct msi2500_dev *VAR_7 = FUNC_2(VAR_4);
 int VAR_8 = 0;

 FUNC_0(VAR_7->dev, "tuner=%d type=%d\n", VAR_6->tuner, VAR_6->type);

 if (VAR_6->tuner == 0) {
  VAR_6->frequency = VAR_7->f_adc;
  VAR_8 = 0;
 } else if (VAR_6->tuner == 1) {
  VAR_6->type = VAR_1;
  VAR_8 = FUNC_1(VAR_7->v4l2_subdev, VAR_3, VAR_2, VAR_6);
 } else {
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
