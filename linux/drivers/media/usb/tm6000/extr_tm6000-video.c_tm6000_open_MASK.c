
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int lock; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct video_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0)
{
 struct video_device *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_1(VAR_1->lock);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(VAR_1->lock);
 return VAR_2;
}
