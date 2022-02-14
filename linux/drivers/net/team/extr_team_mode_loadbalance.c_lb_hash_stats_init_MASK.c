
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct team_option_inst_info {unsigned char array_index; } ;
struct team {int dummy; } ;
struct lb_priv {TYPE_3__* ex; } ;
struct TYPE_5__ {TYPE_1__* info; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct TYPE_4__ {struct team_option_inst_info* opt_inst_info; } ;


 struct lb_priv* FUNC_0 (struct team*) ;

__attribute__((used)) static int FUNC_1(struct team *VAR_0,
         struct team_option_inst_info *VAR_1)
{
 struct lb_priv *VAR_2 = FUNC_0(VAR_0);
 unsigned char VAR_3 = VAR_1->array_index;

 VAR_2->ex->stats.info[VAR_3].opt_inst_info = VAR_1;
 return 0;
}
