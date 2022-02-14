
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633 {int regmap; } ;


 int FUNC_0 (int ,int ,int *,int) ;

int FUNC_1(struct pcf50633 *VAR_0, u8 VAR_1,
     int VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->regmap, VAR_1, VAR_3, VAR_2);
 if (VAR_4 != 0)
  return VAR_4;

 return VAR_2;
}
