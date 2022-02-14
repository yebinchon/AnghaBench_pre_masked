
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {scalar_t__ type; } ;
typedef void soc_camera_device ;
struct file {void* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
          struct v4l2_format *VAR_4)
{
 struct soc_camera_device *VAR_5 = VAR_2->private_data;

 FUNC_0(VAR_3 != VAR_2->private_data);


 if (VAR_4->type != VAR_1)
  return -VAR_0;


 return FUNC_1(VAR_5, VAR_4);
}
