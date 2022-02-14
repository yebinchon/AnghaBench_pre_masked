
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pkts; } ;
struct ocelot_ace_rule {TYPE_2__* port; TYPE_1__ stats; } ;
struct TYPE_4__ {int ocelot; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocelot_ace_rule*,int) ;
 int FUNC_1 (int ,int,struct ocelot_ace_rule*) ;
 int FUNC_2 (int ,struct ocelot_ace_rule*) ;
 struct ocelot_ace_rule* FUNC_3 (int ,int) ;

int FUNC_4(struct ocelot_ace_rule *VAR_1)
{
 struct ocelot_ace_rule *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 FUNC_0(VAR_1, VAR_3);


 VAR_2 = FUNC_3(VAR_0, VAR_3);
 VAR_2->stats.pkts = 0;
 FUNC_1(VAR_1->port->ocelot, VAR_3, VAR_2);

 return 0;
}
