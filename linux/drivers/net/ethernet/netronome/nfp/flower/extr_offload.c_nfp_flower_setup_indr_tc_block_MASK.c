
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_priv {int indr_block_cb_priv; } ;
struct nfp_flower_indr_block_cb_priv {int list; struct nfp_app* app; struct net_device* netdev; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct net_device {int dummy; } ;
struct flow_block_offload {scalar_t__ binder_type; int command; int block; } ;
struct flow_block_cb {int driver_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (struct flow_block_cb*) ;
 int FUNC_1 (struct flow_block_cb*) ;
 int FUNC_2 (struct flow_block_cb*,struct flow_block_offload*) ;
 struct flow_block_cb* FUNC_3 (int ,struct nfp_flower_indr_block_cb_priv*,struct nfp_flower_indr_block_cb_priv*,int ) ;
 int FUNC_4 (int ,struct nfp_flower_indr_block_cb_priv*,int *) ;
 struct flow_block_cb* FUNC_5 (int ,int ,struct nfp_flower_indr_block_cb_priv*) ;
 int FUNC_6 (struct flow_block_cb*,struct flow_block_offload*) ;
 int FUNC_7 (struct nfp_flower_indr_block_cb_priv*) ;
 struct nfp_flower_indr_block_cb_priv* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 struct nfp_flower_indr_block_cb_priv* FUNC_12 (struct nfp_app*,struct net_device*) ;
 scalar_t__ FUNC_13 (struct nfp_app*,struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_14(struct net_device *VAR_10, struct nfp_app *VAR_11,
          struct flow_block_offload *VAR_12)
{
 struct nfp_flower_indr_block_cb_priv *VAR_13;
 struct nfp_flower_priv *VAR_14 = VAR_11->priv;
 struct flow_block_cb *VAR_15;

 if ((VAR_12->binder_type != VAR_5 &&
      !FUNC_13(VAR_11, VAR_10)) ||
     (VAR_12->binder_type != VAR_4 &&
      FUNC_13(VAR_11, VAR_10)))
  return -VAR_3;

 switch (VAR_12->command) {
 case 129:
  VAR_13 = FUNC_12(VAR_11, VAR_10);
  if (VAR_13 &&
      FUNC_4(VAR_8,
       VAR_13,
       &VAR_7))
   return -VAR_0;

  VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_6);
  if (!VAR_13)
   return -VAR_2;

  VAR_13->netdev = VAR_10;
  VAR_13->app = VAR_11;
  FUNC_9(&VAR_13->list, &VAR_14->indr_block_cb_priv);

  VAR_15 = FUNC_3(VAR_8,
            VAR_13, VAR_13,
            VAR_9);
  if (FUNC_0(VAR_15)) {
   FUNC_11(&VAR_13->list);
   FUNC_7(VAR_13);
   return FUNC_1(VAR_15);
  }

  FUNC_2(VAR_15, VAR_12);
  FUNC_10(&VAR_15->driver_list, &VAR_7);
  return 0;
 case 128:
  VAR_13 = FUNC_12(VAR_11, VAR_10);
  if (!VAR_13)
   return -VAR_1;

  VAR_15 = FUNC_5(VAR_12->block,
      VAR_8,
      VAR_13);
  if (!VAR_15)
   return -VAR_1;

  FUNC_6(VAR_15, VAR_12);
  FUNC_11(&VAR_15->driver_list);
  return 0;
 default:
  return -VAR_3;
 }
 return 0;
}
