
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_txq {int dummy; } ;
struct iwl_trans_pcie {int max_tbs; } ;
struct iwl_trans {TYPE_1__* trans_cfg; int dev; } ;
struct iwl_tfh_tfd {scalar_t__ num_tbs; } ;
struct iwl_tfd {scalar_t__ num_tbs; } ;
struct iwl_cmd_meta {int tbs; } ;
struct TYPE_2__ {scalar_t__ use_tfh; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 void* FUNC_5 (struct iwl_trans*,struct iwl_txq*,int) ;
 int FUNC_6 (struct iwl_trans*,void*) ;
 int FUNC_7 (struct iwl_trans*,void*,int) ;
 int FUNC_8 (struct iwl_trans*,void*,int) ;

__attribute__((used)) static void FUNC_9(struct iwl_trans *VAR_1,
          struct iwl_cmd_meta *VAR_2,
          struct iwl_txq *VAR_3, int VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_2(VAR_1);
 int VAR_6, VAR_7;
 void *VAR_8 = FUNC_5(VAR_1, VAR_3, VAR_4);


 VAR_7 = FUNC_6(VAR_1, VAR_8);

 if (VAR_7 > VAR_5->max_tbs) {
  FUNC_1(VAR_1, "Too many chunks: %i\n", VAR_7);

  return;
 }



 for (VAR_6 = 1; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_2->tbs & FUNC_0(VAR_6))
   FUNC_3(VAR_1->dev,
           FUNC_7(VAR_1, VAR_8, VAR_6),
           FUNC_8(VAR_1, VAR_8, VAR_6),
           VAR_0);
  else
   FUNC_4(VAR_1->dev,
      FUNC_7(VAR_1, VAR_8,
          VAR_6),
      FUNC_8(VAR_1, VAR_8,
         VAR_6),
      VAR_0);
 }

 VAR_2->tbs = 0;

 if (VAR_1->trans_cfg->use_tfh) {
  struct iwl_tfh_tfd *VAR_9 = (void *)VAR_8;

  VAR_9->num_tbs = 0;
 } else {
  struct iwl_tfd *VAR_10 = (void *)VAR_8;

  VAR_10->num_tbs = 0;
 }

}
