
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_repr {struct nfp_flower_repr_priv* app_priv; } ;
struct nfp_flower_repr_priv {int block_shared; } ;
struct net_device {int dummy; } ;
struct flow_block_offload {scalar_t__ binder_type; int command; int block; int * driver_block_list; int block_shared; } ;
struct flow_block_cb {int driver_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;

 int FUNC_0 (struct flow_block_cb*) ;
 int FUNC_1 (struct flow_block_cb*) ;
 int FUNC_2 (struct flow_block_cb*,struct flow_block_offload*) ;
 struct flow_block_cb* FUNC_3 (int ,struct nfp_repr*,struct nfp_repr*,int *) ;
 int FUNC_4 (int ,struct nfp_repr*,int *) ;
 struct flow_block_cb* FUNC_5 (int ,int ,struct nfp_repr*) ;
 int FUNC_6 (struct flow_block_cb*,struct flow_block_offload*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 struct nfp_repr* FUNC_9 (struct net_device*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_6,
         struct flow_block_offload *VAR_7)
{
 struct nfp_repr *VAR_8 = FUNC_9(VAR_6);
 struct nfp_flower_repr_priv *VAR_9;
 struct flow_block_cb *VAR_10;

 if (VAR_7->binder_type != VAR_3)
  return -VAR_2;

 VAR_9 = VAR_8->app_priv;
 VAR_9->block_shared = VAR_7->block_shared;
 VAR_7->driver_block_list = &VAR_4;

 switch (VAR_7->command) {
 case 129:
  if (FUNC_4(VAR_5, VAR_8,
       &VAR_4))
   return -VAR_0;

  VAR_10 = FUNC_3(VAR_5,
            VAR_8, VAR_8, ((void*)0));
  if (FUNC_0(VAR_10))
   return FUNC_1(VAR_10);

  FUNC_2(VAR_10, VAR_7);
  FUNC_7(&VAR_10->driver_list, &VAR_4);
  return 0;
 case 128:
  VAR_10 = FUNC_5(VAR_7->block,
      VAR_5,
      VAR_8);
  if (!VAR_10)
   return -VAR_1;

  FUNC_6(VAR_10, VAR_7);
  FUNC_8(&VAR_10->driver_list);
  return 0;
 default:
  return -VAR_2;
 }
}
