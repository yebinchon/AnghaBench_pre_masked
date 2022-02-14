
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct hi3660_priv {int eye_diagram_param; int dev; int otg_bc; int peri_crg; int pctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,char*,int) ;
 struct hi3660_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_20)
{
 struct hi3660_priv *VAR_21 = FUNC_1(VAR_20);
 u32 VAR_22, VAR_23;
 int VAR_24;


 VAR_24 = FUNC_3(VAR_21->peri_crg, VAR_4, VAR_18);
 if (VAR_24)
  goto out;


 VAR_22 = VAR_19 | (VAR_19 << VAR_3);
 VAR_24 = FUNC_3(VAR_21->pctrl, VAR_2, VAR_22);
 if (VAR_24)
  goto out;


 VAR_22 = VAR_1 | VAR_0;
 VAR_24 = FUNC_3(VAR_21->peri_crg, VAR_6, VAR_22);
 if (VAR_24)
  goto out;


 VAR_22 = VAR_8;
 VAR_23 = VAR_22;
 VAR_24 = FUNC_2(VAR_21->otg_bc, VAR_11, VAR_23, VAR_22);
 if (VAR_24)
  goto out;

 VAR_22 = VAR_7;
 VAR_23 = VAR_22;
 VAR_24 = FUNC_2(VAR_21->otg_bc, VAR_17, VAR_23, VAR_22);
 if (VAR_24)
  goto out;


 VAR_23 = VAR_9 | VAR_10;
 VAR_24 = FUNC_2(VAR_21->otg_bc, VAR_12, VAR_23, 0);
 if (VAR_24)
  goto out;


 FUNC_4(100, 120);


 VAR_22 = VAR_1 | VAR_0;
 VAR_24 = FUNC_3(VAR_21->peri_crg, VAR_5, VAR_22);
 if (VAR_24)
  goto out;


 FUNC_4(10000, 15000);


 VAR_22 = VAR_14 | VAR_15;
 VAR_23 = VAR_22;
 VAR_24 = FUNC_2(VAR_21->otg_bc, VAR_13, VAR_23, VAR_22);
 if (VAR_24)
  goto out;


 FUNC_4(100, 120);

 VAR_24 = FUNC_3(VAR_21->otg_bc, VAR_16,
   VAR_21->eye_diagram_param);
 if (VAR_24)
  goto out;

 return 0;
out:
 FUNC_0(VAR_21->dev, "failed to init phy ret: %d\n", VAR_24);
 return VAR_24;
}
