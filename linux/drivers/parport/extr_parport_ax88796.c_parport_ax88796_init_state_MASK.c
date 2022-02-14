
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpr; } ;
struct TYPE_4__ {TYPE_1__ ax88796; } ;
struct parport_state {TYPE_2__ u; } ;
struct pardevice {int port; } ;
struct ax_drvdata {int spp_cpr; int dev; } ;


 int FUNC_0 (int ,char*,struct pardevice*,struct parport_state*) ;
 int FUNC_1 (struct parport_state*,int ,int) ;
 struct ax_drvdata* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct pardevice *VAR_0, struct parport_state *VAR_1)
{
 struct ax_drvdata *VAR_2 = FUNC_2(VAR_0->port);

 FUNC_1(VAR_1, 0, sizeof(struct parport_state));

 FUNC_0(VAR_2->dev, "init_state: %p: state=%p\n", VAR_0, VAR_1);
 VAR_1->u.ax88796.cpr = FUNC_3(VAR_2->spp_cpr);
}
