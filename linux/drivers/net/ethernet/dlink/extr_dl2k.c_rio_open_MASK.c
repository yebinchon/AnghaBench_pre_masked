
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ expires; } ;
struct netdev_private {TYPE_2__ timer; TYPE_1__* pdev; } ;
struct net_device {int name; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netdev_private*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 struct netdev_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int const,int ,int ,int ,struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_5)
{
 struct netdev_private *VAR_6 = FUNC_4(VAR_5);
 const int VAR_7 = VAR_6->pdev->irq;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_7(VAR_5);

 VAR_8 = FUNC_6(VAR_7, VAR_3, VAR_1, VAR_5->name, VAR_5);
 if (VAR_8) {
  FUNC_8(VAR_5);
  FUNC_3(VAR_5);
  return VAR_8;
 }

 FUNC_9(&VAR_6->timer, VAR_4, 0);
 VAR_6->timer.expires = VAR_2 + 1 * VAR_0;
 FUNC_0(&VAR_6->timer);

 FUNC_5 (VAR_5);

 FUNC_2(VAR_6);
 return 0;
}
