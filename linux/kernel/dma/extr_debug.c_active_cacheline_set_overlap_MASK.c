
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(phys_addr_t VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4 > VAR_0 || VAR_4 < 0)
  return VAR_4;

 for (VAR_5 = VAR_1 - 1; VAR_5 >= 0; VAR_5--)
  if (VAR_4 & 1 << VAR_5)
   FUNC_1(&VAR_2, VAR_3, VAR_5);
  else
   FUNC_0(&VAR_2, VAR_3, VAR_5);

 return VAR_4;
}
