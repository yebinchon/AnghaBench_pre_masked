
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_device {int features; } ;


 int VAR_0 ;



 int VAR_1 ;




__attribute__((used)) static int FUNC_0(struct ksz_device *VAR_2, u8 VAR_3)
{
 int VAR_4;

 if (VAR_2->features & VAR_0) {
  switch (VAR_3 & VAR_1) {
  case 131:
   VAR_4 = 0;
   break;
  case 129:
   VAR_4 = 1;
   break;
  case 133:
   VAR_4 = 2;
   break;
  default:
   VAR_4 = 3;
  }
 } else {
  switch (VAR_3 & VAR_1) {
  case 130:
   VAR_4 = 0;
   break;
  case 128:
   VAR_4 = 1;
   break;
  case 132:
   VAR_4 = 2;
   break;
  default:
   VAR_4 = 3;
  }
 }
 return VAR_4;
}
