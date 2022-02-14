
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct mv88e6xxx_chip {struct dsa_switch* ds; } ;
struct dsa_switch {int num_ports; TYPE_2__* ports; TYPE_1__* dst; } ;
struct TYPE_6__ {struct net_device* bridge_dev; } ;
struct TYPE_5__ {struct net_device* bridge_dev; } ;
struct TYPE_4__ {struct dsa_switch** ds; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct dsa_switch*,int) ;
 scalar_t__ FUNC_2 (struct dsa_switch*,int) ;
 TYPE_3__* FUNC_3 (struct dsa_switch*,int) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static u16 FUNC_6(struct mv88e6xxx_chip *VAR_1, int VAR_2, int VAR_3)
{
 struct dsa_switch *VAR_4 = ((void*)0);
 struct net_device *VAR_5;
 u16 VAR_6;
 int VAR_7;

 if (VAR_2 < VAR_0)
  VAR_4 = VAR_1->ds->dst->ds[VAR_2];


 if (!VAR_4 || VAR_3 >= VAR_4->num_ports)
  return 0;


 if (FUNC_1(VAR_4, VAR_3) || FUNC_2(VAR_4, VAR_3))
  return FUNC_5(VAR_1);

 VAR_5 = VAR_4->ports[VAR_3].bridge_dev;
 VAR_6 = 0;




 for (VAR_7 = 0; VAR_7 < FUNC_4(VAR_1); ++VAR_7)
  if (FUNC_1(VAR_1->ds, VAR_7) ||
      FUNC_2(VAR_1->ds, VAR_7) ||
      (VAR_5 && FUNC_3(VAR_1->ds, VAR_7)->bridge_dev == VAR_5))
   VAR_6 |= FUNC_0(VAR_7);

 return VAR_6;
}
