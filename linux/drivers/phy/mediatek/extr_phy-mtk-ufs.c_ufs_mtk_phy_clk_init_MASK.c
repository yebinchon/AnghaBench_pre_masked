
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_mtk_phy {void* mp_clk; void* unipro_clk; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;

__attribute__((used)) static int FUNC_4(struct ufs_mtk_phy *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;

 VAR_0->unipro_clk = FUNC_3(VAR_1, "unipro");
 if (FUNC_0(VAR_0->unipro_clk)) {
  FUNC_2(VAR_1, "failed to get clock: unipro");
  return FUNC_1(VAR_0->unipro_clk);
 }

 VAR_0->mp_clk = FUNC_3(VAR_1, "mp");
 if (FUNC_0(VAR_0->mp_clk)) {
  FUNC_2(VAR_1, "failed to get clock: mp");
  return FUNC_1(VAR_0->mp_clk);
 }

 return 0;
}
