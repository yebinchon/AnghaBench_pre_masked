
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imgu_media_pipe {TYPE_1__* nodes; } ;
struct imgu_device {struct imgu_media_pipe* imgu_pipe; } ;
struct TYPE_4__ {int entity; } ;
struct TYPE_3__ {int lock; TYPE_2__ vdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct imgu_device *VAR_0,
      unsigned int VAR_1, int VAR_2)
{
 int VAR_3;
 struct imgu_media_pipe *VAR_4 = &VAR_0->imgu_pipe[VAR_1];

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_2(&VAR_4->nodes[VAR_3].vdev);
  FUNC_0(&VAR_4->nodes[VAR_3].vdev.entity);
  FUNC_1(&VAR_4->nodes[VAR_3].lock);
 }
}
