
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_port {int index; int hlist; } ;
struct TYPE_2__ {int (* port_disabled ) (struct team*,struct team_port*) ;} ;
struct team {int en_port_count; TYPE_1__ ops; } ;


 int FUNC_0 (struct team*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct team*,struct team_port*) ;
 int FUNC_3 (struct team*) ;
 int FUNC_4 (struct team_port*) ;
 int FUNC_5 (struct team_port*) ;
 int FUNC_6 (struct team*,struct team_port*) ;

__attribute__((used)) static void FUNC_7(struct team *VAR_0,
         struct team_port *VAR_1)
{
 if (!FUNC_5(VAR_1))
  return;
 if (VAR_0->ops.port_disabled)
  VAR_0->ops.port_disabled(VAR_0, VAR_1);
 FUNC_1(&VAR_1->hlist);
 FUNC_0(VAR_0, VAR_1->index);
 VAR_1->index = -1;
 VAR_0->en_port_count--;
 FUNC_6(VAR_0, VAR_1);
 FUNC_3(VAR_0);
 FUNC_4(VAR_1);
}
