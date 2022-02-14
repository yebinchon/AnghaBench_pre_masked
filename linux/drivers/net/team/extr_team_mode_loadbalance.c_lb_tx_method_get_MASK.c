
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* str_val; } ;
struct team_gsetter_ctx {TYPE_1__ data; } ;
struct team {int lock; } ;
struct lb_priv {int select_tx_port_func; } ;
typedef int lb_select_tx_port_func_t ;


 int FUNC_0 (int) ;
 struct lb_priv* FUNC_1 (struct team*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct team *VAR_0, struct team_gsetter_ctx *VAR_1)
{
 struct lb_priv *VAR_2 = FUNC_1(VAR_0);
 lb_select_tx_port_func_t *VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_4(VAR_2->select_tx_port_func,
      FUNC_3(&VAR_0->lock));
 VAR_4 = FUNC_2(VAR_3);
 FUNC_0(!VAR_4);
 VAR_1->data.str_val = VAR_4;
 return 0;
}
