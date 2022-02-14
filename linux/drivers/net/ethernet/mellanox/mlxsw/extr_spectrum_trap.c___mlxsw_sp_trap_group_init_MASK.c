
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlxsw_sp {int core; } ;
struct devlink_trap_group {int id; } ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int ,int,int) ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp *VAR_5,
      const struct devlink_trap_group *VAR_6)
{
 char VAR_7[VAR_1];
 u8 VAR_8, VAR_9, VAR_10;
 u16 VAR_11;

 switch (VAR_6->id) {
 case 128:
  VAR_10 = VAR_2;
  VAR_11 = VAR_3;
  VAR_8 = 0;
  VAR_9 = 1;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_7, VAR_10, VAR_11, VAR_8, VAR_9);
 return FUNC_2(VAR_5->core, FUNC_0(VAR_4), VAR_7);
}
