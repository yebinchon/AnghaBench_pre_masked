
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int params; } ;
struct mlx5e_priv {TYPE_1__ channels; int profile; } ;
struct TYPE_4__ {int h_dest; } ;
struct ethtool_rx_flow_spec {scalar_t__ location; scalar_t__ ring_cookie; int flow_type; TYPE_2__ m_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (struct ethtool_rx_flow_spec*) ;
 int FUNC_3 (struct ethtool_rx_flow_spec*) ;
 int FUNC_4 (struct ethtool_rx_flow_spec*) ;
 int FUNC_5 (struct ethtool_rx_flow_spec*) ;
 int FUNC_6 (struct ethtool_rx_flow_spec*) ;
 int FUNC_7 (struct ethtool_rx_flow_spec*) ;

__attribute__((used)) static int FUNC_8(struct mlx5e_priv *VAR_7,
    struct ethtool_rx_flow_spec *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_8->location >= VAR_5)
  return -VAR_1;

 if (VAR_8->ring_cookie != VAR_6)
  if (!FUNC_1(VAR_7->profile, &VAR_7->channels.params,
     VAR_8->ring_cookie))
   return -VAR_0;

 switch (VAR_8->flow_type & ~(VAR_3 | VAR_4)) {
 case 134:
  VAR_9 += FUNC_2(VAR_8);
  break;
 case 131:
 case 129:
  VAR_10 = FUNC_5(VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_9 += VAR_10;
  break;
 case 132:
  VAR_10 = FUNC_3(VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_9 += VAR_10;
  break;
 case 130:
 case 128:
  VAR_10 = FUNC_6(VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_9 += VAR_10;
  break;
 case 133:
  VAR_10 = FUNC_4(VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_9 += VAR_10;
  break;
 default:
  return -VAR_2;
 }
 if ((VAR_8->flow_type & VAR_3)) {
  VAR_10 = FUNC_7(VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_9 += VAR_10;
 }

 if (VAR_8->flow_type & VAR_4 &&
     !FUNC_0(VAR_8->m_ext.h_dest))
  VAR_9++;

 return VAR_9;
}
