
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_thermal_priv {int id; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,char*,char*) ;
 int FUNC_1 (struct rcar_thermal_priv*) ;
 struct device* FUNC_2 (struct rcar_thermal_priv*) ;

__attribute__((used)) static u32 FUNC_3(struct rcar_thermal_priv *VAR_0, u32 VAR_1)
{
 struct device *VAR_2 = FUNC_2(VAR_0);

 VAR_1 = (VAR_1 >> FUNC_1(VAR_0)) & 0x3;

 if (VAR_1) {
  FUNC_0(VAR_2, "thermal%d %s%s\n",
   VAR_0->id,
   (VAR_1 & 0x2) ? "Rising " : "",
   (VAR_1 & 0x1) ? "Falling" : "");
 }

 return VAR_1;
}
