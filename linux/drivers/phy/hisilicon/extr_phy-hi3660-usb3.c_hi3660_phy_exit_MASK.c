
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct hi3660_priv {int dev; int pctrl; int peri_crg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 struct hi3660_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_5)
{
 struct hi3660_priv *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7;
 int VAR_8;


 VAR_7 = VAR_0;
 VAR_8 = FUNC_2(VAR_6->peri_crg, VAR_3, VAR_7);
 if (VAR_8)
  goto out;


 VAR_7 = VAR_4 << VAR_2;
 VAR_8 = FUNC_2(VAR_6->pctrl, VAR_1, VAR_7);
 if (VAR_8)
  goto out;

 return 0;
out:
 FUNC_0(VAR_6->dev, "failed to exit phy ret: %d\n", VAR_8);
 return VAR_8;
}
