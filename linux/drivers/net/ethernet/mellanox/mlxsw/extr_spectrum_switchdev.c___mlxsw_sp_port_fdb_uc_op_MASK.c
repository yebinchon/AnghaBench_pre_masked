
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_sfd_rec_policy { ____Placeholder_mlxsw_reg_sfd_rec_policy } mlxsw_reg_sfd_rec_policy ;
typedef enum mlxsw_reg_sfd_rec_action { ____Placeholder_mlxsw_reg_sfd_rec_action } mlxsw_reg_sfd_rec_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int ,int,char const*,int ,int,scalar_t__) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp *VAR_5, u8 VAR_6,
         const char *VAR_7, u16 VAR_8, bool VAR_9,
         enum mlxsw_reg_sfd_rec_action VAR_10,
         enum mlxsw_reg_sfd_rec_policy VAR_11)
{
 char *VAR_12;
 u8 VAR_13;
 int VAR_14;

 VAR_12 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_4(VAR_12, FUNC_7(VAR_9), 0);
 FUNC_5(VAR_12, 0, VAR_11, VAR_7, VAR_8, VAR_10, VAR_6);
 VAR_13 = FUNC_3(VAR_12);
 VAR_14 = FUNC_6(VAR_5->core, FUNC_0(VAR_4), VAR_12);
 if (VAR_14)
  goto out;

 if (VAR_13 != FUNC_3(VAR_12))
  VAR_14 = -VAR_0;

out:
 FUNC_1(VAR_12);
 return VAR_14;
}
