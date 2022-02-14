
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct stmmac_test_priv* af_packet_priv; TYPE_2__* dev; int func; int type; } ;
struct stmmac_test_priv {int ok; int vlan_id; TYPE_4__ pt; int comp; struct stmmac_packet_attrs* packet; } ;
struct TYPE_6__ {int vlhash; } ;
struct stmmac_priv {TYPE_2__* dev; TYPE_1__ dma_cap; } ;
struct stmmac_packet_attrs {int vlan; int vlan_id_out; int sport; int dport; int dst; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct stmmac_test_priv*) ;
 struct stmmac_test_priv* FUNC_6 (int,int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_8 (struct stmmac_priv*,struct stmmac_packet_attrs*) ;
 int VAR_8 ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct stmmac_priv *VAR_9)
{
 struct stmmac_packet_attrs VAR_10 = { };
 struct stmmac_test_priv *VAR_11;
 struct sk_buff *VAR_12 = ((void*)0);
 int VAR_13 = 0, VAR_14;

 if (!VAR_9->dma_cap.vlhash)
  return -VAR_2;

 VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_6);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->ok = 0;
 FUNC_4(&VAR_11->comp);

 VAR_11->pt.type = FUNC_3(VAR_4);
 VAR_11->pt.func = VAR_8;
 VAR_11->pt.dev = VAR_9->dev;
 VAR_11->pt.af_packet_priv = VAR_11;
 VAR_11->packet = &VAR_10;






 VAR_11->vlan_id = 0x123;
 FUNC_0(&VAR_11->pt);

 VAR_13 = FUNC_9(VAR_9->dev, FUNC_3(VAR_3), VAR_11->vlan_id);
 if (VAR_13)
  goto cleanup;

 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  VAR_10.vlan = 1;
  VAR_10.vlan_id_out = VAR_11->vlan_id + VAR_14;
  VAR_10.dst = VAR_9->dev->dev_addr;
  VAR_10.sport = 9;
  VAR_10.dport = 9;

  VAR_12 = FUNC_8(VAR_9, &VAR_10);
  if (!VAR_12) {
   VAR_13 = -VAR_1;
   goto vlan_del;
  }

  FUNC_7(VAR_12, 0);
  VAR_13 = FUNC_1(VAR_12);
  if (VAR_13)
   goto vlan_del;

  FUNC_11(&VAR_11->comp, VAR_7);
  VAR_13 = VAR_11->ok ? 0 : -VAR_5;
  if (VAR_13 && !VAR_14) {
   goto vlan_del;
  } else if (!VAR_13 && VAR_14) {
   VAR_13 = -VAR_0;
   goto vlan_del;
  } else {
   VAR_13 = 0;
  }

  VAR_11->ok = 0;
 }

vlan_del:
 FUNC_10(VAR_9->dev, FUNC_3(VAR_3), VAR_11->vlan_id);
cleanup:
 FUNC_2(&VAR_11->pt);
 FUNC_5(VAR_11);
 return VAR_13;
}
