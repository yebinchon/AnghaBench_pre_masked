
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct ixgbe_adapter {int flags; TYPE_1__* pdev; struct net_device* netdev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ,struct ixgbe_adapter*) ;

__attribute__((used)) static int FUNC_3(struct ixgbe_adapter *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->netdev;
 int VAR_7;

 if (VAR_5->flags & VAR_1)
  VAR_7 = FUNC_1(VAR_5);
 else if (VAR_5->flags & VAR_2)
  VAR_7 = FUNC_2(VAR_5->pdev->irq, VAR_3, 0,
      VAR_6->name, VAR_5);
 else
  VAR_7 = FUNC_2(VAR_5->pdev->irq, VAR_3, VAR_0,
      VAR_6->name, VAR_5);

 if (VAR_7)
  FUNC_0(VAR_4, "request_irq failed, Error %d\n", VAR_7);

 return VAR_7;
}
