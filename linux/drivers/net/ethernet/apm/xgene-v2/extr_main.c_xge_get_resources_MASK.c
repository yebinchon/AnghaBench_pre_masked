
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_mode; int irq; int base_addr; } ;
struct xge_pdata {TYPE_1__ resources; struct net_device* ndev; struct platform_device* pdev; } ;
struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct net_device {int addr_len; int dev_addr; int perm_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int ,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int FUNC_9(struct xge_pdata *VAR_5)
{
 struct platform_device *VAR_6;
 struct net_device *VAR_7;
 int VAR_8, VAR_9 = 0;
 struct resource *VAR_10;
 struct device *VAR_11;

 VAR_6 = VAR_5->pdev;
 VAR_11 = &VAR_6->dev;
 VAR_7 = VAR_5->ndev;

 VAR_10 = FUNC_7(VAR_6, VAR_3, 0);
 if (!VAR_10) {
  FUNC_0(VAR_11, "Resource enet_csr not defined\n");
  return -VAR_0;
 }

 VAR_5->resources.base_addr = FUNC_3(VAR_11, VAR_10->start,
        FUNC_8(VAR_10));
 if (!VAR_5->resources.base_addr) {
  FUNC_0(VAR_11, "Unable to retrieve ENET Port CSR region\n");
  return -VAR_1;
 }

 if (!FUNC_1(VAR_11, VAR_7->dev_addr, VAR_2))
  FUNC_4(VAR_7);

 FUNC_5(VAR_7->perm_addr, VAR_7->dev_addr, VAR_7->addr_len);

 VAR_8 = FUNC_2(VAR_11);
 if (VAR_8 < 0) {
  FUNC_0(VAR_11, "Unable to get phy-connection-type\n");
  return VAR_8;
 }
 VAR_5->resources.phy_mode = VAR_8;

 if (VAR_5->resources.phy_mode != VAR_4) {
  FUNC_0(VAR_11, "Incorrect phy-connection-type specified\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_6(VAR_6, 0);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_5->resources.irq = VAR_9;

 return 0;
}
