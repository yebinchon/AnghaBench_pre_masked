
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int str_val; } ;
struct team_gsetter_ctx {TYPE_1__ data; } ;
struct team {int dummy; } ;
struct lb_priv {int select_tx_port_func; } ;
typedef int lb_select_tx_port_func_t ;


 int VAR_0 ;
 struct lb_priv* FUNC_0 (struct team*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct team *VAR_1, struct team_gsetter_ctx *VAR_2)
{
 struct lb_priv *VAR_3 = FUNC_0(VAR_1);
 lb_select_tx_port_func_t *VAR_4;

 VAR_4 = FUNC_1(VAR_2->data.str_val);
 if (!VAR_4)
  return -VAR_0;
 FUNC_2(VAR_3->select_tx_port_func, VAR_4);
 return 0;
}
