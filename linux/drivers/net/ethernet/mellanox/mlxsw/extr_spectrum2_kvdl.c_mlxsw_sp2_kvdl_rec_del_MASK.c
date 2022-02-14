
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp *VAR_4, u8 VAR_5,
      u16 VAR_6, u32 VAR_7)
{
 char *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(VAR_8);
 FUNC_4(VAR_8, 0, VAR_5, VAR_6, VAR_7);
 VAR_9 = FUNC_5(VAR_4->core, FUNC_0(VAR_3), VAR_8);
 FUNC_1(VAR_8);
 return VAR_9;
}
