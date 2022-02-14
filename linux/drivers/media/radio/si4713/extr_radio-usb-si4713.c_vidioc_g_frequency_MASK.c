
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int dummy; } ;
struct si4713_usb_device {int v4l2_subdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct v4l2_frequency*) ;
 struct si4713_usb_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_frequency *VAR_4)
{
 struct si4713_usb_device *VAR_5 = FUNC_1(VAR_2);

 return FUNC_0(VAR_5->v4l2_subdev, VAR_1, VAR_0, VAR_4);
}
