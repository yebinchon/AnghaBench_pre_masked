
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tlan_priv {int tlan_rev; int rx_head; int rx_eoc_count; scalar_t__ rx_list_dma; int rx_tail; } ;
struct tlan_list {int dummy; } ;
struct net_device {scalar_t__ base_addr; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tlan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_4, u16 VAR_5)
{
 struct tlan_priv *VAR_6 = FUNC_1(VAR_4);
 dma_addr_t VAR_7;
 u32 VAR_8 = 1;

 if (VAR_6->tlan_rev < 0x30) {
  FUNC_0(VAR_1,
    "RECEIVE:  Handling RX EOC (head=%d tail=%d) -- IRQ\n",
    VAR_6->rx_head, VAR_6->rx_tail);
  VAR_7 = VAR_6->rx_list_dma
   + sizeof(struct tlan_list)*VAR_6->rx_head;
  FUNC_2(VAR_7, VAR_4->base_addr + VAR_0);
  VAR_8 |= VAR_2 | VAR_3;
  VAR_6->rx_eoc_count++;
 }

 return VAR_8;

}
