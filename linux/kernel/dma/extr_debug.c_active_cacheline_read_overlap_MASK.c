
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(phys_addr_t VAR_2)
{
 int VAR_3 = 0, VAR_4;

 for (VAR_4 = VAR_0 - 1; VAR_4 >= 0; VAR_4--)
  if (FUNC_0(&VAR_1, VAR_2, VAR_4))
   VAR_3 |= 1 << VAR_4;
 return VAR_3;
}
