
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfp_abm_link {scalar_t__ root_qdisc; int last_stats_update; } ;


 int FUNC_0 (struct nfp_abm_link*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct nfp_abm_link *VAR_0, u64 VAR_1)
{
 VAR_0->last_stats_update = VAR_1;
 if (VAR_0->root_qdisc)
  FUNC_0(VAR_0, VAR_0->root_qdisc);
}
