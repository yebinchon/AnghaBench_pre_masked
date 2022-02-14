
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_listener {int dummy; } ;
struct mlxsw_core {int dummy; } ;
struct devlink_trap {scalar_t__ id; } ;
typedef enum mlxsw_reg_hpkt_action { ____Placeholder_mlxsw_reg_hpkt_action } mlxsw_reg_hpkt_action ;
typedef enum devlink_trap_action { ____Placeholder_devlink_trap_action } devlink_trap_action ;


 int FUNC_0 (scalar_t__*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlxsw_core*,struct mlxsw_listener*,int) ;
 scalar_t__* VAR_3 ;
 struct mlxsw_listener* VAR_4 ;

int FUNC_2(struct mlxsw_core *VAR_5,
        const struct devlink_trap *VAR_6,
        enum devlink_trap_action VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  enum mlxsw_reg_hpkt_action VAR_9;
  struct mlxsw_listener *VAR_10;
  int VAR_11;

  if (VAR_3[VAR_8] != VAR_6->id)
   continue;
  VAR_10 = &VAR_4[VAR_8];

  switch (VAR_7) {
  case 129:
   VAR_9 = VAR_1;
   break;
  case 128:
   VAR_9 = VAR_2;
   break;
  default:
   return -VAR_0;
  }

  VAR_11 = FUNC_1(VAR_5, VAR_10,
       VAR_9);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
