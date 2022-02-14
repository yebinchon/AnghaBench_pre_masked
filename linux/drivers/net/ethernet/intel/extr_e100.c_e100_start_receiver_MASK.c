
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx {int dma_addr; scalar_t__ skb; } ;
struct nic {scalar_t__ ru_running; struct rx* rxs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nic*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_1(struct nic *VAR_3, struct rx *VAR_4)
{
 if (!VAR_3->rxs) return;
 if (VAR_1 != VAR_3->ru_running) return;


 if (!VAR_4) VAR_4 = VAR_3->rxs;


 if (VAR_4->skb) {
  FUNC_0(VAR_3, VAR_2, VAR_4->dma_addr);
  VAR_3->ru_running = VAR_0;
 }
}
