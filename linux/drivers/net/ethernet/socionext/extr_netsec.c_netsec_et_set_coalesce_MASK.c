
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_coalesce {int tx_coalesce_usecs; int tx_max_coalesced_frames; int rx_coalesce_usecs; int rx_max_coalesced_frames; } ;
struct netsec_priv {struct ethtool_coalesce et_coalesce; } ;
struct net_device {int dummy; } ;


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
 struct netsec_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct netsec_priv*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_10,
      struct ethtool_coalesce *VAR_11)
{
 struct netsec_priv *VAR_12 = FUNC_0(VAR_10);

 VAR_12->et_coalesce = *VAR_11;

 if (VAR_12->et_coalesce.tx_coalesce_usecs < 50)
  VAR_12->et_coalesce.tx_coalesce_usecs = 50;
 if (VAR_12->et_coalesce.tx_max_coalesced_frames < 1)
  VAR_12->et_coalesce.tx_max_coalesced_frames = 1;

 FUNC_1(VAR_12, VAR_3,
       VAR_12->et_coalesce.tx_max_coalesced_frames);
 FUNC_1(VAR_12, VAR_5,
       VAR_12->et_coalesce.tx_coalesce_usecs);
 FUNC_1(VAR_12, VAR_4, VAR_9);
 FUNC_1(VAR_12, VAR_4, VAR_8);

 if (VAR_12->et_coalesce.rx_coalesce_usecs < 50)
  VAR_12->et_coalesce.rx_coalesce_usecs = 50;
 if (VAR_12->et_coalesce.rx_max_coalesced_frames < 1)
  VAR_12->et_coalesce.rx_max_coalesced_frames = 1;

 FUNC_1(VAR_12, VAR_1,
       VAR_12->et_coalesce.rx_max_coalesced_frames);
 FUNC_1(VAR_12, VAR_2,
       VAR_12->et_coalesce.rx_coalesce_usecs);
 FUNC_1(VAR_12, VAR_0, VAR_6);
 FUNC_1(VAR_12, VAR_0, VAR_7);

 return 0;
}
