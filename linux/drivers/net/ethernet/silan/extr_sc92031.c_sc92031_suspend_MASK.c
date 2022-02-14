
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc92031_priv {int lock; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct sc92031_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_0, pm_message_t VAR_1)
{
 struct net_device *VAR_2 = FUNC_6(VAR_0);
 struct sc92031_priv *VAR_3 = FUNC_2(VAR_2);

 FUNC_7(VAR_0);

 if (!FUNC_4(VAR_2))
  goto out;

 FUNC_3(VAR_2);


 FUNC_9(VAR_2);

 FUNC_10(&VAR_3->lock);

 FUNC_0(VAR_2);
 FUNC_1(VAR_2);

 FUNC_11(&VAR_3->lock);

out:
 FUNC_8(VAR_0, FUNC_5(VAR_0, VAR_1));

 return 0;
}
