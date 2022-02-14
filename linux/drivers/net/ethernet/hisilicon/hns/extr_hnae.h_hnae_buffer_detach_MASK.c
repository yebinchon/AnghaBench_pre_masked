
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hnae_ring {TYPE_4__* desc; int * desc_cb; TYPE_3__* q; } ;
struct TYPE_8__ {scalar_t__ addr; } ;
struct TYPE_7__ {TYPE_2__* handle; } ;
struct TYPE_6__ {TYPE_1__* bops; } ;
struct TYPE_5__ {int (* unmap_buffer ) (struct hnae_ring*,int *) ;} ;


 int FUNC_0 (struct hnae_ring*,int *) ;

__attribute__((used)) static inline void FUNC_1(struct hnae_ring *VAR_0, int VAR_1)
{
 VAR_0->q->handle->bops->unmap_buffer(VAR_0, &VAR_0->desc_cb[VAR_1]);
 VAR_0->desc[VAR_1].addr = 0;
}
