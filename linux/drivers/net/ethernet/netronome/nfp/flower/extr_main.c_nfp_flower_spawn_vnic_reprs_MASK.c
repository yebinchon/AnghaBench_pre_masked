
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nfp_reprs {int * reprs; } ;
struct nfp_repr {struct nfp_flower_repr_priv* app_priv; } ;
struct nfp_port {int pf_id; int vf_id; scalar_t__ vnic; } ;
struct nfp_flower_repr_priv {struct nfp_repr* nfp_repr; } ;
struct nfp_flower_priv {TYPE_3__* nn; int reify_replies; } ;
struct nfp_app {int cpp; TYPE_1__* pf; struct nfp_flower_priv* priv; } ;
struct net_device {int name; } ;
typedef enum nfp_repr_type { ____Placeholder_nfp_repr_type } nfp_repr_type ;
typedef enum nfp_port_type { ____Placeholder_nfp_port_type } nfp_port_type ;
typedef enum nfp_flower_cmsg_port_vnic_type { ____Placeholder_nfp_flower_cmsg_port_vnic_type } nfp_flower_cmsg_port_vnic_type ;
typedef int atomic_t ;
struct TYPE_5__ {int netdev; scalar_t__ ctrl_bar; } ;
struct TYPE_6__ {TYPE_2__ dp; } ;
struct TYPE_4__ {scalar_t__ vf_cfg_mem; int cpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nfp_port*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nfp_port*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct nfp_flower_repr_priv*) ;
 struct nfp_flower_repr_priv* FUNC_7 (int,int ) ;
 struct nfp_repr* FUNC_8 (struct net_device*) ;
 struct nfp_reprs* FUNC_9 (struct nfp_app*,int,struct nfp_reprs*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,int,int const) ;
 int FUNC_12 (struct nfp_app*,int,int) ;
 int FUNC_13 (struct nfp_app*,int *,int) ;
 int FUNC_14 (int ,char*,char*,int,int ) ;
 struct nfp_port* FUNC_15 (struct nfp_app*,int,struct net_device*) ;
 int FUNC_16 (struct nfp_port*) ;
 struct net_device* FUNC_17 (struct nfp_app*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct nfp_app*,struct net_device*,int ,struct nfp_port*,int ) ;
 struct nfp_reprs* FUNC_20 (unsigned int) ;
 int FUNC_21 (struct nfp_app*,struct nfp_reprs*) ;
 int FUNC_22 (int ,char*) ;

__attribute__((used)) static int
FUNC_23(struct nfp_app *VAR_6,
       enum nfp_flower_cmsg_port_vnic_type VAR_7,
       enum nfp_repr_type VAR_8, unsigned int VAR_9)
{
 u8 VAR_10 = FUNC_10(VAR_6->pf->cpp);
 struct nfp_flower_priv *VAR_11 = VAR_6->priv;
 atomic_t *VAR_12 = &VAR_11->reify_replies;
 struct nfp_flower_repr_priv *VAR_13;
 enum nfp_port_type VAR_14;
 struct nfp_repr *VAR_15;
 struct nfp_reprs *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 const u8 VAR_20 = 0;

 VAR_14 = VAR_8 == VAR_5 ? VAR_3 :
          VAR_4;

 VAR_16 = FUNC_20(VAR_9);
 if (!VAR_16)
  return -VAR_0;

 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  struct net_device *VAR_21;
  struct nfp_port *VAR_22;
  u32 VAR_23;

  VAR_21 = FUNC_17(VAR_6);
  if (!VAR_21) {
   VAR_18 = -VAR_0;
   goto err_reprs_clean;
  }

  VAR_13 = FUNC_7(sizeof(*VAR_13), VAR_1);
  if (!VAR_13) {
   VAR_18 = -VAR_0;
   FUNC_18(VAR_21);
   goto err_reprs_clean;
  }

  VAR_15 = FUNC_8(VAR_21);
  VAR_15->app_priv = VAR_13;
  VAR_13->nfp_repr = VAR_15;


  FUNC_3(VAR_8 == VAR_5 && VAR_17);

  VAR_22 = FUNC_15(VAR_6, VAR_14, VAR_21);
  if (FUNC_0(VAR_22)) {
   VAR_18 = FUNC_1(VAR_22);
   FUNC_6(VAR_13);
   FUNC_18(VAR_21);
   goto err_reprs_clean;
  }
  if (VAR_8 == VAR_5) {
   VAR_22->pf_id = VAR_17;
   VAR_22->vnic = VAR_11->nn->dp.ctrl_bar;
  } else {
   VAR_22->pf_id = 0;
   VAR_22->vf_id = VAR_17;
   VAR_22->vnic =
    VAR_6->pf->vf_cfg_mem + VAR_17 * VAR_2;
  }

  FUNC_5(VAR_21);

  VAR_23 = FUNC_11(VAR_10, VAR_7,
          VAR_17, VAR_20);
  VAR_18 = FUNC_19(VAR_6, VAR_21,
        VAR_23, VAR_22, VAR_11->nn->dp.netdev);
  if (VAR_18) {
   FUNC_6(VAR_13);
   FUNC_16(VAR_22);
   FUNC_18(VAR_21);
   goto err_reprs_clean;
  }

  FUNC_2(VAR_16->reprs[VAR_17], VAR_21);
  FUNC_14(VAR_6->cpp, "%s%d Representor(%s) created\n",
    VAR_8 == VAR_5 ? "PF" : "VF", VAR_17,
    VAR_21->name);
 }

 FUNC_9(VAR_6, VAR_8, VAR_16);

 FUNC_4(VAR_12, 0);
 VAR_19 = FUNC_12(VAR_6, VAR_8, 1);
 if (VAR_19 < 0) {
  VAR_18 = VAR_19;
  FUNC_22(VAR_6->cpp, "Failed to notify firmware about repr creation\n");
  goto err_reprs_remove;
 }

 VAR_18 = FUNC_13(VAR_6, VAR_12, VAR_19);
 if (VAR_18)
  goto err_reprs_remove;

 return 0;
err_reprs_remove:
 VAR_16 = FUNC_9(VAR_6, VAR_8, ((void*)0));
err_reprs_clean:
 FUNC_21(VAR_6, VAR_16);
 return VAR_18;
}
