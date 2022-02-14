
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mlxsw_reg_trans {int cb_priv; TYPE_1__* reg; int (* cb ) (struct mlxsw_core*,int ,int ,int ) ;int emad_status; int active; } ;
struct mlxsw_core {int dummy; } ;
struct TYPE_2__ {int len; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct mlxsw_reg_trans*,int) ;
 int FUNC_5 (struct mlxsw_core*,struct mlxsw_reg_trans*) ;
 int FUNC_6 (struct mlxsw_core*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct mlxsw_core *VAR_1,
     struct mlxsw_reg_trans *VAR_2,
     struct sk_buff *VAR_3)
{
 int VAR_4;

 if (!FUNC_0(&VAR_2->active))
  return;

 VAR_4 = FUNC_2(VAR_3, &VAR_2->emad_status);
 if (VAR_4 == -VAR_0) {
  FUNC_5(VAR_1, VAR_2);
 } else {
  if (VAR_4 == 0) {
   char *VAR_5 = FUNC_1(VAR_3);

   if (VAR_2->cb)
    VAR_2->cb(VAR_1,
       FUNC_3(VAR_5),
       VAR_2->reg->len, VAR_2->cb_priv);
  }
  FUNC_4(VAR_2, VAR_4);
 }
}
