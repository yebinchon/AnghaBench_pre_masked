
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {TYPE_1__* hw; int status; } ;
struct iwl_op_mode {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 struct iwl_priv* FUNC_0 (struct iwl_op_mode*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static bool FUNC_4(struct iwl_op_mode *VAR_1, bool VAR_2)
{
 struct iwl_priv *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2)
  FUNC_2(VAR_0, &VAR_3->status);
 else
  FUNC_1(VAR_0, &VAR_3->status);

 FUNC_3(VAR_3->hw->wiphy, VAR_2);

 return 0;
}
