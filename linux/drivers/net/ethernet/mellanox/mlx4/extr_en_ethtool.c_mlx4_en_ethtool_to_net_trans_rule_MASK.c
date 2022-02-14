
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_6__ {int ether_type_enable; int ether_type; } ;
struct mlx4_spec_list {TYPE_3__ eth; } ;
struct mlx4_en_priv {int dummy; } ;
struct list_head {int dummy; } ;
struct ethhdr {int h_proto; int * h_dest; } ;
struct TYPE_4__ {struct ethhdr ether_spec; } ;
struct TYPE_5__ {int flow_type; TYPE_1__ h_u; } ;
struct ethtool_rxnfc {TYPE_2__ fs; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct mlx4_en_priv*,struct ethtool_rxnfc*,struct list_head*) ;
 int FUNC_1 (struct mlx4_en_priv*,struct ethtool_rxnfc*,struct list_head*,int const) ;
 struct mlx4_spec_list* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ethtool_rxnfc*,struct list_head*,struct mlx4_spec_list*,int *) ;
 int FUNC_4 (struct net_device*,struct ethtool_rxnfc*) ;
 struct mlx4_en_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
          struct ethtool_rxnfc *VAR_5,
          struct list_head *VAR_6)
{
 int VAR_7;
 struct ethhdr *VAR_8;
 struct mlx4_spec_list *VAR_9;
 struct mlx4_en_priv *VAR_10 = FUNC_5(VAR_4);

 VAR_7 = FUNC_4(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 switch (VAR_5->fs.flow_type & ~(VAR_1 | VAR_2)) {
 case 131:
  VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_3);
  if (!VAR_9)
   return -VAR_0;

  VAR_8 = &VAR_5->fs.h_u.ether_spec;
  FUNC_3(VAR_5, VAR_6, VAR_9,
          &VAR_8->h_dest[0]);
  VAR_9->eth.ether_type = VAR_8->h_proto;
  if (VAR_8->h_proto)
   VAR_9->eth.ether_type_enable = 1;
  break;
 case 130:
  VAR_7 = FUNC_0(VAR_10, VAR_5, VAR_6);
  break;
 case 129:
  VAR_7 = FUNC_1(VAR_10, VAR_5, VAR_6, 129);
  break;
 case 128:
  VAR_7 = FUNC_1(VAR_10, VAR_5, VAR_6, 128);
  break;
 }

 return VAR_7;
}
