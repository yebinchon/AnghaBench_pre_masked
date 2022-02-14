
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_qdisc {int dummy; } ;
struct nfp_abm_link {int qdiscs; } ;


 int FUNC_0 (int ) ;
 struct nfp_qdisc* FUNC_1 (int *,int ) ;

__attribute__((used)) static struct nfp_qdisc *
FUNC_2(struct nfp_abm_link *VAR_0, u32 VAR_1)
{
 return FUNC_1(&VAR_0->qdiscs, FUNC_0(VAR_1));
}
