
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allegro_dev {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,unsigned int*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct allegro_dev *VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6;

 VAR_5 = VAR_3 + FUNC_1(100);
 while (FUNC_2(VAR_4->regmap, VAR_0, &VAR_6) == 0 &&
        VAR_6 != VAR_1) {
  if (FUNC_3(VAR_3, VAR_5))
   return -VAR_2;
  FUNC_0();
 }

 return 0;
}
