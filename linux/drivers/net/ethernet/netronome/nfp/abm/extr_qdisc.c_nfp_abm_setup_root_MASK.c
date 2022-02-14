
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_root_qopt_offload {int handle; scalar_t__ ingress; } ;
struct nfp_abm_link {TYPE_1__* root_qdisc; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int use_cnt; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct nfp_abm_link*,int ) ;
 int FUNC_1 (struct nfp_abm_link*) ;

int FUNC_2(struct net_device *VAR_1, struct nfp_abm_link *VAR_2,
         struct tc_root_qopt_offload *VAR_3)
{
 if (VAR_3->ingress)
  return -VAR_0;
 if (VAR_2->root_qdisc)
  VAR_2->root_qdisc->use_cnt--;
 VAR_2->root_qdisc = FUNC_0(VAR_2, VAR_3->handle);
 if (VAR_2->root_qdisc)
  VAR_2->root_qdisc->use_cnt++;

 FUNC_1(VAR_2);

 return 0;
}
