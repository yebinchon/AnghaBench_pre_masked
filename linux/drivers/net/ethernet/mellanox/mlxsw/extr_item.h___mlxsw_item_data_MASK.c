
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_item {int dummy; } ;


 unsigned int FUNC_0 (struct mlxsw_item const*,unsigned short,int) ;

__attribute__((used)) static inline char *FUNC_1(char *VAR_0, const struct mlxsw_item *VAR_1,
          unsigned short VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1, VAR_2, sizeof(char));

 return &VAR_0[VAR_3];
}
