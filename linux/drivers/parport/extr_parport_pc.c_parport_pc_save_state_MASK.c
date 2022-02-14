
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ecr; int ctr; } ;
struct TYPE_6__ {TYPE_2__ pc; } ;
struct parport_state {TYPE_3__ u; } ;
struct parport_pc_private {scalar_t__ ecr; int ctr; } ;
struct parport {TYPE_1__* physport; } ;
struct TYPE_4__ {struct parport_pc_private* private_data; } ;


 int FUNC_0 (struct parport*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct parport *VAR_0, struct parport_state *VAR_1)
{
 const struct parport_pc_private *VAR_2 = VAR_0->physport->private_data;
 VAR_1->u.pc.ctr = VAR_2->ctr;
 if (VAR_2->ecr)
  VAR_1->u.pc.ecr = FUNC_1(FUNC_0(VAR_0));
}
