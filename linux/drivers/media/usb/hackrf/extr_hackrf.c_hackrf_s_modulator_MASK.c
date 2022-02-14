
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_modulator {int index; } ;
struct hackrf_dev {int dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct hackrf_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
         const struct v4l2_modulator *VAR_3)
{
 struct hackrf_dev *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4->dev, "index=%d\n", VAR_3->index);

 return VAR_3->index > 1 ? -VAR_0 : 0;
}
