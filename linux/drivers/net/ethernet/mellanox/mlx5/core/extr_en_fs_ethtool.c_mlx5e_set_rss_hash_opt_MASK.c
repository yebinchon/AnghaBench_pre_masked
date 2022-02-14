
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * rx_hash_fields; } ;
struct mlx5e_priv {int state_lock; TYPE_1__ rss_params; } ;
struct ethtool_rxnfc {scalar_t__ flow_type; int data; } ;
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
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5e_priv*,void*,int) ;
 int VAR_17 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mlx5e_priv *VAR_18,
      struct ethtool_rxnfc *VAR_19)
{
 int VAR_20 = FUNC_0(VAR_17);
 enum mlx5e_traffic_types VAR_21;
 u8 VAR_22 = 0;
 void *VAR_23;

 VAR_21 = FUNC_1(VAR_19->flow_type);
 if (VAR_21 == VAR_4)
  return -VAR_0;





 if (VAR_19->flow_type != VAR_13 &&
     VAR_19->flow_type != VAR_14 &&
     VAR_19->flow_type != VAR_15 &&
     VAR_19->flow_type != VAR_16)
  return -VAR_2;

 if (VAR_19->data & ~(VAR_10 | VAR_9 |
     VAR_11 | VAR_12))
  return -VAR_2;

 if (VAR_19->data & VAR_10)
  VAR_22 |= VAR_8;
 if (VAR_19->data & VAR_9)
  VAR_22 |= VAR_5;
 if (VAR_19->data & VAR_11)
  VAR_22 |= VAR_7;
 if (VAR_19->data & VAR_12)
  VAR_22 |= VAR_6;

 VAR_23 = FUNC_3(VAR_20, VAR_3);
 if (!VAR_23)
  return -VAR_1;

 FUNC_5(&VAR_18->state_lock);

 if (VAR_22 == VAR_18->rss_params.rx_hash_fields[VAR_21])
  goto out;

 VAR_18->rss_params.rx_hash_fields[VAR_21] = VAR_22;
 FUNC_4(VAR_18, VAR_23, VAR_20);

out:
 FUNC_6(&VAR_18->state_lock);
 FUNC_2(VAR_23);
 return 0;
}
