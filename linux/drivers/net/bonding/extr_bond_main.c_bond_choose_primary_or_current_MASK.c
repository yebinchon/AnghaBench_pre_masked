
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {scalar_t__ link; int duplex; int speed; } ;
struct TYPE_2__ {int primary_reselect; } ;
struct bonding {int force_primary; TYPE_1__ params; int dev; int curr_active_slave; int primary_slave; } ;


 scalar_t__ VAR_0 ;



 int FUNC_0 (int ,char*,int) ;
 struct slave* FUNC_1 (int ) ;

__attribute__((used)) static struct slave *FUNC_2(struct bonding *VAR_1)
{
 struct slave *VAR_2 = FUNC_1(VAR_1->primary_slave);
 struct slave *VAR_3 = FUNC_1(VAR_1->curr_active_slave);

 if (!VAR_2 || VAR_2->link != VAR_0) {
  if (!VAR_3 || VAR_3->link != VAR_0)
   return ((void*)0);
  return VAR_3;
 }

 if (VAR_1->force_primary) {
  VAR_1->force_primary = 0;
  return VAR_2;
 }

 if (!VAR_3 || VAR_3->link != VAR_0)
  return VAR_2;


 switch (VAR_1->params.primary_reselect) {
 case 130:
  return VAR_2;
 case 129:
  if (VAR_2->speed < VAR_3->speed)
   return VAR_3;
  if (VAR_2->speed == VAR_3->speed && VAR_2->duplex <= VAR_3->duplex)
   return VAR_3;
  return VAR_2;
 case 128:
  return VAR_3;
 default:
  FUNC_0(VAR_1->dev, "impossible primary_reselect %d\n",
      VAR_1->params.primary_reselect);
  return VAR_3;
 }
}
