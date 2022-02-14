
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_2,
           u16 VAR_3, u8 *VAR_4)
{
 u64 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2->core,
          VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (!FUNC_1(VAR_2, VAR_3, VAR_6)) {
   *VAR_4 = VAR_6;
   return 0;
  }
 }
 return -VAR_0;
}
