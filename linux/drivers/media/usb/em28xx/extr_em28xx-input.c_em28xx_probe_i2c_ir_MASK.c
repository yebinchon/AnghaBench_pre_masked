
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {size_t def_i2c_bus; int * i2c_adap; } ;


 int VAR_0 ;

 int FUNC_0 (int *,unsigned short const) ;

__attribute__((used)) static int FUNC_1(struct em28xx *VAR_1)
{
 int VAR_2 = 0;





 static const unsigned short VAR_3[] = {
   0x1f, 0x30, 0x47, 128
 };

 while (VAR_3[VAR_2] != 128) {
  if (FUNC_0(&VAR_1->i2c_adap[VAR_1->def_i2c_bus],
           VAR_3[VAR_2]) == 1)
   return VAR_3[VAR_2];
  VAR_2++;
 }

 return -VAR_0;
}
