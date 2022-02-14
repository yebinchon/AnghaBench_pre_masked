
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d0; } ;
struct vring_tx_desc {TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(volatile struct vring_tx_desc *VAR_2)
{
 VAR_2->dma.d0 |= VAR_1 <<
    VAR_0;
}
