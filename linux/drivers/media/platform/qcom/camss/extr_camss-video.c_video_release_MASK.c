
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int entity; } ;
struct file {int * private_data; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct file*) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0)
{
 struct video_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0);

 FUNC_0(&VAR_1->entity, 0);

 VAR_0->private_data = ((void*)0);

 return 0;
}
