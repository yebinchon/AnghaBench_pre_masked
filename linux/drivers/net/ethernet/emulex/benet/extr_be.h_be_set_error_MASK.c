
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct be_adapter {int err_flags; TYPE_1__* pdev; struct net_device* netdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_2(struct be_adapter *VAR_0, int VAR_1)
{
 struct net_device *VAR_2 = VAR_0->netdev;

 VAR_0->err_flags |= VAR_1;
 FUNC_1(VAR_2);

 FUNC_0(&VAR_0->pdev->dev, "%s: Link down\n", VAR_2->name);
}
