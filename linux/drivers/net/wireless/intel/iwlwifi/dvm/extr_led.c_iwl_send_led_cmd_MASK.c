
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_priv {int trans; } ;
struct iwl_led_cmd {int dummy; } ;
struct iwl_host_cmd {int flags; int data; int len; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct iwl_priv *VAR_4, struct iwl_led_cmd *VAR_5)
{
 struct iwl_host_cmd VAR_6 = {
  .id = VAR_3,
  .len = sizeof(struct iwl_led_cmd), 
  .data = VAR_5, 
  .flags = VAR_0,
 };
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_4->trans, VAR_2);
 if (VAR_7 != (VAR_7 & VAR_1))
  FUNC_2(VAR_4->trans, VAR_2,
       VAR_7 & VAR_1);

 return FUNC_0(VAR_4, &VAR_6);
}
