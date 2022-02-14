
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z8530_channel {int sync; int* regs; int lock; scalar_t__ dma_tx; int * irqs; int * skb2; int * skb; scalar_t__ count; scalar_t__ mtu; } ;
struct net_device {scalar_t__ mtu; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct z8530_channel*,size_t,int) ;
 int FUNC_3 (struct z8530_channel*,int) ;
 int FUNC_4 (struct z8530_channel*) ;
 int VAR_4 ;

int FUNC_5(struct net_device *VAR_5, struct z8530_channel *VAR_6)
{
 unsigned long VAR_7;

 FUNC_0(VAR_6->lock, VAR_7);

 VAR_6->sync = 1;
 VAR_6->mtu = VAR_5->mtu+64;
 VAR_6->count = 0;
 VAR_6->skb = ((void*)0);
 VAR_6->skb2 = ((void*)0);
 VAR_6->irqs = &VAR_4;


 FUNC_4(VAR_6);
 FUNC_4(VAR_6);
 FUNC_3(VAR_6,1);
 VAR_6->dma_tx = 0;
 VAR_6->regs[VAR_0]|=VAR_3;
 FUNC_2(VAR_6, VAR_0, VAR_6->regs[VAR_0]);
 FUNC_2(VAR_6, VAR_1, VAR_6->regs[VAR_1]|VAR_2);

 FUNC_1(VAR_6->lock, VAR_7);
 return 0;
}
