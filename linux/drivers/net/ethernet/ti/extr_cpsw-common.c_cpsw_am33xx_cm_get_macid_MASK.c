
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct regmap*) ;
 int FUNC_4 (struct regmap*,int ,int*) ;
 struct regmap* FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, u16 VAR_2, int VAR_3,
        u8 *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 struct regmap *VAR_7;

 VAR_7 = FUNC_5(VAR_1->of_node, "syscon");
 if (FUNC_2(VAR_7)) {
  if (FUNC_3(VAR_7) == -VAR_0)
   return 0;
  return FUNC_3(VAR_7);
 }

 FUNC_4(VAR_7, FUNC_1(VAR_2, VAR_3), &VAR_5);
 FUNC_4(VAR_7, FUNC_0(VAR_2, VAR_3), &VAR_6);

 VAR_4[5] = (VAR_5 >> 8) & 0xff;
 VAR_4[4] = VAR_5 & 0xff;
 VAR_4[3] = (VAR_6 >> 24) & 0xff;
 VAR_4[2] = (VAR_6 >> 16) & 0xff;
 VAR_4[1] = (VAR_6 >> 8) & 0xff;
 VAR_4[0] = VAR_6 & 0xff;

 return 0;
}
