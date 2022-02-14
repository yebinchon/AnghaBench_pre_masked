
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rc5t583 {int regmap; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rc5t583* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, unsigned VAR_3)
{
 struct rc5t583 *VAR_4 = FUNC_0(VAR_2->parent);
 u8 VAR_5;


 VAR_5 = VAR_3 ? VAR_1 : 0;

 return FUNC_1(VAR_4->regmap, VAR_0, VAR_1,
  VAR_5);
}
