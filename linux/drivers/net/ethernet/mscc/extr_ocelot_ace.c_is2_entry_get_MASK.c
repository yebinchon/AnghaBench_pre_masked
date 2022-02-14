
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vcap_data {int counter_offset; int counter; int tg_sw; } ;
struct TYPE_4__ {int pkts; } ;
struct ocelot_ace_rule {TYPE_1__ stats; TYPE_2__* port; } ;
struct ocelot {int dummy; } ;
struct TYPE_6__ {int counter_width; } ;
struct TYPE_5__ {struct ocelot* ocelot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vcap_data*,int) ;
 int FUNC_1 (struct ocelot*,struct vcap_data*) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_3 (struct ocelot*,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ocelot_ace_rule *VAR_4, int VAR_5)
{
 struct ocelot *VAR_6 = VAR_4->port->ocelot;
 struct vcap_data VAR_7;
 int VAR_8 = (VAR_5 / 2);
 u32 VAR_9;

 FUNC_3(VAR_6, VAR_8, VAR_0, VAR_1);
 FUNC_1(VAR_6, &VAR_7);
 VAR_7.tg_sw = VAR_2;
 FUNC_0(&VAR_7, VAR_5);
 VAR_9 = FUNC_2(VAR_7.counter, VAR_7.counter_offset,
       VAR_3);

 VAR_4->stats.pkts = VAR_9;
}
