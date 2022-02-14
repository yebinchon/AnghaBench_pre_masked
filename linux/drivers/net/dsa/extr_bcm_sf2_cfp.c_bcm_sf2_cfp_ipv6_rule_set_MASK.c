
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
struct flow_match_ports {TYPE_12__* key; TYPE_7__* mask; } ;
struct flow_match_ipv6_addrs {TYPE_15__* mask; TYPE_11__* key; } ;
struct ethtool_rx_flow_spec_input {struct ethtool_rx_flow_spec* fs; } ;
struct TYPE_22__ {int * data; } ;
struct ethtool_rx_flow_spec {int flow_type; unsigned int location; TYPE_1__ m_ext; } ;
struct ethtool_rx_flow_rule {int rule; } ;
struct cfp_udf_layout {TYPE_8__* udfs; } ;
struct TYPE_23__ {int used; int unique; } ;
struct bcm_sf2_priv {TYPE_2__ cfp; int num_cfp_rules; } ;
struct TYPE_30__ {int u6_addr32; } ;
struct TYPE_29__ {int mask_value; int slices; } ;
struct TYPE_28__ {int src; } ;
struct TYPE_26__ {int u6_addr32; } ;
struct TYPE_27__ {TYPE_5__ in6_u; } ;
struct TYPE_24__ {int u6_addr32; } ;
struct TYPE_25__ {TYPE_3__ in6_u; } ;
struct TYPE_20__ {int u6_addr32; } ;
struct TYPE_19__ {TYPE_14__ in6_u; } ;
struct TYPE_21__ {TYPE_13__ dst; TYPE_6__ src; } ;
struct TYPE_18__ {int dst; int src; } ;
struct TYPE_16__ {TYPE_9__ in6_u; } ;
struct TYPE_17__ {TYPE_10__ dst; TYPE_4__ src; } ;


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
 scalar_t__ FUNC_3 (struct ethtool_rx_flow_rule*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct ethtool_rx_flow_rule*) ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;

 unsigned int VAR_13 ;

 int VAR_14 ;
 int FUNC_5 (struct bcm_sf2_priv*,unsigned int,int,unsigned int,unsigned int,int) ;
 int FUNC_6 (struct bcm_sf2_priv*,int) ;
 int FUNC_7 (struct bcm_sf2_priv*,unsigned int) ;
 unsigned int FUNC_8 (struct bcm_sf2_priv*) ;
 int FUNC_9 (struct bcm_sf2_priv*,int ,int ,unsigned int,int) ;
 int FUNC_10 (struct bcm_sf2_priv*,struct cfp_udf_layout const*,unsigned int) ;
 int FUNC_11 (int ) ;
 unsigned int FUNC_12 (struct cfp_udf_layout const*,unsigned int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (unsigned int,int ) ;
 int FUNC_15 (struct bcm_sf2_priv*,int ) ;
 int FUNC_16 (struct bcm_sf2_priv*,int,int ) ;
 struct ethtool_rx_flow_rule* FUNC_17 (struct ethtool_rx_flow_spec_input*) ;
 int FUNC_18 (struct ethtool_rx_flow_rule*) ;
 unsigned int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,struct flow_match_ipv6_addrs*) ;
 int FUNC_21 (int ,struct flow_match_ports*) ;
 int FUNC_22 (char*,unsigned int) ;
 int FUNC_23 (unsigned int,int ) ;
 int FUNC_24 (int) ;
 struct cfp_udf_layout VAR_15 ;
 int FUNC_25 (int) ;

__attribute__((used)) static int FUNC_26(struct bcm_sf2_priv *VAR_16, int VAR_17,
         unsigned int VAR_18,
         unsigned int VAR_19,
         struct ethtool_rx_flow_spec *VAR_20)
{
 struct ethtool_rx_flow_spec_input VAR_21 = {};
 unsigned int VAR_22, VAR_23[2];
 const struct cfp_udf_layout *VAR_24;
 struct ethtool_rx_flow_rule *VAR_25;
 struct flow_match_ipv6_addrs VAR_26;
 struct flow_match_ports VAR_27;
 u8 VAR_28, VAR_29;
 int VAR_30 = 0;
 u8 VAR_31;
 u32 VAR_32;

 switch (VAR_20->flow_type & ~VAR_3) {
 case 129:
  VAR_28 = VAR_5;
  break;
 case 128:
  VAR_28 = VAR_6;
  break;
 default:
  return -VAR_1;
 }

 VAR_29 = FUNC_13(VAR_20->m_ext.data[0]);

 VAR_24 = &VAR_15;
 VAR_22 = FUNC_12(VAR_24, 0);
 if (VAR_22 == VAR_13)
  return -VAR_1;

 VAR_31 = FUNC_11(VAR_24->udfs[VAR_22].slices);
 if (VAR_20->location == VAR_10)
  VAR_23[1] = FUNC_19(VAR_16->cfp.used,
          VAR_16->num_cfp_rules);
 else
  VAR_23[1] = VAR_20->location;
 if (VAR_23[1] > FUNC_8(VAR_16))
  return -VAR_2;




