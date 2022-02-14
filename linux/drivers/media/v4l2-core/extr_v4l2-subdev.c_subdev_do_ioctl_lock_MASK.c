
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {struct mutex* lock; } ;
struct mutex {int dummy; } ;
struct file {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 long FUNC_2 (struct file*,unsigned int,void*) ;
 struct video_device* FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (struct video_device*) ;

__attribute__((used)) static long FUNC_5(struct file *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 struct video_device *VAR_5 = FUNC_3(VAR_2);
 struct mutex *VAR_6 = VAR_5->lock;
 long VAR_7 = -VAR_0;

 if (VAR_6 && FUNC_0(VAR_6))
  return -VAR_1;
 if (FUNC_4(VAR_5))
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  FUNC_1(VAR_6);
 return VAR_7;
}
