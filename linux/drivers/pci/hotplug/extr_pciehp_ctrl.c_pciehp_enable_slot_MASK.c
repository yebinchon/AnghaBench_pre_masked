
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct controller {int state_lock; int state; TYPE_1__* pcie; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* port; } ;


 scalar_t__ FUNC_0 (struct controller*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct controller*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct controller*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct controller *VAR_4)
{
 int VAR_5;

 FUNC_5(&VAR_4->pcie->port->dev);
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 && FUNC_0(VAR_4))

  FUNC_4(VAR_4, VAR_3,
          VAR_0);
 FUNC_6(&VAR_4->pcie->port->dev);

 FUNC_2(&VAR_4->state_lock);
 VAR_4->state = VAR_5 ? VAR_1 : VAR_2;
 FUNC_3(&VAR_4->state_lock);

 return VAR_5;
}
