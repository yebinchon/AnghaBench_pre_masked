
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_pcie {int sx_complete; int sx_waitq; } ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct iwl_trans*,int,int) ;
 int FUNC_3 (struct iwl_trans*,int ,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int ) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct iwl_trans *VAR_7, bool VAR_8,
         bool VAR_9)
{
 int VAR_10;
 struct iwl_trans_pcie *VAR_11 = FUNC_1(VAR_7);




 if (!VAR_9 && VAR_7->trans_cfg->device_family < VAR_4) {

  FUNC_3(VAR_7, VAR_0,
       VAR_1);
 }

 if (VAR_7->trans_cfg->device_family >= VAR_4) {
  FUNC_4(VAR_7, VAR_5,
        VAR_6);

  VAR_10 = FUNC_5(VAR_11->sx_waitq,
      VAR_11->sx_complete, 2 * VAR_3);



  VAR_11->sx_complete = 0;

  if (!VAR_10) {
   FUNC_0(VAR_7, "Timeout entering D3\n");
   return -VAR_2;
  }
 }
 FUNC_2(VAR_7, VAR_8, VAR_9);

 return 0;
}