 FUNC_23(VAR_23[1], VAR_16->cfp.used);

 VAR_23[0] = FUNC_19(VAR_16->cfp.used,
         VAR_16->num_cfp_rules);
 if (VAR_23[0] > FUNC_8(VAR_16)) {
  VAR_30 = -VAR_2;
  goto out_err;
 }

 VAR_21.fs = VAR_20;
 VAR_25 = FUNC_17(&VAR_21);
 if (FUNC_3(VAR_25)) {
  VAR_30 = FUNC_4(VAR_25);
  goto out_err;
 }
 FUNC_20(VAR_25->rule, &VAR_26);
 FUNC_21(VAR_25->rule, &VAR_27);


 FUNC_10(VAR_16, VAR_24, VAR_22);


 FUNC_16(VAR_16, FUNC_0(VAR_17), FUNC_1(7));


 FUNC_16(VAR_16, 0xff, FUNC_2(7));
 VAR_32 = 1 << VAR_8 | VAR_28 << VAR_4 |
  VAR_29 << VAR_7 | FUNC_25(VAR_31);
 FUNC_16(VAR_16, VAR_32, FUNC_1(6));




 VAR_32 = VAR_24->udfs[VAR_22].mask_value | FUNC_25(VAR_31);
 FUNC_16(VAR_16, VAR_32, FUNC_2(6));





 FUNC_16(VAR_16, FUNC_24(VAR_31) << 24, FUNC_1(5));


 FUNC_16(VAR_16, FUNC_24(VAR_31) << 24, FUNC_2(5));


 FUNC_9(VAR_16, VAR_26->src.in6_u.u6_addr32,
          VAR_27.key->src, VAR_22, 0);
 FUNC_9(VAR_16, VAR_26->src.in6_u.u6_addr32,
          VAR_27.mask->src, VAR_11, 1);


 FUNC_7(VAR_16, VAR_23[0]);

 VAR_30 = FUNC_6(VAR_16, VAR_9 | VAR_12);
 if (VAR_30) {
  FUNC_22("TCAM entry at addr %d failed\n", VAR_23[0]);
  goto out_err_flow_rule;
 }


 VAR_30 = FUNC_5(VAR_16, VAR_23[0], VAR_17, VAR_18,
          VAR_19, 0);
 if (VAR_30)
  goto out_err_flow_rule;


 VAR_22 = FUNC_12(VAR_24, VAR_22 + 1);
 if (VAR_22 == VAR_13) {
  VAR_30 = -VAR_1;
  goto out_err_flow_rule;
 }

 VAR_31 = FUNC_11(VAR_24->udfs[VAR_22].slices);


 FUNC_10(VAR_16, VAR_24, VAR_22);




 FUNC_16(VAR_16, 0, FUNC_1(7));
 FUNC_16(VAR_16, 0, FUNC_2(7));
 VAR_32 = VAR_23[0] << 24 | FUNC_25(VAR_31) << 16 |
  FUNC_24(VAR_31) << 8;
 FUNC_16(VAR_16, VAR_32, FUNC_1(6));


 VAR_32 = VAR_14 << 24 | FUNC_25(VAR_31) << 16 |
  FUNC_24(VAR_31) << 8;
 FUNC_16(VAR_16, VAR_32, FUNC_2(6));


 FUNC_16(VAR_16, 0, FUNC_1(5));


 FUNC_16(VAR_16, 0, FUNC_2(5));

 FUNC_9(VAR_16, VAR_26->dst.in6_u.u6_addr32,
          VAR_27.key->dst, VAR_22, 0);
 FUNC_9(VAR_16, VAR_26->dst.in6_u.u6_addr32,
          VAR_27.key->dst, VAR_11, 1);


 FUNC_7(VAR_16, VAR_23[1]);

 VAR_30 = FUNC_6(VAR_16, VAR_9 | VAR_12);
 if (VAR_30) {
  FUNC_22("TCAM entry at addr %d failed\n", VAR_23[1]);
  goto out_err_flow_rule;
 }




 VAR_30 = FUNC_5(VAR_16, VAR_23[1], VAR_17, VAR_18,
          VAR_19, 1);
 if (VAR_30)
  goto out_err_flow_rule;


 VAR_32 = FUNC_15(VAR_16, VAR_0);
 VAR_32 |= FUNC_0(VAR_17);
 FUNC_16(VAR_16, VAR_32, VAR_0);




 FUNC_23(VAR_23[0], VAR_16->cfp.used);
 FUNC_23(VAR_23[1], VAR_16->cfp.unique);
 VAR_20->location = VAR_23[1];

 return VAR_30;

out_err_flow_rule:
 FUNC_18(VAR_25);
out_err:
 FUNC_14(VAR_23[1], VAR_16->cfp.used);
 return VAR_30;
}
