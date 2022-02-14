
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans {TYPE_2__* trans_cfg; int status; } ;
struct TYPE_4__ {TYPE_1__* csr; } ;
struct TYPE_3__ {int flag_init_done; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct iwl_trans*,int ,int) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*) ;
 int FUNC_6 (struct iwl_trans*,int ,int) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct iwl_trans *VAR_7, bool VAR_8)
{
 FUNC_1(VAR_7, "Stop card, put in low power state\n");

 if (VAR_8) {
  if (!FUNC_9(VAR_6, &VAR_7->status))
   FUNC_5(VAR_7);


  FUNC_6(VAR_7, VAR_0,
       VAR_5);
  FUNC_6(VAR_7, VAR_2,
       VAR_4 |
       VAR_3);
  FUNC_8(1);
  FUNC_3(VAR_7, VAR_0,
         VAR_5);
  FUNC_8(5);
 }

 FUNC_2(VAR_6, &VAR_7->status);


 FUNC_4(VAR_7);

 FUNC_7(VAR_7);





 FUNC_3(VAR_7, VAR_1,
        FUNC_0(VAR_7->trans_cfg->csr->flag_init_done));
}
