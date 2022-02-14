
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_typec {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__,void*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wcove_typec *VAR_4, void *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_4->regmap, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;



 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++) {
  VAR_7 = FUNC_1(VAR_4->regmap, VAR_3 + VAR_8, VAR_5 + VAR_8);
  if (VAR_7)
   return VAR_7;
 }

 return FUNC_2(VAR_4->regmap, VAR_1,
       VAR_2);
}
