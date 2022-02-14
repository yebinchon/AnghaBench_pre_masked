
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int*,int*,int *,int *) ;
 int FUNC_3 (struct mlxsw_sp*,int,int,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sp *VAR_0,
       char *VAR_1, bool VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = FUNC_1(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  u8 VAR_6;
  u8 VAR_7;
  u16 VAR_8;
  u64 VAR_9;

  FUNC_2(VAR_1, VAR_5, &VAR_7,
     &VAR_6, &VAR_8,
     &VAR_9);
  FUNC_3(VAR_0, VAR_2, VAR_3,
         VAR_7, VAR_6,
         VAR_8, VAR_9);
 }
}
