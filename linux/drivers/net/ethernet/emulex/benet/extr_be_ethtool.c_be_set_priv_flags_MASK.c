
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct be_adapter {int priv_flags; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct be_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, u32 VAR_2)
{
 struct be_adapter *VAR_3 = FUNC_1(VAR_1);
 bool VAR_4 = !!(VAR_3->priv_flags & VAR_0);
 bool VAR_5 = !!(VAR_2 & VAR_0);

 if (VAR_4 != VAR_5) {
  if (VAR_5) {
   VAR_3->priv_flags |= VAR_0;
   FUNC_0(&VAR_3->pdev->dev,
     "HW error recovery is disabled\n");
  } else {
   VAR_3->priv_flags &= ~VAR_0;
   FUNC_0(&VAR_3->pdev->dev,
     "HW error recovery is enabled\n");
  }
 }

 return 0;
}
