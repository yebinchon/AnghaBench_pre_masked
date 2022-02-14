
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_mtk_phy {int unipro_clk; int dev; int mp_clk; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct ufs_mtk_phy* FUNC_3 (struct phy*) ;
 int FUNC_4 (struct ufs_mtk_phy*) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_0)
{
 struct ufs_mtk_phy *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->unipro_clk);
 if (VAR_2) {
  FUNC_2(VAR_1->dev, "unipro_clk enable failed %d\n", VAR_2);
  goto out;
 }

 VAR_2 = FUNC_1(VAR_1->mp_clk);
 if (VAR_2) {
  FUNC_2(VAR_1->dev, "mp_clk enable failed %d\n", VAR_2);
  goto out_unprepare_unipro_clk;
 }

 FUNC_4(VAR_1);

 return 0;

out_unprepare_unipro_clk:
 FUNC_0(VAR_1->unipro_clk);
out:
 return VAR_2;
}
