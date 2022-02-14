
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dsr; } ;
struct parport_ip32_private {TYPE_2__ regs; } ;
struct parport {TYPE_1__* physport; } ;
struct TYPE_3__ {struct parport_ip32_private* private_data; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*,char*,char*) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct parport *VAR_1)
{
 struct parport_ip32_private * const VAR_2 = VAR_1->physport->private_data;
 unsigned int VAR_3;

 if (!(FUNC_0(VAR_1) & VAR_0))
  VAR_3 = 1;
 else {
  unsigned int VAR_4;

  FUNC_0(VAR_1);
  VAR_4 = FUNC_0(VAR_1);

  FUNC_2(VAR_4 | VAR_0, VAR_2->regs.dsr);

  FUNC_2(VAR_4 & ~VAR_0, VAR_2->regs.dsr);

  VAR_4 = FUNC_0(VAR_1);
  VAR_3 = !(VAR_4 & VAR_0);
 }

 FUNC_1(VAR_1, "(): %s", VAR_3 ? "cleared" : "failed");
 return VAR_3;
}
