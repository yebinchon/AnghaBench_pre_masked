
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wil6210_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int rx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wil6210_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 int FUNC_2 (struct wil6210_priv*) ;
 int FUNC_3 (struct wil6210_priv*) ;
 int FUNC_4 (struct wil6210_priv*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6,
           struct ethtool_coalesce *VAR_7)
{
 struct wil6210_priv *VAR_8 = FUNC_0(VAR_6);
 u32 VAR_9, VAR_10 = 0;
 u32 VAR_11, VAR_12 = 0;
 int VAR_13;

 FUNC_1(VAR_8, "ethtoolops_get_coalesce\n");

 VAR_13 = FUNC_2(VAR_8);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_9 = FUNC_4(VAR_8, VAR_4);
 if (VAR_9 & VAR_1)
  VAR_10 = FUNC_4(VAR_8, VAR_5);

 VAR_11 = FUNC_4(VAR_8, VAR_2);
 if (VAR_11 & VAR_0)
  VAR_12 = FUNC_4(VAR_8, VAR_3);

 FUNC_3(VAR_8);

 VAR_7->tx_coalesce_usecs = VAR_10;
 VAR_7->rx_coalesce_usecs = VAR_12;
 return 0;
}
