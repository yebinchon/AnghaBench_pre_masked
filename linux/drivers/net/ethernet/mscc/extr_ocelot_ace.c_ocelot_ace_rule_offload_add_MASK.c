
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ocelot_ace_rule {TYPE_1__* port; } ;
struct TYPE_7__ {int count; } ;
struct TYPE_6__ {int ocelot; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int,struct ocelot_ace_rule*) ;
 int FUNC_1 (TYPE_2__*,struct ocelot_ace_rule*) ;
 int FUNC_2 (TYPE_2__*,struct ocelot_ace_rule*) ;
 struct ocelot_ace_rule* FUNC_3 (TYPE_2__*,int) ;

int FUNC_4(struct ocelot_ace_rule *VAR_1)
{
 struct ocelot_ace_rule *VAR_2;
 int VAR_3, VAR_4;


 FUNC_1(VAR_0, VAR_1);


 VAR_4 = FUNC_2(VAR_0, VAR_1);


 for (VAR_3 = VAR_0->count - 1; VAR_3 > VAR_4; VAR_3--) {
  VAR_2 = FUNC_3(VAR_0, VAR_3);
  FUNC_0(VAR_1->port->ocelot, VAR_3, VAR_2);
 }


 FUNC_0(VAR_1->port->ocelot, VAR_4, VAR_1);
 return 0;
}
