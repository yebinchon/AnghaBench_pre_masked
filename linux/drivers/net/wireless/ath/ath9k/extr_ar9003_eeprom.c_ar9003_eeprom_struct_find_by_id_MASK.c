
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9300_eeprom {int templateVersion; } ;


 int FUNC_0 (struct ar9300_eeprom const**) ;
 struct ar9300_eeprom const** VAR_0 ;

__attribute__((used)) static const struct ar9300_eeprom *FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2]->templateVersion == VAR_1)
   return VAR_0[VAR_2];
 return ((void*)0);
}
