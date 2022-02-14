
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_4__ {TYPE_1__* csr; } ;
struct TYPE_3__ {int flag_init_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct iwl_trans*,int ,int ) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 int FUNC_5 (struct iwl_trans*,int ,int ) ;
 int FUNC_6 (struct iwl_trans*,TYPE_2__*) ;
 int FUNC_7 (struct iwl_trans*,int ,int ) ;
 int FUNC_8 (struct iwl_trans*,int ) ;
 int FUNC_9 (struct iwl_trans*) ;
 int FUNC_10 (struct iwl_trans*,int ,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct iwl_trans *VAR_15)
{
 int VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;


 FUNC_3(VAR_15, VAR_2,
     VAR_3);

 FUNC_9(VAR_15);

 VAR_16 = FUNC_6(VAR_15, VAR_15->trans_cfg);
 if (FUNC_1(VAR_16)) {

  FUNC_2(VAR_15, VAR_2,
        VAR_3);
  return;
 }





 FUNC_5(VAR_15, VAR_0,
        VAR_1);





 VAR_18 = FUNC_8(VAR_15,
          VAR_13);
 FUNC_10(VAR_15, VAR_13,
     VAR_18 |
     VAR_14);

 FUNC_9(VAR_15);


 VAR_17 = FUNC_8(VAR_15, VAR_11);
 FUNC_10(VAR_15, VAR_11, VAR_17 |
     VAR_12 |
     VAR_10);


 VAR_19 = FUNC_8(VAR_15, VAR_9);
 FUNC_10(VAR_15, VAR_9, VAR_19 &
     ~VAR_8);





 FUNC_7(VAR_15, VAR_4,
      VAR_5);





 FUNC_4(VAR_15, VAR_2,
        FUNC_0(VAR_15->trans_cfg->csr->flag_init_done));


 FUNC_3(VAR_15, VAR_6,
     VAR_7);


 FUNC_2(VAR_15, VAR_2,
       VAR_3);
 FUNC_11(10);


 FUNC_10(VAR_15, VAR_13,
     VAR_18 &
     ~VAR_14);
}
