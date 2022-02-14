
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct be_adapter {int if_flags; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_adapter*,int,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct be_adapter *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pdev->dev;
 int VAR_4;

 if (VAR_2->if_flags & VAR_0)
  return 0;

 VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_1);
 if (!VAR_4) {
  FUNC_2(VAR_3, "Enabled VLAN promiscuous mode\n");
  VAR_2->if_flags |= VAR_0;
 } else {
  FUNC_1(VAR_3, "Failed to enable VLAN promiscuous mode\n");
 }
 return VAR_4;
}
