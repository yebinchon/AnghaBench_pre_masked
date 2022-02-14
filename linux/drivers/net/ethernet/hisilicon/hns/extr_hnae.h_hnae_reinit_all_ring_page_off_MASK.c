
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hnae_ring {int desc_num; TYPE_3__* desc_cb; TYPE_2__* desc; } ;
struct hnae_handle {int q_num; TYPE_1__** qs; } ;
struct TYPE_6__ {int dma; scalar_t__ page_offset; } ;
struct TYPE_5__ {scalar_t__ addr; } ;
struct TYPE_4__ {struct hnae_ring rx_ring; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct hnae_handle *VAR_0)
{
 int VAR_1, VAR_2;
 struct hnae_ring *VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_0->q_num; VAR_1++) {
  VAR_3 = &VAR_0->qs[VAR_1]->rx_ring;
  for (VAR_2 = 0; VAR_2 < VAR_3->desc_num; VAR_2++) {
   VAR_3->desc_cb[VAR_2].page_offset = 0;
   if (VAR_3->desc[VAR_2].addr !=
       FUNC_0(VAR_3->desc_cb[VAR_2].dma))
    VAR_3->desc[VAR_2].addr =
     FUNC_0(VAR_3->desc_cb[VAR_2].dma);
  }
 }

 FUNC_1();
}
