
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct team_port {TYPE_3__* dev; } ;
struct TYPE_5__ {int u32_val; } ;
struct team_gsetter_ctx {TYPE_2__ data; TYPE_1__* info; } ;
struct team {int dummy; } ;
struct lb_priv {int dummy; } ;
struct TYPE_6__ {int ifindex; } ;
struct TYPE_4__ {unsigned char array_index; } ;


 struct team_port* FUNC_0 (struct lb_priv*,unsigned char) ;
 struct lb_priv* FUNC_1 (struct team*) ;

__attribute__((used)) static int FUNC_2(struct team *VAR_0,
       struct team_gsetter_ctx *VAR_1)
{
 struct lb_priv *VAR_2 = FUNC_1(VAR_0);
 struct team_port *VAR_3;
 unsigned char VAR_4 = VAR_1->info->array_index;

 VAR_3 = FUNC_0(VAR_2, VAR_4);
 VAR_1->data.u32_val = VAR_3 ? VAR_3->dev->ifindex : 0;
 return 0;
}
