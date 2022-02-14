
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d0; } ;
struct vring_tx_desc {TYPE_1__ dma; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_1(struct vring_tx_desc *VAR_3)
{
 VAR_3->dma.d0 |= FUNC_0(VAR_1) |
       FUNC_0(VAR_2) |
       FUNC_0(VAR_0);
}
