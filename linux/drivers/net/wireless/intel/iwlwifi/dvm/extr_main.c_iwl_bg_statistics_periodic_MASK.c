
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct iwl_priv {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iwl_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*,int ,int) ;
 struct iwl_priv* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct iwl_priv *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);

 if (FUNC_3(VAR_1, &VAR_5->status))
  return;


 if (!FUNC_1(VAR_5))
  return;

 FUNC_2(VAR_5, VAR_0, 0);
}
