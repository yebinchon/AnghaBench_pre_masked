
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sky2_port {int dummy; } ;
struct sky2_hw {int flags; int ports; struct net_device** dev; int napi; TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct sky2_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sky2_port*) ;
 int FUNC_6 (struct sky2_hw*,int ) ;
 int FUNC_7 (struct sky2_hw*,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct sky2_hw *VAR_2)
{
 int VAR_3;

 if (VAR_2->flags & VAR_1) {
  FUNC_7(VAR_2, VAR_0, 0);
  FUNC_6(VAR_2, VAR_0);

  FUNC_8(VAR_2->pdev->irq);
  FUNC_0(&VAR_2->napi);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->ports; VAR_3++) {
  struct net_device *VAR_4 = VAR_2->dev[VAR_3];
  struct sky2_port *VAR_5 = FUNC_1(VAR_4);

  if (!FUNC_3(VAR_4))
   continue;

  FUNC_2(VAR_4);
  FUNC_4(VAR_4);
  FUNC_5(VAR_5);
 }
}
