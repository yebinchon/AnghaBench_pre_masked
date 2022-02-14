
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned char ctr; int ecr; } ;
struct TYPE_5__ {TYPE_3__ pc; } ;
struct parport_state {TYPE_2__ u; } ;
struct parport_pc_private {unsigned char ctr_writable; unsigned char ctr; scalar_t__ ecr; } ;
struct parport {TYPE_1__* physport; } ;
struct TYPE_4__ {struct parport_pc_private* private_data; } ;


 int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*,int ) ;
 int FUNC_2 (unsigned char,int ) ;

__attribute__((used)) static void FUNC_3(struct parport *VAR_0,
      struct parport_state *VAR_1)
{
 struct parport_pc_private *VAR_2 = VAR_0->physport->private_data;
 register unsigned char VAR_3 = VAR_1->u.pc.ctr & VAR_2->ctr_writable;
 FUNC_2(VAR_3, FUNC_0(VAR_0));
 VAR_2->ctr = VAR_3;
 if (VAR_2->ecr)
  FUNC_1(VAR_0, VAR_1->u.pc.ecr);
}
