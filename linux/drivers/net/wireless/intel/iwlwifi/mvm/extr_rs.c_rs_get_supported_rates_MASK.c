
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rs_rate {int dummy; } ;
struct iwl_lq_sta {int active_mimo2_rate; int active_siso_rate; int active_legacy_rate; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rs_rate*) ;
 scalar_t__ FUNC_2 (struct rs_rate*) ;
 scalar_t__ FUNC_3 (struct rs_rate*) ;

__attribute__((used)) static u16 FUNC_4(struct iwl_lq_sta *VAR_0,
      struct rs_rate *VAR_1)
{
 if (FUNC_1(VAR_1))
  return VAR_0->active_legacy_rate;
 else if (FUNC_3(VAR_1))
  return VAR_0->active_siso_rate;
 else if (FUNC_2(VAR_1))
  return VAR_0->active_mimo2_rate;

 FUNC_0(1);
 return 0;
}
