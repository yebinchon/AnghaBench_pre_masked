
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct z8530_channel {int* regs; int mtu; int sync; int lock; int status; scalar_t__ count; scalar_t__ max; int * tx_next_skb; int * tx_skb; int * skb; int rx_function; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct z8530_channel*,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct z8530_channel*,size_t,int) ;
 int VAR_4 ;

int FUNC_4(struct z8530_channel *VAR_5, u8 *VAR_6)
{
 unsigned long VAR_7;

 FUNC_1(VAR_5->lock, VAR_7);

 while(*VAR_6!=255)
 {
  int VAR_8=*VAR_6++;
  if(VAR_8>0x0F)
   FUNC_3(VAR_5, VAR_1, VAR_5->regs[15]|1);
  FUNC_3(VAR_5, VAR_8&0x0F, *VAR_6);
  if(VAR_8>0x0F)
   FUNC_3(VAR_5, VAR_1, VAR_5->regs[15]&~1);
  VAR_5->regs[VAR_8]=*VAR_6++;
 }
 VAR_5->rx_function=VAR_4;
 VAR_5->skb=((void*)0);
 VAR_5->tx_skb=((void*)0);
 VAR_5->tx_next_skb=((void*)0);
 VAR_5->mtu=1500;
 VAR_5->max=0;
 VAR_5->count=0;
 VAR_5->status=FUNC_0(VAR_5, VAR_0);
 VAR_5->sync=1;
 FUNC_3(VAR_5, VAR_2, VAR_5->regs[VAR_2]|VAR_3);

 FUNC_2(VAR_5->lock, VAR_7);
 return 0;
}
