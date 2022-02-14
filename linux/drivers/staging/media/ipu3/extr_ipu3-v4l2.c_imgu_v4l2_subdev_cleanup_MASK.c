
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int entity; int ctrl_handler; } ;
struct TYPE_3__ {TYPE_2__ subdev; } ;
struct imgu_media_pipe {TYPE_1__ imgu_sd; } ;
struct imgu_device {struct imgu_media_pipe* imgu_pipe; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct imgu_device *VAR_0, unsigned int VAR_1)
{
 struct imgu_media_pipe *VAR_2 = &VAR_0->imgu_pipe[VAR_1];

 FUNC_2(&VAR_2->imgu_sd.subdev);
 FUNC_1(VAR_2->imgu_sd.subdev.ctrl_handler);
 FUNC_0(&VAR_2->imgu_sd.subdev.entity);
}
