
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fc2580_dev {int regmap; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct fc2580_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 if (VAR_2 == 0xff)
  return 0;
 else
  return FUNC_0(VAR_0->regmap, VAR_1, VAR_2);
}
