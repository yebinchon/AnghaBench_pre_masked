
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_rate {int stbc; int ldpc; int sgi; int bw; } ;
struct iwl_mvm {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*,char const*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct rs_rate const*) ;

__attribute__((used)) static inline void FUNC_2(struct iwl_mvm *VAR_0, const struct rs_rate *VAR_1,
    const char *VAR_2)
{
 FUNC_0(VAR_0,
         "%s: %s BW: %d SGI: %d LDPC: %d STBC: %d\n",
         VAR_2, FUNC_1(VAR_1), VAR_1->bw,
         VAR_1->sgi, VAR_1->ldpc, VAR_1->stbc);
}
