
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_pcie {int max_tbs; } ;
struct iwl_trans {int dev; } ;
struct iwl_tfh_tfd {int num_tbs; TYPE_1__* tbs; } ;
struct iwl_cmd_meta {int tbs; } ;
struct TYPE_2__ {int tb_len; int addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct iwl_trans*,struct iwl_tfh_tfd*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct iwl_trans *VAR_1,
        struct iwl_cmd_meta *VAR_2,
        struct iwl_tfh_tfd *VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_2(VAR_1);
 int VAR_5, VAR_6;


 VAR_6 = FUNC_5(VAR_1, VAR_3);

 if (VAR_6 > VAR_4->max_tbs) {
  FUNC_1(VAR_1, "Too many chunks: %i\n", VAR_6);
  return;
 }


 for (VAR_5 = 1; VAR_5 < VAR_6; VAR_5++) {
  if (VAR_2->tbs & FUNC_0(VAR_5))
   FUNC_3(VAR_1->dev,
           FUNC_7(VAR_3->tbs[VAR_5].addr),
           FUNC_6(VAR_3->tbs[VAR_5].tb_len),
           VAR_0);
  else
   FUNC_4(VAR_1->dev,
      FUNC_7(VAR_3->tbs[VAR_5].addr),
      FUNC_6(VAR_3->tbs[VAR_5].tb_len),
      VAR_0);
 }

 VAR_3->num_tbs = 0;
}
