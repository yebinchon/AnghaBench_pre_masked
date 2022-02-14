
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(void *VAR_0, size_t VAR_1, int VAR_2)
{
 u8 *VAR_3 = VAR_0;
 u8 VAR_4 = 0;
 int VAR_5;
 int VAR_6 = VAR_2 + VAR_1;

 for (VAR_5 = VAR_1; VAR_5 < VAR_6; VAR_5++)
  VAR_4 ^= VAR_3[VAR_5];

 return VAR_4;
}
