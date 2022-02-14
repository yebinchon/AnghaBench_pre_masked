
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hnae_ring {TYPE_2__* desc; struct hnae_desc_cb* desc_cb; TYPE_4__* q; } ;
struct hnae_desc_cb {int dma; } ;
struct hnae_buf_ops {int (* unmap_buffer ) (struct hnae_ring*,struct hnae_desc_cb*) ;} ;
struct TYPE_8__ {TYPE_3__* handle; } ;
struct TYPE_7__ {struct hnae_buf_ops* bops; } ;
struct TYPE_5__ {scalar_t__ ipoff_bnum_pid_flag; } ;
struct TYPE_6__ {TYPE_1__ rx; int addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hnae_ring*,struct hnae_desc_cb*) ;

__attribute__((used)) static inline void FUNC_2(struct hnae_ring *VAR_0, int VAR_1,
           struct hnae_desc_cb *VAR_2)
{
 struct hnae_buf_ops *VAR_3 = VAR_0->q->handle->bops;

 VAR_3->unmap_buffer(VAR_0, &VAR_0->desc_cb[VAR_1]);
 VAR_0->desc_cb[VAR_1] = *VAR_2;
 VAR_0->desc[VAR_1].addr = FUNC_0(VAR_0->desc_cb[VAR_1].dma);
 VAR_0->desc[VAR_1].rx.ipoff_bnum_pid_flag = 0;
}
