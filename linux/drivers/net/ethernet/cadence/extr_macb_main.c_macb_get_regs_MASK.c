
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct macb {int caps; TYPE_1__* queues; } ;
struct ethtool_regs {int version; } ;
struct TYPE_2__ {int tx_head; int tx_tail; } ;


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
 int FUNC_0 (struct macb*,int ) ;
 scalar_t__ FUNC_1 (struct macb*) ;
 int FUNC_2 (struct macb*,int ) ;
 int FUNC_3 (struct macb*,int ) ;
 int FUNC_4 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_5 (struct macb*,int ) ;
 struct macb* FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_14, struct ethtool_regs *VAR_15,
     void *VAR_16)
{
 struct macb *VAR_17 = FUNC_6(VAR_14);
 unsigned int VAR_18, VAR_19;
 u32 *VAR_20 = VAR_16;

 VAR_15->version = (FUNC_3(VAR_17, VAR_5) & ((1 << VAR_4) - 1))
   | VAR_3;

 VAR_18 = FUNC_5(VAR_17, VAR_17->queues[0].tx_tail);
 VAR_19 = FUNC_5(VAR_17, VAR_17->queues[0].tx_head);

 VAR_20[0] = FUNC_3(VAR_17, VAR_7);
 VAR_20[1] = FUNC_2(VAR_17, VAR_6);
 VAR_20[2] = FUNC_3(VAR_17, VAR_8);
 VAR_20[3] = FUNC_3(VAR_17, VAR_12);
 VAR_20[4] = FUNC_3(VAR_17, VAR_9);
 VAR_20[5] = FUNC_3(VAR_17, VAR_11);
 VAR_20[6] = FUNC_3(VAR_17, VAR_10);
 VAR_20[7] = FUNC_3(VAR_17, VAR_1);

 VAR_20[8] = VAR_18;
 VAR_20[9] = VAR_19;
 VAR_20[10] = FUNC_4(&VAR_17->queues[0], VAR_18);
 VAR_20[11] = FUNC_4(&VAR_17->queues[0], VAR_19);

 if (!(VAR_17->caps & VAR_2))
  VAR_20[12] = FUNC_2(VAR_17, VAR_13);
 if (FUNC_1(VAR_17))
  VAR_20[13] = FUNC_0(VAR_17, VAR_0);
}
