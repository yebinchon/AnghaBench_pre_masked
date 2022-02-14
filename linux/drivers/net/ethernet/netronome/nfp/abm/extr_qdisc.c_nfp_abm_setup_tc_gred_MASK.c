
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_gred_qopt_offload {int command; int stats; int handle; } ;
struct nfp_abm_link {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_device*,struct nfp_abm_link*,struct tc_gred_qopt_offload*) ;
 int FUNC_1 (struct nfp_abm_link*,int ,int *) ;
 int FUNC_2 (struct net_device*,struct nfp_abm_link*,int ) ;

int FUNC_3(struct net_device *VAR_1, struct nfp_abm_link *VAR_2,
     struct tc_gred_qopt_offload *VAR_3)
{
 switch (VAR_3->command) {
 case 129:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 130:
  FUNC_2(VAR_1, VAR_2, VAR_3->handle);
  return 0;
 case 128:
  return FUNC_1(VAR_2, VAR_3->handle, &VAR_3->stats);
 default:
  return -VAR_0;
 }
}
