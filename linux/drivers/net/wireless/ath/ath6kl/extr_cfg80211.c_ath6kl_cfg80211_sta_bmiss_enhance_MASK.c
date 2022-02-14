
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath6kl_vif {scalar_t__ nw_type; int fw_vif_idx; TYPE_1__* ar; } ;
struct TYPE_2__ {int wmi; int * fw_capabilities; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ath6kl_vif *VAR_4,
           bool VAR_5)
{
 int VAR_6;

 if (FUNC_0(!FUNC_4(VAR_3, &VAR_4->ar->flag)))
  return;

 if (VAR_4->nw_type != VAR_2)
  return;

 if (!FUNC_4(VAR_1,
        VAR_4->ar->fw_capabilities))
  return;

 FUNC_1(VAR_0, "%s fw bmiss enhance\n",
     VAR_5 ? "enable" : "disable");

 VAR_6 = FUNC_3(VAR_4->ar->wmi,
            VAR_4->fw_vif_idx, VAR_5);
 if (VAR_6)
  FUNC_2("failed to %s enhanced bmiss detection: %d\n",
      VAR_5 ? "enable" : "disable", VAR_6);
}
