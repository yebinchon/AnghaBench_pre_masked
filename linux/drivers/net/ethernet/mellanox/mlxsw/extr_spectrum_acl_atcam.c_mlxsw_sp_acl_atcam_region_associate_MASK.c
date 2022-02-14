
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_3 ;

int FUNC_4(struct mlxsw_sp *VAR_4,
     u16 VAR_5)
{
 char VAR_6[VAR_2];

 u16 VAR_7 = VAR_5 * 3;
 u64 VAR_8;

 VAR_8 = FUNC_0(VAR_4->core, VAR_0);
 if (VAR_7 >= VAR_8)
  return -VAR_1;

 FUNC_2(VAR_6, VAR_5, VAR_7);
 return FUNC_3(VAR_4->core, FUNC_1(VAR_3), VAR_6);
}
