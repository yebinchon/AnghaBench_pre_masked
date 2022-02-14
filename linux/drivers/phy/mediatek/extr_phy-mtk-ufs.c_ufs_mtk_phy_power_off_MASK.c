
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_mtk_phy {int mp_clk; int unipro_clk; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct ufs_mtk_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (struct ufs_mtk_phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct ufs_mtk_phy *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1);

 FUNC_0(VAR_1->unipro_clk);
 FUNC_0(VAR_1->mp_clk);

 return 0;
}
