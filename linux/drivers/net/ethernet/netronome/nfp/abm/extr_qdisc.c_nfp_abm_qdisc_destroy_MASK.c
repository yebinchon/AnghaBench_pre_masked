
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_qdisc {int num_children; int use_cnt; } ;
struct nfp_abm_link {struct nfp_qdisc* root_qdisc; } ;
struct net_device {int dummy; } ;


 struct nfp_qdisc* FUNC_0 (struct nfp_abm_link*,int ) ;
 int FUNC_1 (struct net_device*,struct nfp_abm_link*,struct nfp_qdisc*) ;
 int FUNC_2 (struct nfp_abm_link*) ;
 int FUNC_3 (struct nfp_qdisc*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_0, struct nfp_abm_link *VAR_1,
        u32 VAR_2)
{
 struct nfp_qdisc *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  return;


 if (VAR_1->root_qdisc == VAR_3)
  VAR_3->use_cnt--;

 FUNC_3(VAR_3, 0, VAR_3->num_children);
 FUNC_1(VAR_0, VAR_1, VAR_3);

 if (VAR_1->root_qdisc == VAR_3) {
  VAR_1->root_qdisc = ((void*)0);



  FUNC_2(VAR_1);
 }
}
