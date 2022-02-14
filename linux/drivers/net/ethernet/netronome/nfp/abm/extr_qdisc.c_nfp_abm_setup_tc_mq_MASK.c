
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; int child_handle; } ;
struct tc_mq_qopt_offload {int command; TYPE_1__ graft_params; int handle; int stats; } ;
struct nfp_abm_link {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct net_device*,struct nfp_abm_link*,struct tc_mq_qopt_offload*) ;
 int FUNC_1 (struct nfp_abm_link*,int ,int *) ;
 int FUNC_2 (struct net_device*,struct nfp_abm_link*,int ) ;
 int FUNC_3 (struct nfp_abm_link*,int ,int ,int ) ;

int FUNC_4(struct net_device *VAR_1, struct nfp_abm_link *VAR_2,
   struct tc_mq_qopt_offload *VAR_3)
{
 switch (VAR_3->command) {
 case 131:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 130:
  FUNC_2(VAR_1, VAR_2, VAR_3->handle);
  return 0;
 case 128:
  return FUNC_1(VAR_2, VAR_3->handle, &VAR_3->stats);
 case 129:
  return FUNC_3(VAR_2, VAR_3->handle,
        VAR_3->graft_params.child_handle,
        VAR_3->graft_params.queue);
 default:
  return -VAR_0;
 }
}
