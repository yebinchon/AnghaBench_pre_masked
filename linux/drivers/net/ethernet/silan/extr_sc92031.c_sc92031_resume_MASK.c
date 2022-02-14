
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc92031_priv {int lock; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct sc92031_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_7(VAR_1);
 struct sc92031_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_8(VAR_1);
 FUNC_9(VAR_1, VAR_0);

 if (!FUNC_4(VAR_2))
  goto out;


 FUNC_11(&VAR_3->lock);

 FUNC_0(VAR_2);

 FUNC_12(&VAR_3->lock);
 FUNC_10(VAR_2);

 FUNC_3(VAR_2);

 if (FUNC_2(VAR_2))
  FUNC_6(VAR_2);
 else
  FUNC_5(VAR_2);

out:
 return 0;
}
