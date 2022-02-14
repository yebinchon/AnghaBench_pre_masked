
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fec_enet_private {int quirks; scalar_t__ hwp; int tx_time_itr; int tx_pkts_itr; int rx_time_itr; int rx_pkts_itr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct net_device*,int ) ;
 struct fec_enet_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_9)
{
 struct fec_enet_private *VAR_10 = FUNC_3(VAR_9);
 int VAR_11, VAR_12;


 if (!VAR_10->rx_time_itr || !VAR_10->rx_pkts_itr ||
     !VAR_10->tx_time_itr || !VAR_10->tx_pkts_itr)
  return;




 VAR_11 = VAR_0;
 VAR_12 = VAR_0;


 VAR_11 |= FUNC_0(VAR_10->rx_pkts_itr);
 VAR_11 |= FUNC_1(FUNC_2(VAR_9, VAR_10->rx_time_itr));
 VAR_12 |= FUNC_0(VAR_10->tx_pkts_itr);
 VAR_12 |= FUNC_1(FUNC_2(VAR_9, VAR_10->tx_time_itr));

 VAR_11 |= VAR_1;
 VAR_12 |= VAR_1;

 FUNC_4(VAR_12, VAR_10->hwp + VAR_6);
 FUNC_4(VAR_11, VAR_10->hwp + VAR_3);
 if (VAR_10->quirks & VAR_2) {
  FUNC_4(VAR_12, VAR_10->hwp + VAR_7);
  FUNC_4(VAR_11, VAR_10->hwp + VAR_4);
  FUNC_4(VAR_12, VAR_10->hwp + VAR_8);
  FUNC_4(VAR_11, VAR_10->hwp + VAR_5);
 }
}
