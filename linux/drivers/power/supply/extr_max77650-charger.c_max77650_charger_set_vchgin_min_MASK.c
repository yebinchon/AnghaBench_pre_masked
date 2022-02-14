
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77650_charger_data {int map; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 unsigned int* VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct max77650_charger_data *VAR_4,
        unsigned int VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  if (VAR_5 == VAR_3[VAR_6]) {
   VAR_7 = FUNC_2(VAR_4->map,
     VAR_2,
     VAR_1,
     FUNC_1(VAR_6));
   if (VAR_7)
    return VAR_7;

   return 0;
  }
 }

 return -VAR_0;
}
