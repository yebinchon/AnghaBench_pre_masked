
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int lock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct video_device* FUNC_3 (struct file*) ;

int FUNC_4(struct file *VAR_1)
{
 struct video_device *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 if (FUNC_1(VAR_2->lock))
  return -VAR_0;
 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(VAR_2->lock);
 return VAR_3;
}
