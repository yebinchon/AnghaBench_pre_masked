
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static u8 FUNC_0(int VAR_0, int VAR_1, u8 *VAR_2)
{
 u8 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++)
  VAR_3 += VAR_2[VAR_4];

 return VAR_3;
}
