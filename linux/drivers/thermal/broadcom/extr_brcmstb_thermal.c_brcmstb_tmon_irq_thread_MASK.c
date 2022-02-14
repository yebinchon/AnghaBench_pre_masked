
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmstb_thermal_priv {int thermal; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmstb_thermal_priv*) ;
 int FUNC_1 (struct brcmstb_thermal_priv*,int ) ;
 int FUNC_2 (struct brcmstb_thermal_priv*,int ,int ) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct brcmstb_thermal_priv *VAR_5 = VAR_4;
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 VAR_7 = FUNC_1(VAR_5, VAR_1);
 VAR_8 = FUNC_0(VAR_5);

 FUNC_3(VAR_5->dev, "low/intr/high: %d/%d/%d\n",
   VAR_6, VAR_8, VAR_7);


 if (VAR_8 >= VAR_7)
  FUNC_2(VAR_5, VAR_1, 0);

 if (VAR_8 <= VAR_6)
  FUNC_2(VAR_5, VAR_2, 0);





 FUNC_4(VAR_5->thermal, VAR_8);

 return VAR_0;
}
