
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_mbus_pixelfmt {int packing; } ;


 int VAR_0 ;
int FUNC_0(const struct soc_mbus_pixelfmt *VAR_1,
   unsigned int *VAR_2, unsigned int *VAR_3)
{
 switch (VAR_1->packing) {
 case 129:
 case 131:
  *VAR_2 = 1;
  *VAR_3 = 1;
  return 0;
 case 130:
  *VAR_2 = 1;
  *VAR_3 = 1;
  return 0;
 case 133:
 case 132:
  *VAR_2 = 2;
  *VAR_3 = 1;
  return 0;
 case 134:
  *VAR_2 = 3;
  *VAR_3 = 2;
  return 0;
 case 128:
  *VAR_2 = 0;
  *VAR_3 = 1;
  return 0;
 }
 return -VAR_0;
}
