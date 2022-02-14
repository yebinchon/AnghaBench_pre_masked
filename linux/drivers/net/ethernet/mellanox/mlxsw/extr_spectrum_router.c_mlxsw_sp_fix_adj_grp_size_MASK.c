
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp*,int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_1,
         u16 *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;




 FUNC_1(VAR_2);
 VAR_4 = FUNC_2(VAR_1,
           VAR_0,
           *VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;




 FUNC_0(VAR_2, VAR_3);

 return 0;
}
