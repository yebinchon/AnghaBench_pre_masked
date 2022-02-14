
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* ac_down_graded_vals; } ;
struct mwifiex_private {TYPE_1__ wmm; int adapter; int wmm_enabled; } ;
typedef enum mwifiex_wmm_ac_e { ____Placeholder_mwifiex_wmm_ac_e } mwifiex_wmm_ac_e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (struct mwifiex_private*,int) ;

void
FUNC_2(struct mwifiex_private *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->adapter, VAR_0, "info: WMM: AC Priorities:\t"
      "BK(0), BE(1), VI(2), VO(3)\n");

 if (!VAR_3->wmm_enabled) {

  for (VAR_4 = VAR_1; VAR_4 <= VAR_2; VAR_4++)
   VAR_3->wmm.ac_down_graded_vals[VAR_4] =
      (enum mwifiex_wmm_ac_e) VAR_4;
 } else {
  for (VAR_4 = VAR_1; VAR_4 <= VAR_2; VAR_4++) {
   VAR_3->wmm.ac_down_graded_vals[VAR_4]
    = FUNC_1(VAR_3,
      (enum mwifiex_wmm_ac_e) VAR_4);
   FUNC_0(VAR_3->adapter, VAR_0,
        "info: WMM: AC PRIO %d maps to %d\n",
        VAR_4,
        VAR_3->wmm.ac_down_graded_vals[VAR_4]);
  }
 }
}
