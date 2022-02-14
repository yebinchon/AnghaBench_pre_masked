
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afk_element_usage {int dummy; } ;
typedef enum mlxsw_afk_element { ____Placeholder_mlxsw_afk_element } mlxsw_afk_element ;


 int FUNC_0 (struct mlxsw_afk_element_usage*,int const) ;
 int FUNC_1 (struct mlxsw_afk_element_usage*) ;

__attribute__((used)) static inline void
FUNC_2(struct mlxsw_afk_element_usage *VAR_0,
        const enum mlxsw_afk_element *VAR_1,
        unsigned int VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0, VAR_1[VAR_3]);
}
