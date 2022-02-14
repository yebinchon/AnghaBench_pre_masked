
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {scalar_t__ n_nd_channels; int * nd_channels; scalar_t__ n_nd_match_sets; int * nd_match_sets; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct iwl_mvm *VAR_0)
{
 FUNC_0(VAR_0->nd_match_sets);
 VAR_0->nd_match_sets = ((void*)0);
 VAR_0->n_nd_match_sets = 0;
 FUNC_0(VAR_0->nd_channels);
 VAR_0->nd_channels = ((void*)0);
 VAR_0->n_nd_channels = 0;
}
