
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt9455_info {int * regmap_fields; } ;
typedef enum rt9455_fields { ____Placeholder_rt9455_fields } rt9455_fields ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int const*,int,int) ;

__attribute__((used)) static int FUNC_2(struct rt9455_info *VAR_0,
    enum rt9455_fields VAR_1,
    const int VAR_2[], int VAR_3, int VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);

 return FUNC_0(VAR_0->regmap_fields[VAR_1], VAR_5);
}
