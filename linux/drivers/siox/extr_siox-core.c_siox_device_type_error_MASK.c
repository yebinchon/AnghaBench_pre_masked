
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct siox_device {int statustype; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct siox_device *VAR_1, u8 VAR_2)
{
 u8 VAR_3 = (VAR_2 & VAR_0) >> 4;






 if (VAR_1->statustype) {
  if (VAR_3 != VAR_1->statustype)
   return 1;
 } else {
  switch (VAR_3) {
  case 0:
  case 0xf:
   return 1;
  }
 }

 return 0;
}
