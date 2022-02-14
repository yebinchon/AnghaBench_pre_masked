
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct red_stats {int pdrop; int forced_mark; } ;
struct nfp_alink_xstats {scalar_t__ pdrop; scalar_t__ ecn_marked; } ;



__attribute__((used)) static void
FUNC_0(struct nfp_alink_xstats *VAR_0,
       struct nfp_alink_xstats *VAR_1,
       struct red_stats *VAR_2)
{
 VAR_2->forced_mark += VAR_0->ecn_marked - VAR_1->ecn_marked;
 VAR_2->pdrop += VAR_0->pdrop - VAR_1->pdrop;
}
