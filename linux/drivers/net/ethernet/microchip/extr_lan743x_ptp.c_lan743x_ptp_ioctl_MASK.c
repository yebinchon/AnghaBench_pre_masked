
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lan743x_adapter {int netdev; int * tx; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int flags; int tx_type; } ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct lan743x_adapter*,int) ;
 int FUNC_3 (int *,int,int) ;
 struct lan743x_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct lan743x_adapter*,int ,int ,char*) ;
 int FUNC_6 (struct lan743x_adapter*,int ,int ,char*,int) ;

int FUNC_7(struct net_device *VAR_4, struct ifreq *VAR_5, int VAR_6)
{
 struct lan743x_adapter *VAR_7 = FUNC_4(VAR_4);
 struct hwtstamp_config VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 if (!VAR_5) {
  FUNC_5(VAR_7, VAR_3, VAR_7->netdev,
     "SIOCSHWTSTAMP, ifr == NULL\n");
  return -VAR_1;
 }

 if (FUNC_0(&VAR_8, VAR_5->ifr_data, sizeof(VAR_8)))
  return -VAR_0;

 if (VAR_8.flags) {
  FUNC_6(VAR_7, VAR_3, VAR_7->netdev,
      "ignoring hwtstamp_config.flags == 0x%08X, expected 0\n",
      VAR_8.flags);
 }

 switch (VAR_8.tx_type) {
 case 130:
  for (VAR_10 = 0; VAR_10 < VAR_2;
   VAR_10++)
   FUNC_3(&VAR_7->tx[VAR_10],
        0, 0);
  FUNC_2(VAR_7, 0);
  break;
 case 129:
  for (VAR_10 = 0; VAR_10 < VAR_2;
   VAR_10++)
   FUNC_3(&VAR_7->tx[VAR_10],
        1, 0);
  FUNC_2(VAR_7, 0);
  break;
 case 128:
  for (VAR_10 = 0; VAR_10 < VAR_2;
   VAR_10++)
   FUNC_3(&VAR_7->tx[VAR_10],
        1, 1);

  FUNC_2(VAR_7, 1);
  break;
 default:
  FUNC_6(VAR_7, VAR_3, VAR_7->netdev,
      "  tx_type = %d, UNKNOWN\n", VAR_8.tx_type);
  VAR_9 = -VAR_1;
  break;
 }

 if (!VAR_9)
  return FUNC_1(VAR_5->ifr_data, &VAR_8,
   sizeof(VAR_8)) ? -VAR_0 : 0;
 return VAR_9;
}
