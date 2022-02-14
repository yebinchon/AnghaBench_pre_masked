
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tc_mqprio_qopt {int num_tc; int hw; } ;
struct net_device {int dummy; } ;
struct enetc_ndev_priv {int num_tx_rings; TYPE_1__* si; struct enetc_bdr** tx_ring; } ;
struct enetc_bdr {int index; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;
struct TYPE_2__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct enetc_ndev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,int,int,int) ;
 int FUNC_6 (struct net_device*,int) ;

int FUNC_7(struct net_device *VAR_4, enum tc_setup_type VAR_5,
     void *VAR_6)
{
 struct enetc_ndev_priv *VAR_7 = FUNC_2(VAR_4);
 struct tc_mqprio_qopt *VAR_8 = VAR_6;
 struct enetc_bdr *VAR_9;
 u8 VAR_10;
 int VAR_11;

 if (VAR_5 != VAR_3)
  return -VAR_1;

 VAR_8->hw = VAR_2;
 VAR_10 = VAR_8->num_tc;

 if (!VAR_10) {
  FUNC_3(VAR_4);
  FUNC_6(VAR_4, VAR_7->num_tx_rings);


  for (VAR_11 = 0; VAR_11 < VAR_7->num_tx_rings; VAR_11++) {
   VAR_9 = VAR_7->tx_ring[VAR_11];
   FUNC_0(&VAR_7->si->hw, VAR_9->index, 0);
  }

  return 0;
 }


 if (VAR_10 > VAR_7->num_tx_rings) {
  FUNC_1(VAR_4, "Max %d traffic classes supported\n",
      VAR_7->num_tx_rings);
  return -VAR_0;
 }





 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_9 = VAR_7->tx_ring[VAR_11];
  FUNC_0(&VAR_7->si->hw, VAR_9->index, VAR_11);
 }


 FUNC_6(VAR_4, VAR_10);

 FUNC_4(VAR_4, VAR_10);


 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  FUNC_5(VAR_4, VAR_11, 1, VAR_11);

 return 0;
}
