
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_0(struct ksz_device *VAR_10, int VAR_11, u8 *VAR_12)
{
 u8 VAR_13;

 if (VAR_10->features & VAR_0) {
  switch (VAR_11) {
  case 0:
   VAR_13 = VAR_3;
   break;
  case 1:
   VAR_13 = VAR_8;
   break;
  case 2:
   VAR_13 = VAR_1;
   break;
  default:
   VAR_13 = VAR_6;
   break;
  }
 } else {
  switch (VAR_11) {
  case 0:
   VAR_13 = VAR_5;
   break;
  case 1:
   VAR_13 = VAR_9;
   break;
  case 2:
   VAR_13 = VAR_2;
   break;
  default:
   VAR_13 = VAR_7;
   break;
  }
 }
 *VAR_12 &= ~VAR_4;
 *VAR_12 |= VAR_13;
}
