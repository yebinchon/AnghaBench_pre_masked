
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rockchip_pcie {int legacy_phy; struct phy** phys; struct device* dev; } ;
struct phy {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 size_t VAR_3 ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,size_t,int) ;
 int FUNC_4 (struct device*,char*) ;
 struct phy* FUNC_5 (struct device*,int ,char*) ;
 struct phy* FUNC_6 (struct device*,char*) ;
 char* FUNC_7 (int ,char*,size_t) ;
 int FUNC_8 (char*) ;

int FUNC_9(struct rockchip_pcie *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 struct phy *VAR_6;
 char *VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_6(VAR_5, "pcie-phy");
 if (!FUNC_0(VAR_6)) {
  VAR_4->legacy_phy = 1;
  VAR_4->phys[0] = VAR_6;
  FUNC_4(VAR_5, "legacy phy model is deprecated!\n");
  return 0;
 }

 if (FUNC_1(VAR_6) == -VAR_1)
  return FUNC_1(VAR_6);

 FUNC_2(VAR_5, "missing legacy phy; search for per-lane PHY\n");

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_7 = FUNC_7(VAR_2, "pcie-phy-%u", VAR_8);
  if (!VAR_7)
   return -VAR_0;

  VAR_6 = FUNC_5(VAR_5, VAR_5->of_node, VAR_7);
  FUNC_8(VAR_7);

  if (FUNC_0(VAR_6)) {
   if (FUNC_1(VAR_6) != -VAR_1)
    FUNC_3(VAR_5, "missing phy for lane %d: %ld\n",
     VAR_8, FUNC_1(VAR_6));
   return FUNC_1(VAR_6);
  }

  VAR_4->phys[VAR_8] = VAR_6;
 }

 return 0;
}
