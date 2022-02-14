
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx2_wdt_device {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static inline bool FUNC_1(struct imx2_wdt_device *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_2->regmap, VAR_0, &VAR_3);

 return VAR_3 & VAR_1;
}
