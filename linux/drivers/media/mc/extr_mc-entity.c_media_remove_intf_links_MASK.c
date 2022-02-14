
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct media_device* mdev; } ;
struct media_interface {TYPE_1__ graph_obj; } ;
struct media_device {int graph_mutex; } ;


 int FUNC_0 (struct media_interface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct media_interface *VAR_0)
{
 struct media_device *VAR_1 = VAR_0->graph_obj.mdev;


 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(&VAR_1->graph_mutex);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->graph_mutex);
}
