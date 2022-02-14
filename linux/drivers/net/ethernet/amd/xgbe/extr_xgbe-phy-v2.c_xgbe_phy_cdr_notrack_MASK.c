
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int debugfs_an_cdr_workaround; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int phy_cdr_notrack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_4)
{
 struct xgbe_phy_data *VAR_5 = VAR_4->phy_data;

 if (!VAR_4->debugfs_an_cdr_workaround)
  return;

 if (VAR_5->phy_cdr_notrack)
  return;

 FUNC_0(VAR_4, VAR_0, VAR_1,
    VAR_2,
    VAR_3);

 FUNC_1(VAR_4);

 VAR_5->phy_cdr_notrack = 1;
}
