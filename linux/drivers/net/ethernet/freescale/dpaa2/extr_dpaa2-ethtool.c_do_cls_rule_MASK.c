
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_rx_flow_spec {scalar_t__ ring_cookie; int location; } ;
struct dpni_rule_cfg {int key_size; void* mask_iova; void* key_iova; int member_0; } ;
struct dpni_fs_action_cfg {scalar_t__ flow_id; int options; int member_0; } ;
struct dpaa2_eth_priv {scalar_t__ rx_cls_fields; int mc_token; int mc_io; } ;
struct device {int dummy; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (struct device*,void*,int,int ) ;
 scalar_t__ FUNC_1 (struct device*,void*) ;
 int FUNC_2 (struct device*,void*,int,int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (void*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct dpaa2_eth_priv*) ;
 scalar_t__ FUNC_6 (struct dpaa2_eth_priv*) ;
 int FUNC_7 (struct net_device*,scalar_t__) ;
 int FUNC_8 (int ,int ,int ,int ,int ,struct dpni_rule_cfg*,struct dpni_fs_action_cfg*) ;
 int FUNC_9 (int ,int ,int ,int ,struct dpni_rule_cfg*) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (struct net_device*,char*) ;
 struct dpaa2_eth_priv* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct ethtool_rx_flow_spec*,void*,void*,scalar_t__*) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_8,
         struct ethtool_rx_flow_spec *VAR_9,
         bool VAR_10)
{
 struct dpaa2_eth_priv *VAR_11 = FUNC_13(VAR_8);
 struct device *VAR_12 = VAR_8->dev.parent;
 struct dpni_rule_cfg VAR_13 = { 0 };
 struct dpni_fs_action_cfg VAR_14 = { 0 };
 dma_addr_t VAR_15;
 u64 VAR_16 = 0;
 void *VAR_17;
 int VAR_18;

 if (VAR_9->ring_cookie != VAR_7 &&
     VAR_9->ring_cookie >= FUNC_6(VAR_11))
  return -VAR_3;

 VAR_13.key_size = FUNC_3(VAR_1);


 VAR_17 = FUNC_11(VAR_13.key_size * 2, VAR_6);
 if (!VAR_17)
  return -VAR_4;


 VAR_18 = FUNC_14(VAR_9, VAR_17, VAR_17 + VAR_13.key_size, &VAR_16);
 if (VAR_18)
  goto free_mem;

 if (!FUNC_5(VAR_11)) {
  if (!VAR_11->rx_cls_fields) {
   VAR_18 = FUNC_7(VAR_8, VAR_16);
   if (VAR_18)
    goto free_mem;

   VAR_11->rx_cls_fields = VAR_16;
  } else if (VAR_11->rx_cls_fields != VAR_16) {
   FUNC_12(VAR_8, "No support for multiple FS keys, need to delete existing rules\n");
   VAR_18 = -VAR_5;
   goto free_mem;
  }

  FUNC_4(VAR_17, VAR_16);
  VAR_13.key_size = FUNC_3(VAR_16);
 }

 VAR_15 = FUNC_0(VAR_12, VAR_17, VAR_13.key_size * 2,
      VAR_0);
 if (FUNC_1(VAR_12, VAR_15)) {
  VAR_18 = -VAR_4;
  goto free_mem;
 }

 VAR_13.key_iova = VAR_15;
 if (FUNC_5(VAR_11))
  VAR_13.mask_iova = VAR_15 + VAR_13.key_size;

 if (VAR_10) {
  if (VAR_9->ring_cookie == VAR_7)
   VAR_14.options |= VAR_2;
  else
   VAR_14.flow_id = VAR_9->ring_cookie;
  VAR_18 = FUNC_8(VAR_11->mc_io, 0, VAR_11->mc_token, 0,
     VAR_9->location, &VAR_13, &VAR_14);
 } else {
  VAR_18 = FUNC_9(VAR_11->mc_io, 0, VAR_11->mc_token, 0,
        &VAR_13);
 }

 FUNC_2(VAR_12, VAR_15, VAR_13.key_size * 2, VAR_0);

free_mem:
 FUNC_10(VAR_17);

 return VAR_18;
}
