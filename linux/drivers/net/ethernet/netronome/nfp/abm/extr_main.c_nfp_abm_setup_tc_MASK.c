
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_repr {int app_priv; } ;
struct nfp_port {scalar_t__ type; } ;
struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;





 struct nfp_repr* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct nfp_repr*,void*) ;
 int FUNC_2 (struct net_device*,int ,void*) ;
 int FUNC_3 (struct net_device*,int ,void*) ;
 int FUNC_4 (struct net_device*,int ,void*) ;
 int FUNC_5 (struct net_device*,int ,void*) ;
 struct nfp_port* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int
FUNC_7(struct nfp_app *VAR_2, struct net_device *VAR_3,
   enum tc_setup_type VAR_4, void *VAR_5)
{
 struct nfp_repr *VAR_6 = FUNC_0(VAR_3);
 struct nfp_port *VAR_7;

 VAR_7 = FUNC_6(VAR_3);
 if (!VAR_7 || VAR_7->type != VAR_1)
  return -VAR_0;

 switch (VAR_4) {
 case 128:
  return FUNC_2(VAR_3, VAR_6->app_priv, VAR_5);
 case 130:
  return FUNC_4(VAR_3, VAR_6->app_priv, VAR_5);
 case 129:
  return FUNC_5(VAR_3, VAR_6->app_priv, VAR_5);
 case 131:
  return FUNC_3(VAR_3, VAR_6->app_priv, VAR_5);
 case 132:
  return FUNC_1(VAR_3, VAR_6, VAR_5);
 default:
  return -VAR_0;
 }
}
