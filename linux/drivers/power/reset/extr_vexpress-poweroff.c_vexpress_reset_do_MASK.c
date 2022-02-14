
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char const*,int) ;
 struct regmap* FUNC_1 (struct device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct regmap*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, const char *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct regmap *VAR_4 = FUNC_1(VAR_1);

 if (VAR_4) {
  VAR_3 = FUNC_3(VAR_4, 0, 0);
  if (!VAR_3)
   FUNC_2(1000);
 }

 FUNC_0(VAR_1, "Unable to %s (%d)\n", VAR_2, VAR_3);
}
