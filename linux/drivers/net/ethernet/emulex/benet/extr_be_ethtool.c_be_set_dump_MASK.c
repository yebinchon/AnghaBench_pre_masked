
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_dump {int flag; } ;
struct device {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct be_adapter*,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct be_adapter*) ;
 struct be_adapter* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, struct ethtool_dump *VAR_4)
{
 struct be_adapter *VAR_5 = FUNC_6(VAR_3);
 struct device *VAR_6 = &VAR_5->pdev->dev;
 int VAR_7;

 if (!FUNC_3(VAR_5) ||
     !FUNC_0(VAR_5, VAR_2))
  return -VAR_1;

 switch (VAR_4->flag) {
 case 128:
  VAR_7 = FUNC_5(VAR_5);
  if (!VAR_7)
   FUNC_2(VAR_6, "FW dump initiated successfully\n");
  break;
 case 129:
  VAR_7 = FUNC_4(VAR_5);
  if (!VAR_7)
   FUNC_2(VAR_6, "FW dump deleted successfully\n");
 break;
 default:
  FUNC_1(VAR_6, "Invalid dump level: 0x%x\n", VAR_4->flag);
  return -VAR_0;
 }
 return VAR_7;
}
