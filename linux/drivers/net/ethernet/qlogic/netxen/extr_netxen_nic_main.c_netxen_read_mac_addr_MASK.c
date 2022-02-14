
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {int mac_addr; TYPE_1__ ahw; struct pci_dev* pdev; struct net_device* netdev; } ;
struct net_device {unsigned char* dev_addr; int addr_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int ,unsigned char*,int ) ;
 scalar_t__ FUNC_4 (struct netxen_adapter*,int *) ;
 scalar_t__ FUNC_5 (struct netxen_adapter*,int *) ;

__attribute__((used)) static int
FUNC_6(struct netxen_adapter *VAR_1)
{
 int VAR_2;
 unsigned char *VAR_3;
 u64 VAR_4;
 struct net_device *VAR_5 = VAR_1->netdev;
 struct pci_dev *VAR_6 = VAR_1->pdev;

 if (FUNC_0(VAR_1->ahw.revision_id)) {
  if (FUNC_5(VAR_1, &VAR_4) != 0)
   return -VAR_0;
 } else {
  if (FUNC_4(VAR_1, &VAR_4) != 0)
   return -VAR_0;
 }

 VAR_3 = (unsigned char *)&VAR_4;
 for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
  VAR_5->dev_addr[VAR_2] = *(VAR_3 + 5 - VAR_2);

 FUNC_3(VAR_1->mac_addr, VAR_5->dev_addr, VAR_5->addr_len);



 if (!FUNC_2(VAR_5->dev_addr))
  FUNC_1(&VAR_6->dev, "Bad MAC address %pM.\n", VAR_5->dev_addr);

 return 0;
}
