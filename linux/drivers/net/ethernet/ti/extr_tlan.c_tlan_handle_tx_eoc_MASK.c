
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tlan_priv {int tlan_rev; int tx_head; scalar_t__ tx_in_progress; scalar_t__ tx_list_dma; struct tlan_list* tx_list; int tx_tail; } ;
struct tlan_list {int c_stat; } ;
struct net_device {scalar_t__ base_addr; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct tlan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_4(struct net_device *VAR_4, u16 VAR_5)
{
 struct tlan_priv *VAR_6 = FUNC_1(VAR_4);
 struct tlan_list *VAR_7;
 dma_addr_t VAR_8;
 u32 VAR_9 = 1;

 if (VAR_6->tlan_rev < 0x30) {
  FUNC_0(VAR_2,
    "TRANSMIT:  handling TX EOC (Head=%d Tail=%d) -- IRQ\n",
    VAR_6->tx_head, VAR_6->tx_tail);
  VAR_7 = VAR_6->tx_list + VAR_6->tx_head;
  VAR_8 = VAR_6->tx_list_dma
   + sizeof(struct tlan_list)*VAR_6->tx_head;
  if ((VAR_7->c_stat & VAR_1)
      == VAR_1) {
   FUNC_2(VAR_4);
   FUNC_3(VAR_8, VAR_4->base_addr + VAR_0);
   VAR_9 |= VAR_3;
  } else {
   VAR_6->tx_in_progress = 0;
  }
 }

 return VAR_9;

}
