
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* rx_hash_fields; } ;
struct mlx5e_priv {TYPE_1__ rss_params; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;
typedef enum mlx5e_traffic_types { ____Placeholder_mlx5e_traffic_types } mlx5e_traffic_types ;


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
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_10,
      struct ethtool_rxnfc *VAR_11)
{
 enum mlx5e_traffic_types VAR_12;
 u32 VAR_13 = 0;

 VAR_12 = FUNC_0(VAR_11->flow_type);
 if (VAR_12 == VAR_1)
  return -VAR_0;

 VAR_13 = VAR_10->rss_params.rx_hash_fields[VAR_12];
 VAR_11->data = 0;

 if (VAR_13 & VAR_5)
  VAR_11->data |= VAR_7;
 if (VAR_13 & VAR_2)
  VAR_11->data |= VAR_6;
 if (VAR_13 & VAR_4)
  VAR_11->data |= VAR_8;
 if (VAR_13 & VAR_3)
  VAR_11->data |= VAR_9;

 return 0;
}
