
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_c_info {scalar_t__ probe_resp; scalar_t__ beacon; struct brcms_c_info* hw; struct brcms_c_info** bandstate; struct brcms_c_info* corestate; struct brcms_c_info* macstat_snapshot; struct brcms_c_info* stf; struct brcms_c_info* protection; struct brcms_c_info* default_bss; struct brcms_c_info* modulecb; struct brcms_c_info* pub; int bsscfg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct brcms_c_info*) ;

__attribute__((used)) static void FUNC_3(struct brcms_c_info *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_0(VAR_0->bsscfg);
 FUNC_2(VAR_0->pub);
 FUNC_2(VAR_0->modulecb);
 FUNC_2(VAR_0->default_bss);
 FUNC_2(VAR_0->protection);
 FUNC_2(VAR_0->stf);
 FUNC_2(VAR_0->bandstate[0]);
 if (VAR_0->corestate)
  FUNC_2(VAR_0->corestate->macstat_snapshot);
 FUNC_2(VAR_0->corestate);
 if (VAR_0->hw)
  FUNC_2(VAR_0->hw->bandstate[0]);
 FUNC_2(VAR_0->hw);
 if (VAR_0->beacon)
  FUNC_1(VAR_0->beacon);
 if (VAR_0->probe_resp)
  FUNC_1(VAR_0->probe_resp);

 FUNC_2(VAR_0);
}
