
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum mlxsw_reg_sfd_rec_type { ____Placeholder_mlxsw_reg_sfd_rec_type } mlxsw_reg_sfd_rec_type ;
typedef enum mlxsw_reg_sfd_rec_action { ____Placeholder_mlxsw_reg_sfd_rec_action } mlxsw_reg_sfd_rec_action ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*,int,char const*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static inline void FUNC_6(char *VAR_0, int VAR_1,
       enum mlxsw_reg_sfd_rec_type VAR_2,
       const char *VAR_3,
       enum mlxsw_reg_sfd_rec_action VAR_4)
{
 u8 VAR_5 = FUNC_0(VAR_0);

 if (VAR_1 >= VAR_5)
  FUNC_1(VAR_0, VAR_1 + 1);
 FUNC_4(VAR_0, VAR_1, 0);
 FUNC_5(VAR_0, VAR_1, VAR_2);
 FUNC_3(VAR_0, VAR_1, VAR_3);
 FUNC_2(VAR_0, VAR_1, VAR_4);
}
