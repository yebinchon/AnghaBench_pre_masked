
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pps_client_pp {int index; int pps; } ;
struct parport {TYPE_1__* ops; struct pardevice* cad; } ;
struct pardevice {struct pps_client_pp* private; int name; } ;
struct TYPE_2__ {int (* disable_irq ) (struct parport*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pps_client_pp*) ;
 int FUNC_2 (struct pardevice*) ;
 int FUNC_3 (struct pardevice*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct parport*) ;

__attribute__((used)) static void FUNC_7(struct parport *VAR_2)
{
 struct pardevice *VAR_3 = VAR_2->cad;
 struct pps_client_pp *VAR_4;


 if (!VAR_3 || FUNC_5(VAR_3->name, VAR_0))

  return;

 VAR_4 = VAR_3->private;

 VAR_2->ops->disable_irq(VAR_2);
 FUNC_4(VAR_4->pps);
 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 FUNC_0(&VAR_1, VAR_4->index);
 FUNC_1(VAR_4);
}
