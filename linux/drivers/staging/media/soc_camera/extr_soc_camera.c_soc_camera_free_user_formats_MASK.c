
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_host {TYPE_1__* ops; } ;
struct soc_camera_device {int * user_formats; scalar_t__ num_user_formats; int * current_fmt; int parent; } ;
struct TYPE_2__ {int (* put_formats ) (struct soc_camera_device*) ;} ;


 int FUNC_0 (struct soc_camera_device*) ;
 struct soc_camera_host* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct soc_camera_device *VAR_0)
{
 struct soc_camera_host *VAR_1 = FUNC_1(VAR_0->parent);

 if (VAR_1->ops->put_formats)
  VAR_1->ops->put_formats(VAR_0);
 VAR_0->current_fmt = ((void*)0);
 VAR_0->num_user_formats = 0;
 FUNC_2(VAR_0->user_formats);
 VAR_0->user_formats = ((void*)0);
}
