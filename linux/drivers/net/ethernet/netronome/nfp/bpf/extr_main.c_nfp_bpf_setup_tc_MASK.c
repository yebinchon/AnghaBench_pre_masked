
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {int dummy; } ;
struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;

 int FUNC_0 (void*,int *,int ,struct nfp_net*,struct nfp_net*,int) ;
 struct nfp_net* FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct nfp_app *VAR_3, struct net_device *VAR_4,
       enum tc_setup_type VAR_5, void *VAR_6)
{
 struct nfp_net *VAR_7 = FUNC_1(VAR_4);

 switch (VAR_5) {
 case 128:
  return FUNC_0(VAR_6,
        &VAR_1,
        VAR_2,
        VAR_7, VAR_7, 1);
 default:
  return -VAR_0;
 }
}
