
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_qdisc {struct nfp_qdisc* children; int handle; } ;
struct nfp_port {int tc_offload_cnt; } ;
struct nfp_abm_link {int qdiscs; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfp_qdisc*) ;
 int FUNC_3 (struct net_device*,struct nfp_abm_link*,struct nfp_qdisc*) ;
 struct nfp_port* FUNC_4 (struct net_device*) ;
 struct nfp_qdisc* FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_0, struct nfp_abm_link *VAR_1,
     struct nfp_qdisc *VAR_2)
{
 struct nfp_port *VAR_3 = FUNC_4(VAR_0);

 if (!VAR_2)
  return;
 FUNC_3(VAR_0, VAR_1, VAR_2);
 FUNC_1(FUNC_5(&VAR_1->qdiscs,
      FUNC_0(VAR_2->handle)) != VAR_2);

 FUNC_2(VAR_2->children);
 FUNC_2(VAR_2);

 VAR_3->tc_offload_cnt--;
}
