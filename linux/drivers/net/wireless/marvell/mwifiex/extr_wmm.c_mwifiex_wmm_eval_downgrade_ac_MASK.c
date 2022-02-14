
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_wmm_ac_status {int flow_required; int disabled; } ;
struct TYPE_2__ {struct mwifiex_wmm_ac_status* ac_status; } ;
struct mwifiex_private {TYPE_1__ wmm; } ;
typedef enum mwifiex_wmm_ac_e { ____Placeholder_mwifiex_wmm_ac_e } mwifiex_wmm_ac_e ;


 int VAR_0 ;

__attribute__((used)) static enum mwifiex_wmm_ac_e
FUNC_0(struct mwifiex_private *VAR_1,
         enum mwifiex_wmm_ac_e VAR_2)
{
 int VAR_3;
 enum mwifiex_wmm_ac_e VAR_4;
 struct mwifiex_wmm_ac_status *VAR_5;

 VAR_5 = &VAR_1->wmm.ac_status[VAR_2];

 if (!VAR_5->disabled)

  return VAR_2;


 VAR_4 = VAR_0;
 for (VAR_3 = VAR_0; VAR_3 < VAR_2; VAR_3++) {
  VAR_5 = &VAR_1->wmm.ac_status[VAR_3];

  if (!VAR_5->disabled && !VAR_5->flow_required)


   VAR_4 = (enum mwifiex_wmm_ac_e) VAR_3;
 }

 return VAR_4;
}
