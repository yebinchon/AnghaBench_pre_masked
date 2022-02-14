
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfp_repr {struct nfp_flower_repr_priv* app_priv; struct nfp_app* app; } ;
struct nfp_flower_repr_priv {int mac_offloaded; int * offloaded_mac_addr; scalar_t__ on_bridge; } ;
struct nfp_flower_non_repr_priv {int mac_offloaded; int * offloaded_mac_addr; } ;
struct nfp_app {int dummy; } ;
struct net_device {int * dev_addr; } ;
typedef enum nfp_flower_mac_offload_cmd { ____Placeholder_nfp_flower_mac_offload_cmd } nfp_flower_mac_offload_cmd ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct nfp_flower_non_repr_priv*) ;
 int FUNC_1 (struct nfp_flower_non_repr_priv*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 struct nfp_repr* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct nfp_app*,char*,int ) ;
 struct nfp_flower_non_repr_priv* FUNC_9 (struct nfp_app*,struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct nfp_app*,struct net_device*,int,int) ;
 int FUNC_13 (struct nfp_app*,struct net_device*,int *,int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(struct nfp_app *VAR_2, struct net_device *VAR_3,
         enum nfp_flower_mac_offload_cmd VAR_4)
{
 struct nfp_flower_non_repr_priv *VAR_5 = ((void*)0);
 bool VAR_6 = 0, *VAR_7;
 u8 *VAR_8 = ((void*)0);
 int VAR_9, VAR_10 = 0;

 if (FUNC_10(VAR_3)) {
  struct nfp_flower_repr_priv *VAR_11;
  struct nfp_repr *VAR_12;

  VAR_12 = FUNC_6(VAR_3);
  if (VAR_12->app != VAR_2)
   return 0;

  VAR_11 = VAR_12->app_priv;
  if (VAR_11->on_bridge)
   return 0;

  VAR_7 = &VAR_11->mac_offloaded;
  VAR_8 = &VAR_11->offloaded_mac_addr[0];
  VAR_10 = FUNC_11(VAR_3);
  if (!FUNC_14(VAR_10))
   return 0;
 } else if (FUNC_7(VAR_3)) {
  VAR_5 = FUNC_9(VAR_2, VAR_3);
  if (!VAR_5)
   return -VAR_1;

  VAR_7 = &VAR_5->mac_offloaded;
  VAR_8 = &VAR_5->offloaded_mac_addr[0];
  VAR_6 = 1;
 } else {
  return 0;
 }

 if (!FUNC_4(VAR_3->dev_addr)) {
  VAR_9 = -VAR_0;
  goto err_put_non_repr_priv;
 }

 if (VAR_4 == 128 && !*VAR_7)
  VAR_4 = 130;

 switch (VAR_4) {
 case 130:
  VAR_9 = FUNC_12(VAR_2, VAR_3, VAR_10, 0);
  if (VAR_9)
   goto err_put_non_repr_priv;

  if (VAR_6)
   FUNC_0(VAR_5);

  *VAR_7 = 1;
  FUNC_2(VAR_8, VAR_3->dev_addr);
  break;
 case 129:

  if (!*VAR_7)
   break;

  if (VAR_6)
   FUNC_1(VAR_5);

  *VAR_7 = 0;

  VAR_9 = FUNC_13(VAR_2, VAR_3, VAR_3->dev_addr,
      0);
  if (VAR_9)
   goto err_put_non_repr_priv;

  break;
 case 128:

  if (FUNC_3(VAR_3->dev_addr, VAR_8))
   break;

  VAR_9 = FUNC_12(VAR_2, VAR_3, VAR_10, 1);
  if (VAR_9)
   goto err_put_non_repr_priv;


  VAR_9 = FUNC_13(VAR_2, VAR_3, VAR_8, 1);
  if (VAR_9)
   FUNC_8(VAR_2, "Failed to remove offload of replaced MAC addr on %s.\n",
          FUNC_5(VAR_3));

  FUNC_2(VAR_8, VAR_3->dev_addr);
  break;
 default:
  VAR_9 = -VAR_0;
  goto err_put_non_repr_priv;
 }

 if (VAR_6)
  FUNC_1(VAR_5);

 return 0;

err_put_non_repr_priv:
 if (VAR_6)
  FUNC_1(VAR_5);

 return VAR_9;
}
