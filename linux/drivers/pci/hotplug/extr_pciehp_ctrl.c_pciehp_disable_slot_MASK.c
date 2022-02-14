
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct controller {int state_lock; int state; TYPE_2__* pcie; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct controller*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct controller *VAR_1, bool VAR_2)
{
 int VAR_3;

 FUNC_3(&VAR_1->pcie->port->dev);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_4(&VAR_1->pcie->port->dev);

 FUNC_1(&VAR_1->state_lock);
 VAR_1->state = VAR_0;
 FUNC_2(&VAR_1->state_lock);

 return VAR_3;
}
