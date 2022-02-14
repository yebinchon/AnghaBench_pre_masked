
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_priv {int cmd_queue; } ;
struct cmd_obj {int dummy; } ;


 struct cmd_obj* FUNC_0 (int *) ;

struct cmd_obj *FUNC_1(struct cmd_priv *VAR_0)
{
 struct cmd_obj *VAR_1;

 VAR_1 = FUNC_0(&VAR_0->cmd_queue);

 return VAR_1;
}
