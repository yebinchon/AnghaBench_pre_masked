
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* mdev; } ;
struct TYPE_7__ {TYPE_2__ graph_obj; } ;
struct TYPE_8__ {TYPE_3__ entity; } ;
struct exynos_video_entity {TYPE_4__ vdev; } ;
struct TYPE_5__ {int graph_mutex; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct exynos_video_entity *VAR_0)
{
 FUNC_0(&VAR_0->vdev.entity.graph_obj.mdev->graph_mutex);
}
