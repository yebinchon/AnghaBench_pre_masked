
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* mdev; } ;
struct media_link {TYPE_2__ graph_obj; } ;
struct TYPE_3__ {int graph_mutex; } ;


 int FUNC_0 (struct media_link*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct media_link *VAR_0, u32 VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->graph_obj.mdev->graph_mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->graph_obj.mdev->graph_mutex);

 return VAR_2;
}
