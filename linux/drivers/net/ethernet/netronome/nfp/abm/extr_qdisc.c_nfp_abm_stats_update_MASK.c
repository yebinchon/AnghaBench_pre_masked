
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nfp_abm_link {scalar_t__ last_stats_update; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nfp_abm_link*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct nfp_abm_link *VAR_1)
{
 u64 VAR_2;





 VAR_2 = FUNC_1();
 if (VAR_2 - VAR_1->last_stats_update < VAR_0)
  return;

 FUNC_0(VAR_1, VAR_2);
}
