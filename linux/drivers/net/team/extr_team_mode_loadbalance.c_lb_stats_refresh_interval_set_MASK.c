
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int u32_val; } ;
struct team_gsetter_ctx {TYPE_1__ data; } ;
struct team {int dummy; } ;
struct lb_priv {TYPE_2__* ex; } ;
struct TYPE_6__ {unsigned int refresh_interval; int refresh_dw; } ;
struct TYPE_5__ {TYPE_3__ stats; } ;


 int FUNC_0 (int *) ;
 struct lb_priv* FUNC_1 (struct team*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct team *VAR_0,
      struct team_gsetter_ctx *VAR_1)
{
 struct lb_priv *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3;

 VAR_3 = VAR_1->data.u32_val;
 if (VAR_2->ex->stats.refresh_interval == VAR_3)
  return 0;
 VAR_2->ex->stats.refresh_interval = VAR_3;
 if (VAR_3)
  FUNC_2(&VAR_2->ex->stats.refresh_dw, 0);
 else
  FUNC_0(&VAR_2->ex->stats.refresh_dw);
 return 0;
}
