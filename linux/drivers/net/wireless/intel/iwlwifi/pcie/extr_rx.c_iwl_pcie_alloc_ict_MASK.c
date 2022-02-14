
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int ict_tbl_dma; int ict_tbl; } ;
struct iwl_trans {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int,int*,int ) ;
 int FUNC_3 (struct iwl_trans*) ;

int FUNC_4(struct iwl_trans *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_0(VAR_4);

 VAR_5->ict_tbl =
  FUNC_2(VAR_4->dev, VAR_3,
       &VAR_5->ict_tbl_dma, VAR_2);
 if (!VAR_5->ict_tbl)
  return -VAR_1;


 if (FUNC_1(VAR_5->ict_tbl_dma & (VAR_3 - 1))) {
  FUNC_3(VAR_4);
  return -VAR_0;
 }

 return 0;
}
