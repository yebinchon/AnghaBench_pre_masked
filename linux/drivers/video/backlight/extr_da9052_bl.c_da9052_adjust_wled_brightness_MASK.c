
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052_bl {scalar_t__ state; size_t led_reg; char brightness; int da9052; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_2(struct da9052_bl *VAR_4)
{
 unsigned char VAR_5;
 unsigned char VAR_6;
 int VAR_7;

 VAR_5 = 0x3F;
 VAR_6 = 0xFF;
 if (VAR_4->state == VAR_2) {
  VAR_5 = 0x00;
  VAR_6 = 0x00;
 }

 VAR_7 = FUNC_0(VAR_4->da9052, VAR_0, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_4->da9052, VAR_1, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_4->da9052, VAR_3[VAR_4->led_reg], 0x0);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(10000, 11000);

 if (VAR_4->brightness) {
  VAR_7 = FUNC_0(VAR_4->da9052, VAR_3[VAR_4->led_reg],
           VAR_4->brightness);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return 0;
}
