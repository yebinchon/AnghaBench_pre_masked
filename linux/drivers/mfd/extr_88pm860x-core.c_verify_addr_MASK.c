
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {unsigned short addr; } ;


 int FUNC_0 (unsigned short*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2)
{
 unsigned short VAR_3[] = {0x30, 0x34};
 unsigned short VAR_4[] = {0x10, 0x11};
 int VAR_5, VAR_6;

 if (VAR_2 == ((void*)0))
  return 0;
 VAR_5 = FUNC_0(VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_2->addr == *(VAR_4 + VAR_6))
   return VAR_0;
 }
 VAR_5 = FUNC_0(VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_2->addr == *(VAR_3 + VAR_6))
   return VAR_1;
 }
 return 0;
}
