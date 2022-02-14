
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct flow_match_ports {int mask; int key; } ;
struct flow_match_ipv4_addrs {int mask; int key; } ;
struct flow_match_ip {TYPE_2__* key; } ;
struct ethtool_rx_flow_spec_input {struct ethtool_rx_flow_spec* fs; } ;
struct TYPE_5__ {int * data; } ;
struct ethtool_rx_flow_spec {int flow_type; unsigned int location; TYPE_1__ m_ext; } ;
struct ethtool_rx_flow_rule {int rule; } ;
struct cfp_udf_layout {TYPE_3__* udfs; } ;
struct TYPE_8__ {int unique; int used; } ;
struct bcm_sf2_priv {TYPE_4__ cfp; int num_cfp_rules; } ;
struct TYPE_7__ {int mask_value; int slices; } ;
struct TYPE_6__ {int tos; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct ethtool_rx_flow_rule*) ;
 int VAR_9 ;
 int FUNC_4 (struct ethtool_rx_flow_rule*) ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;

 unsigned int VAR_13 ;

 int FUNC_5 (struct bcm_sf2_priv*,unsigned int,int,unsigned int,unsigned int,int) ;
 int FUNC_6 (struct bcm_sf2_priv*,int) ;
 int FUNC_7 (struct bcm_sf2_priv*,unsigned int) ;
 unsigned int FUNC_8 (struct bcm_sf2_priv*) ;
 int FUNC_9 (struct bcm_sf2_priv*,int ,int ,unsigned int,int) ;
 int FUNC_10 (struct bcm_sf2_priv*,struct cfp_udf_layout const*,unsigned int) ;
 int FUNC_11 (int ) ;
 unsigned int FUNC_12 (struct cfp_udf_layout const*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct bcm_sf2_priv*,int ) ;
 int FUNC_15 (struct bcm_sf2_priv*,int,int ) ;
 struct ethtool_rx_flow_rule* FUNC_16 (struct ethtool_rx_flow_spec_input*) ;
 int FUNC_17 (struct ethtool_rx_flow_rule*) ;
 unsigned int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,struct flow_match_ip*) ;
 int FUNC_20 (int ,struct flow_match_ipv4_addrs*) ;
 int FUNC_21 (int ,struct flow_match_ports*) ;
 int FUNC_22 (char*,unsigned int) ;
 int FUNC_23 (unsigned int,int ) ;
 int FUNC_24 (int) ;
 struct cfp_udf_layout VAR_14 ;
 int FUNC_25 (int) ;

__attribute__((used)) static int FUNC_26(struct bcm_sf2_priv *VAR_15, int VAR_16,
         unsigned int VAR_17,
         unsigned int VAR_18,
         struct ethtool_rx_flow_spec *VAR_19)
{
 struct ethtool_rx_flow_spec_input VAR_20 = {};
 const struct cfp_udf_layout *VAR_21;
 unsigned int VAR_22, VAR_23;
 struct ethtool_rx_flow_rule *VAR_24;
 struct flow_match_ipv4_addrs VAR_25;
 struct flow_match_ports VAR_26;
 struct flow_match_ip VAR_27;
 u8 VAR_28, VAR_29;
 u8 VAR_30;
 u32 VAR_31;
 int VAR_32;

 switch (VAR_19->flow_type & ~VAR_3) {
 case 129:
  VAR_28 = VAR_5;
  break;
 case 128:
  VAR_28 = VAR_6;
  break;
 default:
  return -VAR_1;
 }

 VAR_29 = FUNC_13(VAR_19->m_ext.data[0]);


 if (VAR_19->location == VAR_10)
  VAR_23 = FUNC_18(VAR_15->cfp.used,
       VAR_15->num_cfp_rules);
 else
  VAR_23 = VAR_19->location;

 if (VAR_23 > FUNC_8(VAR_15))
  return -VAR_2;

 VAR_20.fs = VAR_19;
 VAR_24 = FUNC_16(&VAR_20);
 if (FUNC_3(VAR_24))
  return FUNC_4(VAR_24);

 FUNC_20(VAR_24->rule, &VAR_25);
 FUNC_21(VAR_24->rule, &VAR_26);
 FUNC_19(VAR_24->rule, &VAR_27);

 VAR_21 = &VAR_14;

 VAR_22 = FUNC_12(VAR_21, 0);
 if (VAR_22 == VAR_13) {
  VAR_32 = -VAR_1;
  goto out_err_flow_rule;
 }

 VAR_30 = FUNC_11(VAR_21->udfs[VAR_22].slices);


 FUNC_10(VAR_15, VAR_21, VAR_22);


 FUNC_15(VAR_15, FUNC_0(VAR_16), FUNC_1(7));


 FUNC_15(VAR_15, 0xff, FUNC_2(7));
 FUNC_15(VAR_15, VAR_27.key->tos << VAR_7 |
      VAR_28 << VAR_4 | VAR_29 << VAR_8 |
      FUNC_25(VAR_30),
      FUNC_1(6));


 FUNC_15(VAR_15, VAR_21->udfs[VAR_22].mask_value |
      FUNC_25(VAR_30), FUNC_2(6));





 FUNC_15(VAR_15, FUNC_24(VAR_30) << 24, FUNC_1(5));


 FUNC_15(VAR_15, FUNC_24(VAR_30) << 24, FUNC_2(5));


 FUNC_9(VAR_15, VAR_25, VAR_26.key, VAR_22, 0);
 FUNC_9(VAR_15, VAR_25, VAR_26.mask, VAR_11, 1);


 FUNC_7(VAR_15, VAR_23);

 VAR_32 = FUNC_6(VAR_15, VAR_9 | VAR_12);
 if (VAR_32) {
  FUNC_22("TCAM entry at addr %d failed\n", VAR_23);
  goto out_err_flow_rule;
 }


 VAR_32 = FUNC_5(VAR_15, VAR_23, VAR_16, VAR_17,
          VAR_18, 1);
 if (VAR_32)
  goto out_err_flow_rule;


 VAR_31 = FUNC_14(VAR_15, VAR_0);
 VAR_31 |= FUNC_0(VAR_16);
 FUNC_15(VAR_15, VAR_31, VAR_0);


 FUNC_23(VAR_23, VAR_15->cfp.used);
 FUNC_23(VAR_23, VAR_15->cfp.unique);
 VAR_19->location = VAR_23;

 return 0;

out_err_flow_rule:
 FUNC_17(VAR_24);
 return VAR_32;
}
