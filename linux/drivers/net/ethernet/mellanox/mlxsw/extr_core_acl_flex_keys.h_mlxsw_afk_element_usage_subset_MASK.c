
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afk_element_usage {int usage; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static inline bool
FUNC_1(struct mlxsw_afk_element_usage *VAR_1,
          struct mlxsw_afk_element_usage *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_0(VAR_3, VAR_1->usage) &&
      !FUNC_0(VAR_3, VAR_2->usage))
   return 0;
 return 1;
}
