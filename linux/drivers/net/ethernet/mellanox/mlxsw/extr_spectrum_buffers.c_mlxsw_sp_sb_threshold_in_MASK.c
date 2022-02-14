
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_sb_pr {scalar_t__ mode; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct mlxsw_sp*,int) ;
 struct mlxsw_sp_sb_pr* FUNC_2 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_5, u16 VAR_6,
        u32 VAR_7, u32 *VAR_8,
        struct netlink_ext_ack *VAR_9)
{
 struct mlxsw_sp_sb_pr *VAR_10 = FUNC_2(VAR_5, VAR_6);

 if (VAR_10->mode == VAR_1) {
  int VAR_11;

  VAR_11 = VAR_7 + VAR_4;
  if (VAR_11 < VAR_3 ||
      VAR_11 > VAR_2) {
   FUNC_0(VAR_9, "Invalid dynamic threshold value");
   return -VAR_0;
  }
  *VAR_8 = VAR_11;
 } else {
  *VAR_8 = FUNC_1(VAR_5, VAR_7);
 }
 return 0;
}
