
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nfp_reprs {int * reprs; } ;
struct nfp_repr {struct nfp_flower_repr_priv* app_priv; } ;
struct nfp_port {int dummy; } ;
struct nfp_flower_repr_priv {struct nfp_repr* nfp_repr; } ;
struct nfp_flower_priv {TYPE_3__* nn; int reify_replies; } ;
struct nfp_eth_table {unsigned int count; TYPE_4__* ports; scalar_t__ max_index; } ;
struct nfp_app {int ctrl; int cpp; TYPE_5__* pf; } ;
struct net_device {int name; } ;
typedef int atomic_t ;
struct TYPE_11__ {struct nfp_eth_table* eth_tbl; } ;
struct TYPE_10__ {unsigned int index; int base; int nbi; } ;
struct TYPE_8__ {int netdev; } ;
struct TYPE_9__ {TYPE_2__ dp; TYPE_1__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nfp_port*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nfp_port*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (struct net_device*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct nfp_flower_repr_priv*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct nfp_flower_repr_priv* FUNC_7 (int,int ) ;
 struct nfp_repr* FUNC_8 (struct net_device*) ;
 struct nfp_reprs* FUNC_9 (struct nfp_app*,int ,struct nfp_reprs*) ;
 int FUNC_10 (int ,struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,unsigned int,int ,int ,unsigned int) ;
 struct sk_buff* FUNC_12 (struct nfp_app*,unsigned int) ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (struct nfp_app*,int ,int) ;
 int FUNC_15 (struct nfp_app*,int *,int) ;
 int FUNC_16 (int ,char*,unsigned int,int ) ;
 int FUNC_17 (TYPE_5__*,struct net_device*,struct nfp_port*) ;
 struct nfp_port* FUNC_18 (struct nfp_app*,int ,struct net_device*) ;
 int FUNC_19 (struct nfp_port*) ;
 int FUNC_20 (TYPE_5__*,struct nfp_app*,struct nfp_port*,unsigned int) ;
 struct net_device* FUNC_21 (struct nfp_app*) ;
 int FUNC_22 (struct net_device*) ;
 int FUNC_23 (struct nfp_app*,struct net_device*,int ,struct nfp_port*,int ) ;
 struct nfp_reprs* FUNC_24 (scalar_t__) ;
 int FUNC_25 (struct nfp_app*,struct nfp_reprs*) ;
 int FUNC_26 (int ,char*) ;

__attribute__((used)) static int
FUNC_27(struct nfp_app *VAR_4, struct nfp_flower_priv *VAR_5)
{
 struct nfp_eth_table *VAR_6 = VAR_4->pf->eth_tbl;
 atomic_t *VAR_7 = &VAR_5->reify_replies;
 struct nfp_flower_repr_priv *VAR_8;
 struct nfp_repr *VAR_9;
 struct sk_buff *VAR_10;
 struct nfp_reprs *VAR_11;
 int VAR_12, VAR_13;
 unsigned int VAR_14;

 VAR_10 = FUNC_12(VAR_4, VAR_6->count);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_24(VAR_6->max_index + 1);
 if (!VAR_11) {
  VAR_12 = -VAR_0;
  goto err_free_ctrl_skb;
 }

 for (VAR_14 = 0; VAR_14 < VAR_6->count; VAR_14++) {
  unsigned int VAR_15 = VAR_6->ports[VAR_14].index;
  struct net_device *VAR_16;
  struct nfp_port *VAR_17;
  u32 VAR_18;

  VAR_16 = FUNC_21(VAR_4);
  if (!VAR_16) {
   VAR_12 = -VAR_0;
   goto err_reprs_clean;
  }

  VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_1);
  if (!VAR_8) {
   VAR_12 = -VAR_0;
   FUNC_22(VAR_16);
   goto err_reprs_clean;
  }

  VAR_9 = FUNC_8(VAR_16);
  VAR_9->app_priv = VAR_8;
  VAR_8->nfp_repr = VAR_9;

  VAR_17 = FUNC_18(VAR_4, VAR_2, VAR_16);
  if (FUNC_0(VAR_17)) {
   VAR_12 = FUNC_1(VAR_17);
   FUNC_5(VAR_8);
   FUNC_22(VAR_16);
   goto err_reprs_clean;
  }
  VAR_12 = FUNC_20(VAR_4->pf, VAR_4, VAR_17, VAR_14);
  if (VAR_12) {
   FUNC_5(VAR_8);
   FUNC_19(VAR_17);
   FUNC_22(VAR_16);
   goto err_reprs_clean;
  }

  FUNC_3(VAR_16, &VAR_5->nn->pdev->dev);
  FUNC_17(VAR_4->pf, VAR_16, VAR_17);

  VAR_18 = FUNC_13(VAR_15);
  VAR_12 = FUNC_23(VAR_4, VAR_16,
        VAR_18, VAR_17, VAR_5->nn->dp.netdev);
  if (VAR_12) {
   FUNC_5(VAR_8);
   FUNC_19(VAR_17);
   FUNC_22(VAR_16);
   goto err_reprs_clean;
  }

  FUNC_11(VAR_10, VAR_14,
          VAR_6->ports[VAR_14].nbi,
          VAR_6->ports[VAR_14].base,
          VAR_15);

  FUNC_2(VAR_11->reprs[VAR_15], VAR_16);
  FUNC_16(VAR_4->cpp, "Phys Port %d Representor(%s) created\n",
    VAR_15, VAR_16->name);
 }

 FUNC_9(VAR_4, VAR_3, VAR_11);
 FUNC_4(VAR_7, 0);
 VAR_13 = FUNC_14(VAR_4, VAR_3, 1);
 if (VAR_13 < 0) {
  VAR_12 = VAR_13;
  FUNC_26(VAR_4->cpp, "Failed to notify firmware about repr creation\n");
  goto err_reprs_remove;
 }

 VAR_12 = FUNC_15(VAR_4, VAR_7, VAR_13);
 if (VAR_12)
  goto err_reprs_remove;

 FUNC_10(VAR_4->ctrl, VAR_10);

 return 0;
err_reprs_remove:
 VAR_11 = FUNC_9(VAR_4, VAR_3, ((void*)0));
err_reprs_clean:
 FUNC_25(VAR_4, VAR_11);
err_free_ctrl_skb:
 FUNC_6(VAR_10);
 return VAR_12;
}
