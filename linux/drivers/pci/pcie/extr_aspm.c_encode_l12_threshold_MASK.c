
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 u32 VAR_3 = VAR_0 * 1000;


 if (VAR_3 < 32) {
  *VAR_1 = 0;
  *VAR_2 = VAR_3;
 } else if (VAR_3 < 1024) {
  *VAR_1 = 1;
  *VAR_2 = VAR_3 >> 5;
 } else if (VAR_3 < 32768) {
  *VAR_1 = 2;
  *VAR_2 = VAR_3 >> 10;
 } else if (VAR_3 < 1048576) {
  *VAR_1 = 3;
  *VAR_2 = VAR_3 >> 15;
 } else if (VAR_3 < 33554432) {
  *VAR_1 = 4;
  *VAR_2 = VAR_3 >> 20;
 } else {
  *VAR_1 = 5;
  *VAR_2 = VAR_3 >> 25;
 }
}
