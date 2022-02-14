
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct team {int dummy; } ;
struct lb_priv {TYPE_2__* ex; int pcpu_stats; } ;
struct TYPE_3__ {int refresh_dw; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct lb_priv* FUNC_3 (struct team*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct team*) ;
 int VAR_0 ;
 int FUNC_6 (struct team*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct team *VAR_1)
{
 struct lb_priv *VAR_2 = FUNC_3(VAR_1);

 FUNC_6(VAR_1, VAR_0,
    FUNC_0(VAR_0));
 FUNC_5(VAR_1);
 FUNC_1(&VAR_2->ex->stats.refresh_dw);
 FUNC_2(VAR_2->pcpu_stats);
 FUNC_4(VAR_2->ex);
}
