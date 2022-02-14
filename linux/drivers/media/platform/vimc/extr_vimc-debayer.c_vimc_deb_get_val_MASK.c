
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static unsigned int FUNC_0(const u8 *VAR_0,
         const unsigned int VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  VAR_3 = VAR_3 + (VAR_0[VAR_2] << (8 * VAR_2));

 return VAR_3;
}
