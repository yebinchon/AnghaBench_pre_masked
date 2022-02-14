
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int kobj; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct net_device {int irq; } ;
struct ipw2100_priv {TYPE_4__* ieee; int ioaddr; int action_mutex; int status; struct net_device* net_dev; } ;
struct TYPE_11__ {scalar_t__ version; } ;
struct TYPE_9__ {int channels; } ;
struct TYPE_8__ {int wiphy; } ;
struct TYPE_10__ {TYPE_3__ bg_band; TYPE_2__ wdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct ipw2100_priv*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ipw2100_priv*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_4 (struct ipw2100_priv*) ;
 int FUNC_5 (struct ipw2100_priv*) ;
 int FUNC_6 (struct ipw2100_priv*,TYPE_5__*) ;
 int FUNC_7 (struct ipw2100_priv*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct pci_dev*) ;
 struct ipw2100_priv* FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct pci_dev *VAR_3)
{
 struct ipw2100_priv *VAR_4 = FUNC_12(VAR_3);
 struct net_device *VAR_5 = VAR_4->net_dev;

 FUNC_9(&VAR_4->action_mutex);

 VAR_4->status &= ~VAR_0;

 FUNC_15(&VAR_3->dev.kobj, &VAR_1);






 FUNC_3(VAR_4);



 FUNC_10(&VAR_4->action_mutex);





 FUNC_16(VAR_5);

 FUNC_4(VAR_4);

 FUNC_5(VAR_4);


 FUNC_7(VAR_4);

 FUNC_1(VAR_5->irq, VAR_4);

 FUNC_13(VAR_3, VAR_4->ioaddr);


 FUNC_17(VAR_4->ieee->wdev.wiphy);
 FUNC_8(VAR_4->ieee->bg_band.channels);
 FUNC_2(VAR_5, 0);

 FUNC_14(VAR_3);
 FUNC_11(VAR_3);

 FUNC_0("exit\n");
}
