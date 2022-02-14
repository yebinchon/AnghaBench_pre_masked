
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {struct stmmac_test_priv* af_packet_priv; TYPE_2__* dev; int func; void* type; } ;
struct stmmac_test_priv {int ok; int double_vlan; int vlan_id; TYPE_4__ pt; int comp; struct stmmac_packet_attrs* packet; } ;
struct TYPE_6__ {int vlins; } ;
struct stmmac_priv {TYPE_2__* dev; TYPE_1__ dma_cap; } ;
struct stmmac_packet_attrs {int dst; } ;
struct sk_buff {void* protocol; } ;
struct TYPE_7__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,void*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_4__*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct stmmac_test_priv*) ;
 struct stmmac_test_priv* FUNC_7 (int,int ) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_9 (struct stmmac_priv*,struct stmmac_packet_attrs*) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_2__*,void*,int) ;
 int FUNC_11 (TYPE_2__*,void*,int) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct stmmac_priv *VAR_9, bool VAR_10)
{
 struct stmmac_packet_attrs VAR_11 = { };
 struct stmmac_test_priv *VAR_12;
 struct sk_buff *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 u16 VAR_15;

 if (!VAR_9->dma_cap.vlins)
  return -VAR_1;

 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_6);
 if (!VAR_12)
  return -VAR_0;

 VAR_15 = VAR_10 ? VAR_2 : VAR_3;

 VAR_12->ok = 0;
 VAR_12->double_vlan = VAR_10;
 FUNC_5(&VAR_12->comp);

 VAR_12->pt.type = VAR_10 ? FUNC_4(VAR_3) : FUNC_4(VAR_4);
 VAR_12->pt.func = VAR_8;
 VAR_12->pt.dev = VAR_9->dev;
 VAR_12->pt.af_packet_priv = VAR_12;
 VAR_12->packet = &VAR_11;
 VAR_12->vlan_id = 0x123;
 FUNC_1(&VAR_12->pt);

 VAR_14 = FUNC_10(VAR_9->dev, FUNC_4(VAR_15), VAR_12->vlan_id);
 if (VAR_14)
  goto cleanup;

 VAR_11.dst = VAR_9->dev->dev_addr;

 VAR_13 = FUNC_9(VAR_9, &VAR_11);
 if (!VAR_13) {
  VAR_14 = -VAR_0;
  goto vlan_del;
 }

 FUNC_0(VAR_13, FUNC_4(VAR_15), VAR_12->vlan_id);
 VAR_13->protocol = FUNC_4(VAR_15);

 FUNC_8(VAR_13, 0);
 VAR_14 = FUNC_2(VAR_13);
 if (VAR_14)
  goto vlan_del;

 FUNC_12(&VAR_12->comp, VAR_7);
 VAR_14 = VAR_12->ok ? 0 : -VAR_5;

vlan_del:
 FUNC_11(VAR_9->dev, FUNC_4(VAR_15), VAR_12->vlan_id);
cleanup:
 FUNC_3(&VAR_12->pt);
 FUNC_6(VAR_12);
 return VAR_14;
}
