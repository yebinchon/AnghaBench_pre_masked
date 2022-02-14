
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allegro_dev {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct allegro_dev *VAR_5)
{
 unsigned long VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_5->regmap, VAR_2, FUNC_0(0));
 if (VAR_8)
  return VAR_8;

 VAR_6 = VAR_4 + FUNC_2(100);
 while (FUNC_3(VAR_5->regmap, VAR_0, &VAR_7) == 0 &&
        VAR_7 == VAR_1) {
  if (FUNC_5(VAR_4, VAR_6))
   return -VAR_3;
  FUNC_1();
 }

 VAR_8 = FUNC_4(VAR_5->regmap, VAR_2, 0);
 if (VAR_8)
  return VAR_8;

 return 0;
}
