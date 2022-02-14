
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_5__ {int entity; } ;
struct xvip_dma {TYPE_1__ pipe; int lock; TYPE_2__ video; scalar_t__ dma; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(struct xvip_dma *VAR_0)
{
 if (FUNC_3(&VAR_0->video))
  FUNC_4(&VAR_0->video);

 if (VAR_0->dma)
  FUNC_0(VAR_0->dma);

 FUNC_1(&VAR_0->video.entity);

 FUNC_2(&VAR_0->lock);
 FUNC_2(&VAR_0->pipe.lock);
}
