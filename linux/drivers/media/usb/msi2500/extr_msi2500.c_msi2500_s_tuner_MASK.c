
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int index; } ;
struct msi2500_dev {int v4l2_subdev; int dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,struct v4l2_tuner const*) ;
 struct msi2500_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
      const struct v4l2_tuner *VAR_5)
{
 struct msi2500_dev *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 FUNC_0(VAR_6->dev, "index=%d\n", VAR_5->index);

 if (VAR_5->index == 0)
  VAR_7 = 0;
 else if (VAR_5->index == 1)
  VAR_7 = FUNC_1(VAR_6->v4l2_subdev, VAR_2, VAR_1, VAR_5);
 else
  VAR_7 = -VAR_0;

 return VAR_7;
}
