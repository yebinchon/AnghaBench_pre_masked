
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_mq_qopt_offload {int handle; } ;
struct nfp_qdisc {int params_ok; int offloaded; } ;
struct nfp_abm_link {int total_queues; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_abm_link*) ;
 int FUNC_1 (struct net_device*,struct nfp_abm_link*,int ,int ,int ,int ,struct nfp_qdisc**) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, struct nfp_abm_link *VAR_3,
    struct tc_mq_qopt_offload *VAR_4)
{
 struct nfp_qdisc *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_0,
        VAR_1, VAR_4->handle, VAR_3->total_queues,
        &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->params_ok = 1;
 VAR_5->offloaded = 1;
 FUNC_0(VAR_3);
 return 0;
}
