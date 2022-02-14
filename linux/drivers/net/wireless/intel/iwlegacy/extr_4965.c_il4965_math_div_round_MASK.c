
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;



__attribute__((used)) static s32
FUNC_0(s32 VAR_0, s32 VAR_1, s32 * VAR_2)
{
 s32 VAR_3 = 1;

 if (VAR_0 < 0) {
  VAR_3 = -VAR_3;
  VAR_0 = -VAR_0;
 }
 if (VAR_1 < 0) {
  VAR_3 = -VAR_3;
  VAR_1 = -VAR_1;
 }
 *VAR_2 = ((VAR_0 * 2 + VAR_1) / (VAR_1 * 2)) * VAR_3;

 return 1;
}
