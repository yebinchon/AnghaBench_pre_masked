
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ FUNC_0 (scalar_t__*,int,int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;


 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--)
  if (VAR_0[VAR_2])
   break;


 if (VAR_2 < 0)
  return 0;


 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++)
  if (FUNC_0(VAR_0, VAR_1, VAR_3))
   break;


 if (VAR_3 < VAR_1)
  return VAR_3;


 if (VAR_2 < VAR_1 - 1)
  return VAR_2 + 1;


 return VAR_1;
}
