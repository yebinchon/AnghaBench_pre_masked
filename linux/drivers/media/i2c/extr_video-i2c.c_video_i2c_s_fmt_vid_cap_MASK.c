
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_i2c_data {int vb_vidq; } ;
struct v4l2_format {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct video_i2c_data* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
         struct v4l2_format *VAR_3)
{
 struct video_i2c_data *VAR_4 = FUNC_1(VAR_1);

 if (FUNC_0(&VAR_4->vb_vidq))
  return -VAR_0;

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
