
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_trans {TYPE_3__* trans_cfg; TYPE_1__* cfg; int status; } ;
struct TYPE_6__ {scalar_t__ device_family; TYPE_2__* csr; } ;
struct TYPE_5__ {int flag_init_done; } ;
struct TYPE_4__ {scalar_t__ lp_xtal_workaround; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct iwl_trans*,int ,int) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*,int ,int) ;
 int FUNC_8 (struct iwl_trans*,int ,int ) ;
 int FUNC_9 (struct iwl_trans*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct iwl_trans *VAR_11, bool VAR_12)
{
 FUNC_1(VAR_11, "Stop card, put in low power state\n");

 if (VAR_12) {
  if (!FUNC_11(VAR_10, &VAR_11->status))
   FUNC_4(VAR_11);


  if (VAR_11->trans_cfg->device_family == VAR_8)
   FUNC_8(VAR_11, VAR_0,
       VAR_1);
  else if (VAR_11->trans_cfg->device_family >=
    VAR_9) {
   FUNC_7(VAR_11, VAR_2,
        VAR_7);
   FUNC_7(VAR_11, VAR_4,
        VAR_6 |
        VAR_5);
   FUNC_10(1);
   FUNC_3(VAR_11, VAR_2,
          VAR_7);
  }
  FUNC_10(5);
 }

 FUNC_2(VAR_10, &VAR_11->status);


 FUNC_6(VAR_11);

 if (VAR_11->cfg->lp_xtal_workaround) {
  FUNC_5(VAR_11);
  return;
 }

 FUNC_9(VAR_11);





 FUNC_3(VAR_11, VAR_3,
        FUNC_0(VAR_11->trans_cfg->csr->flag_init_done));
}
