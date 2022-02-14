
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jme_adapter {int tx_ring_size; int reg_txcs; TYPE_1__* txring; } ;
typedef int __u64 ;
struct TYPE_2__ {scalar_t__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (struct jme_adapter*,int ,int) ;
 int FUNC_2 (struct jme_adapter*,int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static inline void
FUNC_4(struct jme_adapter *VAR_8)
{



 FUNC_1(VAR_8, VAR_0, VAR_5 | VAR_7);
 FUNC_3();




 FUNC_1(VAR_8, VAR_2, (__u64)VAR_8->txring[0].dma & 0xFFFFFFFFUL);
 FUNC_1(VAR_8, VAR_1, (__u64)(VAR_8->txring[0].dma) >> 32);
 FUNC_1(VAR_8, VAR_3, (__u64)VAR_8->txring[0].dma & 0xFFFFFFFFUL);




 FUNC_1(VAR_8, VAR_4, VAR_8->tx_ring_size);




 FUNC_3();
 FUNC_2(VAR_8, VAR_0, VAR_8->reg_txcs |
    VAR_7 |
    VAR_6);




 FUNC_0(VAR_8);
}
