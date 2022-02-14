
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct r8192_priv {int pdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3,
         struct net_device *VAR_4)
{
 struct r8192_priv *VAR_5 = (struct r8192_priv *)FUNC_4(VAR_4);

 u8 VAR_6;
 u16 VAR_7;

 FUNC_3(VAR_5->pdev, VAR_2, &VAR_7);

 FUNC_0(VAR_1, "Link Control Register =%x\n", VAR_7);

 FUNC_1(VAR_3, 0x98, &VAR_6);
 VAR_6 |= VAR_0;
 FUNC_2(VAR_3, 0x98, VAR_6);

 VAR_6 = 0x17;
 FUNC_2(VAR_3, 0x70f, VAR_6);
}
