
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 struct v4l2_audio VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_audio *VAR_4)
{
 FUNC_0(2, "VIDIOC_G_AUDIO: %d\n", VAR_4->index);
 if (VAR_4->index != 0)
  return -VAR_0;
 *VAR_4 = VAR_1;
 return 0;
}
