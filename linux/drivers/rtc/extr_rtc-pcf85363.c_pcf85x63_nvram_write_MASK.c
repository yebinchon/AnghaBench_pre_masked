
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf85363 {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2, void *VAR_3,
    size_t VAR_4)
{
 struct pcf85363 *VAR_5 = VAR_1;
 unsigned char VAR_6;

 VAR_6 = *((unsigned char *)VAR_3);
 return FUNC_0(VAR_5->regmap, VAR_0,
    (unsigned int)VAR_6);
}
