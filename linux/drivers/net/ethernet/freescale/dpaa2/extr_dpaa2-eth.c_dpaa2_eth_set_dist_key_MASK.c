
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct dpkg_profile_cfg {size_t num_extracts; struct dpkg_extract* extracts; } ;
struct TYPE_7__ {int field; int type; int prot; } ;
struct TYPE_8__ {TYPE_2__ from_hdr; } ;
struct dpkg_extract {TYPE_3__ extract; int type; } ;
struct dpaa2_eth_priv {int rx_hash_fields; } ;
struct device {int dummy; } ;
typedef enum dpaa2_eth_rx_dist { ____Placeholder_dpaa2_eth_rx_dist } dpaa2_eth_rx_dist ;
typedef int dma_addr_t ;
typedef int cls_cfg ;
struct TYPE_9__ {int id; int cls_field; int cls_prot; int rxnfc_field; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct dpaa2_eth_priv*,int ) ;
 int FUNC_2 (struct dpaa2_eth_priv*,int ) ;
 int FUNC_3 (struct dpaa2_eth_priv*,int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 TYPE_4__* VAR_9 ;
 int FUNC_5 (struct device*,int *,int ,int ) ;
 scalar_t__ FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct dpaa2_eth_priv*) ;
 int FUNC_9 (struct dpkg_profile_cfg*,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ,int ) ;
 int FUNC_12 (struct dpkg_profile_cfg*,int ,int) ;
 struct dpaa2_eth_priv* FUNC_13 (struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_10,
      enum dpaa2_eth_rx_dist VAR_11, u64 VAR_12)
{
 struct device *VAR_13 = VAR_10->dev.parent;
 struct dpaa2_eth_priv *VAR_14 = FUNC_13(VAR_10);
 struct dpkg_profile_cfg VAR_15;
 u32 VAR_16 = 0;
 dma_addr_t VAR_17;
 u8 *VAR_18;
 int VAR_19;
 int VAR_20 = 0;

 FUNC_12(&VAR_15, 0, sizeof(VAR_15));

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_9); VAR_19++) {
  struct dpkg_extract *VAR_21 =
   &VAR_15.extracts[VAR_15.num_extracts];




  if (!(VAR_12 & VAR_9[VAR_19].id))
   continue;
  if (VAR_11 == VAR_2)
   VAR_16 |= VAR_9[VAR_19].rxnfc_field;

  if (VAR_15.num_extracts >= VAR_5) {
   FUNC_4(VAR_13, "error adding key extraction rule, too many rules?\n");
   return -VAR_6;
  }

  VAR_21->type = VAR_3;
  VAR_21->extract.from_hdr.prot = VAR_9[VAR_19].cls_prot;
  VAR_21->extract.from_hdr.type = VAR_4;
  VAR_21->extract.from_hdr.field = VAR_9[VAR_19].cls_field;
  VAR_15.num_extracts++;
 }

 VAR_18 = FUNC_11(VAR_1, VAR_8);
 if (!VAR_18)
  return -VAR_7;

 VAR_20 = FUNC_9(&VAR_15, VAR_18);
 if (VAR_20) {
  FUNC_4(VAR_13, "dpni_prepare_key_cfg error %d\n", VAR_20);
  goto free_key;
 }


 VAR_17 = FUNC_5(VAR_13, VAR_18, VAR_1,
      VAR_0);
 if (FUNC_6(VAR_13, VAR_17)) {
  FUNC_4(VAR_13, "DMA mapping failed\n");
  VAR_20 = -VAR_7;
  goto free_key;
 }

 if (VAR_11 == VAR_2) {
  if (FUNC_8(VAR_14))
   VAR_20 = FUNC_3(VAR_14, VAR_17);
  else
   VAR_20 = FUNC_2(VAR_14, VAR_17);
 } else {
  VAR_20 = FUNC_1(VAR_14, VAR_17);
 }

 FUNC_7(VAR_13, VAR_17, VAR_1,
    VAR_0);
 if (!VAR_20 && VAR_11 == VAR_2)
  VAR_14->rx_hash_fields = VAR_16;

free_key:
 FUNC_10(VAR_18);
 return VAR_20;
}
