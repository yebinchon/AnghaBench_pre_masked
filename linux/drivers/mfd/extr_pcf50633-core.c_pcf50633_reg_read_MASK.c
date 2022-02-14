
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633 {int regmap; } ;


 int FUNC_0 (int ,int,unsigned int*) ;

u8 FUNC_1(struct pcf50633 *VAR_0, u8 VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->regmap, VAR_1, &VAR_2);
 if (VAR_3 < 0)
  return -1;

 return VAR_2;
}
