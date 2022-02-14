
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ksz_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ksz_device *VAR_3, bool VAR_4, u8 *VAR_5)
{
 if (VAR_3->features & VAR_0) {
  if (VAR_4)
   *VAR_5 &= ~VAR_2;
  else
   *VAR_5 |= VAR_2;
 } else {
  if (VAR_4)
   *VAR_5 |= VAR_1;
  else
   *VAR_5 &= ~VAR_1;
 }
}
