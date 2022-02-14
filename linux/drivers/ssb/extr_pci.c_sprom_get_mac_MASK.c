
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static void FUNC_0(char *VAR_0, const u16 *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  *VAR_0++ = VAR_1[VAR_2] >> 8;
  *VAR_0++ = VAR_1[VAR_2];
 }
}
