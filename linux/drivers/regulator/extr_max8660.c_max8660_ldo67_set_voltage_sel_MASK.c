
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8660 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct max8660*,int ,int,unsigned int) ;
 struct max8660* FUNC_1 (struct regulator_dev*) ;
 scalar_t__ FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2,
      unsigned int VAR_3)
{
 struct max8660 *VAR_4 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_2) == VAR_1)
  return FUNC_0(VAR_4, VAR_0, 0xf0, VAR_3);
 else
  return FUNC_0(VAR_4, VAR_0, 0x0f,
         VAR_3 << 4);
}
