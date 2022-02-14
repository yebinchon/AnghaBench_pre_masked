
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; } ;
struct rx_dma {int buff_stat; int status; } ;
struct TYPE_2__ {int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct db_dest {int dma_addr; scalar_t__ vaddr; } ;
struct au1000_private {size_t rx_head; struct rx_dma** rx_dma_ring; struct db_dest** rx_db_inuse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_2 (struct net_device*,int ) ;
 struct au1000_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct au1000_private*,int ,struct net_device*,char*,size_t) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int VAR_15 ;
 int FUNC_8 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_16)
{
 struct au1000_private *VAR_17 = FUNC_3(VAR_16);
 struct sk_buff *VAR_18;
 struct rx_dma *VAR_19;
 u32 VAR_20, VAR_21;
 struct db_dest *VAR_22;
 u32 VAR_23;

 FUNC_4(VAR_17, VAR_15, VAR_16, "au1000_rx head %d\n", VAR_17->rx_head);

 VAR_19 = VAR_17->rx_dma_ring[VAR_17->rx_head];
 VAR_20 = VAR_19->buff_stat;
 while (VAR_20 & VAR_11) {
  VAR_21 = VAR_19->status;
  VAR_22 = VAR_17->rx_db_inuse[VAR_17->rx_head];
  FUNC_0(VAR_16, VAR_21);
  if (!(VAR_21 & VAR_4)) {


   VAR_23 = (VAR_21 & VAR_5);
   VAR_23 -= 4;
   VAR_18 = FUNC_2(VAR_16, VAR_23 + 2);
   if (VAR_18 == ((void*)0)) {
    VAR_16->stats.rx_dropped++;
    continue;
   }
   FUNC_10(VAR_18, 2);
   FUNC_8(VAR_18,
    (unsigned char *)VAR_22->vaddr, VAR_23);
   FUNC_9(VAR_18, VAR_23);
   VAR_18->protocol = FUNC_1(VAR_18, VAR_16);
   FUNC_5(VAR_18);
  } else {
   if (VAR_14 > 4) {
    FUNC_7("rx_error(s):");
    if (VAR_21 & VAR_8)
     FUNC_6(" miss");
    if (VAR_21 & VAR_13)
     FUNC_6(" wdog");
    if (VAR_21 & VAR_10)
     FUNC_6(" runt");
    if (VAR_21 & VAR_9)
     FUNC_6(" overlen");
    if (VAR_21 & VAR_1)
     FUNC_6(" coll");
    if (VAR_21 & VAR_7)
     FUNC_6(" mii error");
    if (VAR_21 & VAR_2)
     FUNC_6(" crc error");
    if (VAR_21 & VAR_6)
     FUNC_6(" len error");
    if (VAR_21 & VAR_12)
     FUNC_6(" u control frame");
    FUNC_6("\n");
   }
  }
  VAR_19->buff_stat = (u32)(VAR_22->dma_addr | VAR_3);
  VAR_17->rx_head = (VAR_17->rx_head + 1) & (VAR_0 - 1);
  FUNC_11();


  VAR_19 = VAR_17->rx_dma_ring[VAR_17->rx_head];
  VAR_20 = VAR_19->buff_stat;
 }
 return 0;
}
