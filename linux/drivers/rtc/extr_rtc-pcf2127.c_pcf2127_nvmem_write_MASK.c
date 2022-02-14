
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf2127 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,void*,size_t) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, unsigned int VAR_3,
          void *VAR_4, size_t VAR_5)
{
 struct pcf2127 *VAR_6 = VAR_2;
 int VAR_7;
 unsigned char VAR_8[] = { VAR_3 >> 8, VAR_3 };

 VAR_7 = FUNC_0(VAR_6->regmap, VAR_0,
    VAR_8, 2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6->regmap, VAR_1,
    VAR_4, VAR_5);

 return VAR_7 ?: VAR_5;
}
