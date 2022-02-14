
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int index; } ;
struct hackrf_dev {int dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct hackrf_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
  const struct v4l2_tuner *VAR_3)
{
 struct hackrf_dev *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 FUNC_0(VAR_4->dev, "index=%d\n", VAR_3->index);

 if (VAR_3->index == 0)
  VAR_5 = 0;
 else if (VAR_3->index == 1)
  VAR_5 = 0;
 else
  VAR_5 = -VAR_0;

 return VAR_5;
}
