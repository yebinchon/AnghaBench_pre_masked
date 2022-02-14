
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team_port {scalar_t__ index; int hlist; } ;
struct TYPE_2__ {int (* port_enabled ) (struct team*,struct team_port*) ;} ;
struct team {TYPE_1__ ops; int en_port_count; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct team*,struct team_port*) ;
 int FUNC_2 (struct team*) ;
 int FUNC_3 (struct team_port*) ;
 int FUNC_4 (struct team*) ;
 int FUNC_5 (struct team*) ;
 scalar_t__ FUNC_6 (struct team_port*) ;
 int FUNC_7 (struct team*,scalar_t__) ;
 int FUNC_8 (struct team*,struct team_port*) ;

__attribute__((used)) static void FUNC_9(struct team *VAR_0,
        struct team_port *VAR_1)
{
 if (FUNC_6(VAR_1))
  return;
 VAR_1->index = VAR_0->en_port_count++;
 FUNC_0(&VAR_1->hlist,
      FUNC_7(VAR_0, VAR_1->index));
 FUNC_2(VAR_0);
 FUNC_8(VAR_0, VAR_1);
 if (VAR_0->ops.port_enabled)
  VAR_0->ops.port_enabled(VAR_0, VAR_1);
 FUNC_5(VAR_0);
 FUNC_4(VAR_0);
 FUNC_3(VAR_1);
}
