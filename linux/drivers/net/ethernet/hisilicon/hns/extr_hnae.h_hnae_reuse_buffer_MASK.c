
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hnae_ring {TYPE_2__* desc; TYPE_3__* desc_cb; } ;
struct TYPE_6__ {scalar_t__ page_offset; scalar_t__ dma; scalar_t__ reuse_flag; } ;
struct TYPE_4__ {scalar_t__ ipoff_bnum_pid_flag; } ;
struct TYPE_5__ {TYPE_1__ rx; int addr; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct hnae_ring *VAR_0, int VAR_1)
{
 VAR_0->desc_cb[VAR_1].reuse_flag = 0;
 VAR_0->desc[VAR_1].addr = FUNC_0(VAR_0->desc_cb[VAR_1].dma
  + VAR_0->desc_cb[VAR_1].page_offset);
 VAR_0->desc[VAR_1].rx.ipoff_bnum_pid_flag = 0;
}
