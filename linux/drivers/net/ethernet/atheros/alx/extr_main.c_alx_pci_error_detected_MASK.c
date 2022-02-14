
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct alx_priv {struct net_device* dev; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alx_priv*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct pci_dev*) ;
 struct alx_priv* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static pci_ers_result_t FUNC_8(struct pci_dev *VAR_3,
            pci_channel_state_t VAR_4)
{
 struct alx_priv *VAR_5 = FUNC_5(VAR_3);
 struct net_device *VAR_6 = VAR_5->dev;
 pci_ers_result_t VAR_7 = VAR_1;

 FUNC_1(&VAR_3->dev, "pci error detected\n");

 FUNC_6();

 if (FUNC_3(VAR_6)) {
  FUNC_2(VAR_6);
  FUNC_0(VAR_5);
 }

 if (VAR_4 == VAR_2)
  VAR_7 = VAR_0;
 else
  FUNC_4(VAR_3);

 FUNC_7();

 return VAR_7;
}
