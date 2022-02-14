
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* data; scalar_t__ vlan_etype; } ;
struct ethtool_rx_flow_spec {int flow_type; scalar_t__ location; TYPE_1__ m_ext; } ;
struct dsa_switch {int dummy; } ;
struct cfp_rule {int port; int next; int fs; } ;
struct TYPE_4__ {int rules_list; int used; } ;
struct bcm_sf2_priv {TYPE_2__ cfp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct bcm_sf2_priv*,int,struct ethtool_rx_flow_spec*) ;
 int FUNC_1 (struct dsa_switch*,int,struct ethtool_rx_flow_spec*) ;
 scalar_t__ FUNC_2 (struct bcm_sf2_priv*) ;
 struct bcm_sf2_priv* FUNC_3 (struct dsa_switch*) ;
 int FUNC_4 (struct cfp_rule*) ;
 struct cfp_rule* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,struct ethtool_rx_flow_spec*,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_9(struct dsa_switch *VAR_8, int VAR_9,
    struct ethtool_rx_flow_spec *VAR_10)
{
 struct bcm_sf2_priv *VAR_11 = FUNC_3(VAR_8);
 struct cfp_rule *VAR_12 = ((void*)0);
 int VAR_13 = -VAR_3;


 if ((VAR_10->flow_type & VAR_5) && (VAR_10->m_ext.vlan_etype ||
      VAR_10->m_ext.data[1]))
  return -VAR_3;

 if (VAR_10->location != VAR_7 && VAR_10->location >= VAR_0)
  return -VAR_3;

 if (VAR_10->location != VAR_7 &&
     FUNC_8(VAR_10->location, VAR_11->cfp.used))
  return -VAR_1;

 if (VAR_10->location != VAR_7 &&
     VAR_10->location > FUNC_2(VAR_11))
  return -VAR_3;

 VAR_13 = FUNC_0(VAR_11, VAR_9, VAR_10);
 if (VAR_13 == 0)
  return -VAR_2;

 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_6);
 if (!VAR_12)
  return -VAR_4;

 VAR_13 = FUNC_1(VAR_8, VAR_9, VAR_10);
 if (VAR_13) {
  FUNC_4(VAR_12);
  return VAR_13;
 }

 VAR_12->port = VAR_9;
 FUNC_7(&VAR_12->fs, VAR_10, sizeof(*VAR_10));
 FUNC_6(&VAR_12->next, &VAR_11->cfp.rules_list);

 return VAR_13;
}
