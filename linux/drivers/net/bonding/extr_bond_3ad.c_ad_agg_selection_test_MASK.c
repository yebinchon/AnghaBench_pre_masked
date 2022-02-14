
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct aggregator {int lag_ports; TYPE_4__* slave; scalar_t__ is_individual; } ;
struct TYPE_8__ {TYPE_3__* dev; TYPE_2__* bond; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_5__ {int name; } ;





 int FUNC_0 (struct aggregator*) ;
 scalar_t__ FUNC_1 (struct aggregator*) ;
 int FUNC_2 (struct aggregator*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ,int) ;

__attribute__((used)) static struct aggregator *FUNC_5(struct aggregator *VAR_0,
      struct aggregator *VAR_1)
{
 if (!VAR_0)
  return VAR_1;

 if (!VAR_1->is_individual && VAR_0->is_individual)
  return VAR_1;

 if (VAR_1->is_individual && !VAR_0->is_individual)
  return VAR_0;

 if (FUNC_1(VAR_1) && !FUNC_1(VAR_0))
  return VAR_1;

 if (!FUNC_1(VAR_1) && FUNC_1(VAR_0))
  return VAR_0;

 switch (FUNC_3(VAR_1->lag_ports)) {
 case 129:
  if (FUNC_0(VAR_1) > FUNC_0(VAR_0))
   return VAR_1;

  if (FUNC_0(VAR_1) < FUNC_0(VAR_0))
   return VAR_0;


 case 128:
 case 130:
  if (FUNC_2(VAR_1) > FUNC_2(VAR_0))
   return VAR_1;

  break;

 default:
  FUNC_4("%s: (slave %s): Impossible agg select mode %d\n",
         VAR_1->slave->bond->dev->name,
         VAR_1->slave->dev->name,
         FUNC_3(VAR_1->lag_ports));
  break;
 }

 return VAR_0;
}
