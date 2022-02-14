
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mv88e6xxx_chip {TYPE_3__* ds; } ;
struct dsa_switch {int num_ports; TYPE_4__* ports; } ;
struct TYPE_8__ {struct net_device* bridge_dev; } ;
struct TYPE_7__ {TYPE_2__* dst; TYPE_1__* ports; } ;
struct TYPE_6__ {struct dsa_switch** ds; } ;
struct TYPE_5__ {struct net_device* bridge_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int,int) ;

__attribute__((used)) static int FUNC_4(struct mv88e6xxx_chip *VAR_1,
    struct net_device *VAR_2)
{
 struct dsa_switch *VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;


 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); ++VAR_4) {
  if (VAR_1->ds->ports[VAR_4].bridge_dev == VAR_2) {
   VAR_6 = FUNC_2(VAR_1, VAR_4);
   if (VAR_6)
    return VAR_6;
  }
 }

 if (!FUNC_0(VAR_1))
  return 0;


 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  VAR_3 = VAR_1->ds->dst->ds[VAR_5];
  if (!VAR_3)
   break;

  for (VAR_4 = 0; VAR_4 < VAR_3->num_ports; ++VAR_4) {
   if (VAR_3->ports[VAR_4].bridge_dev == VAR_2) {
    VAR_6 = FUNC_3(VAR_1, VAR_5, VAR_4);
    if (VAR_6)
     return VAR_6;
   }
  }
 }

 return 0;
}
