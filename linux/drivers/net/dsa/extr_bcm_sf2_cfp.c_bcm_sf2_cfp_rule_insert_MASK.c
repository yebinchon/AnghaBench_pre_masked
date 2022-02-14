
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ethtool_rx_flow_spec {unsigned int ring_cookie; int flow_type; } ;
struct dsa_switch {TYPE_2__* ports; } ;
struct TYPE_6__ {unsigned int num_ports; } ;
struct bcm_sf2_priv {TYPE_3__ hw_params; } ;
typedef unsigned int s8 ;
typedef unsigned int __u64 ;
struct TYPE_5__ {TYPE_1__* cpu_dp; } ;
struct TYPE_4__ {unsigned int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;




 int FUNC_0 (struct bcm_sf2_priv*,int,unsigned int,unsigned int,struct ethtool_rx_flow_spec*) ;
 int FUNC_1 (struct bcm_sf2_priv*,int,unsigned int,unsigned int,struct ethtool_rx_flow_spec*) ;
 struct bcm_sf2_priv* FUNC_2 (struct dsa_switch*) ;
 scalar_t__ FUNC_3 (struct dsa_switch*,unsigned int) ;
 scalar_t__ FUNC_4 (struct dsa_switch*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct dsa_switch *VAR_5, int VAR_6,
       struct ethtool_rx_flow_spec *VAR_7)
{
 struct bcm_sf2_priv *VAR_8 = FUNC_2(VAR_5);
 s8 VAR_9 = VAR_5->ports[VAR_6].cpu_dp->index;
 __u64 VAR_10 = VAR_7->ring_cookie;
 unsigned int VAR_11, VAR_12;
 int VAR_13;




 if (VAR_10 == VAR_3)
  VAR_10 = VAR_9 * VAR_4;





 VAR_12 = VAR_10 / VAR_4;

 if (VAR_10 == VAR_2 ||
     !(FUNC_4(VAR_5, VAR_12) ||
       FUNC_3(VAR_5, VAR_12)) ||
     VAR_12 >= VAR_8->hw_params.num_ports)
  return -VAR_0;




 VAR_11 = VAR_10 % VAR_4;
 if (VAR_12 >= 7)
  VAR_12 -= 1;

 switch (VAR_7->flow_type & ~VAR_1) {
 case 131:
 case 129:
  VAR_13 = FUNC_0(VAR_8, VAR_6, VAR_12,
      VAR_11, VAR_7);
  break;
 case 130:
 case 128:
  VAR_13 = FUNC_1(VAR_8, VAR_6, VAR_12,
      VAR_11, VAR_7);
  break;
 default:
  VAR_13 = -VAR_0;
  break;
 }

 return VAR_13;
}
