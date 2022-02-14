
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct port {TYPE_3__* aggregator; int actor_port_number; TYPE_2__* slave; } ;
struct TYPE_6__ {int aggregator_identifier; scalar_t__ is_active; } ;
struct TYPE_5__ {int dev; TYPE_1__* bond; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct port*) ;
 int FUNC_1 (int ,int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct port *VAR_0,
           bool *VAR_1)
{
 if (VAR_0->aggregator->is_active) {
  FUNC_1(VAR_0->slave->bond->dev, VAR_0->slave->dev,
     "Enabling port %d (LAG %d)\n",
     VAR_0->actor_port_number,
     VAR_0->aggregator->aggregator_identifier);
  FUNC_0(VAR_0);

  *VAR_1 = 1;
 }
}
