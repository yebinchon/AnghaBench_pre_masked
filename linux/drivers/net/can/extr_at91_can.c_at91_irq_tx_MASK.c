
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct at91_priv {scalar_t__ tx_next; scalar_t__ tx_echo; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct at91_priv*,int ) ;
 int FUNC_2 (struct at91_priv*,int ,int) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;
 int FUNC_4 (struct net_device*,int ) ;
 scalar_t__ FUNC_5 (struct at91_priv*) ;
 int FUNC_6 (struct at91_priv*) ;
 unsigned int FUNC_7 (struct at91_priv*) ;
 scalar_t__ FUNC_8 (int) ;
 struct at91_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_4, u32 VAR_5)
{
 struct at91_priv *VAR_6 = FUNC_9(VAR_4);
 u32 VAR_7;
 unsigned int VAR_8;



 for ( ; (VAR_6->tx_next - VAR_6->tx_echo) > 0; VAR_6->tx_echo++) {
  VAR_8 = FUNC_7(VAR_6);


  if (!(VAR_5 & (1 << VAR_8)))
   break;


  FUNC_2(VAR_6, VAR_0, 1 << VAR_8);







  VAR_7 = FUNC_1(VAR_6, FUNC_0(VAR_8));
  if (FUNC_8(VAR_7 & VAR_2 &&
      ~VAR_7 & VAR_1)) {

   FUNC_3(VAR_4, VAR_8 - FUNC_5(VAR_6));
   VAR_4->stats.tx_packets++;
   FUNC_4(VAR_4, VAR_3);
  }
 }






 if ((VAR_6->tx_next & FUNC_6(VAR_6)) != 0 ||
     (VAR_6->tx_echo & FUNC_6(VAR_6)) == 0)
  FUNC_10(VAR_4);
}
