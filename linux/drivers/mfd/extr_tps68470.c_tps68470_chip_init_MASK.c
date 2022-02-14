
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,unsigned int) ;
 int FUNC_2 (struct regmap*,int ,unsigned int*) ;
 int FUNC_3 (struct regmap*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct regmap *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;


 VAR_6 = FUNC_3(VAR_4, VAR_0, VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_2, &VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_3, "Failed to read revision register: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_1(VAR_3, "TPS68470 REVID: 0x%x\n", VAR_5);

 return 0;
}
