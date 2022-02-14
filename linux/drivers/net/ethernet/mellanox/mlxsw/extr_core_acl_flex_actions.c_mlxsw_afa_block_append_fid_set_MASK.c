
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_afa_block {int dummy; } ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct mlxsw_afa_block*,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;

int FUNC_5(struct mlxsw_afa_block *VAR_3, u16 VAR_4,
       struct netlink_ext_ack *VAR_5)
{
 char *VAR_6 = FUNC_3(VAR_3,
        VAR_0,
        VAR_2);
 if (FUNC_0(VAR_6)) {
  FUNC_1(VAR_5, "Cannot append fid_set action");
  return FUNC_2(VAR_6);
 }
 FUNC_4(VAR_6, VAR_1, VAR_4);
 return 0;
}
