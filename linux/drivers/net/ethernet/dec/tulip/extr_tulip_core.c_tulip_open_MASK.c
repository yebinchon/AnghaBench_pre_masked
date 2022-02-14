
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tulip_private {TYPE_1__* pdev; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 struct tulip_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_2)
{
 struct tulip_private *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 FUNC_4 (VAR_2);

 VAR_4 = FUNC_2(VAR_3->pdev->irq, VAR_1, VAR_0,
        VAR_2->name, VAR_2);
 if (VAR_4)
  goto free_ring;

 FUNC_5 (VAR_2);

 FUNC_1 (VAR_2);

 return 0;

free_ring:
 FUNC_3 (VAR_2);
 return VAR_4;
}
