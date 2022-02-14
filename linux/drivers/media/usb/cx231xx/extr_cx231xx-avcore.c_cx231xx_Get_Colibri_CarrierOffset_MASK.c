
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

u32 FUNC_0(u32 VAR_8, u32 VAR_9)
{
 u32 VAR_10 = 0;

 if (VAR_8 == VAR_0) {
  VAR_10 = 1100000;
 } else if (VAR_9 & (VAR_1 | VAR_2)) {
  VAR_10 = 4832000;
 } else if (VAR_9 & (VAR_3 | VAR_5)) {
  VAR_10 = 2700000;
 } else if (VAR_9 & (VAR_4 | VAR_6
   | VAR_7)) {
  VAR_10 = 2100000;
 }

 return VAR_10;
}
