
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {scalar_t__ irq; } ;
struct hostap_plx_priv {scalar_t__ attr_mem; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_2__ {struct hostap_plx_priv* hw_priv; } ;


 int FUNC_0 (scalar_t__,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct hostap_plx_priv*) ;
 struct hostap_interface* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1;
 struct hostap_interface *VAR_2;
 struct hostap_plx_priv *VAR_3;

 VAR_1 = FUNC_6(VAR_0);
 VAR_2 = FUNC_4(VAR_1);
 VAR_3 = VAR_2->local->hw_priv;


 FUNC_8(VAR_2->local);
 FUNC_1(VAR_1);

 if (VAR_3->attr_mem)
  FUNC_2(VAR_3->attr_mem);
 if (VAR_1->irq)
  FUNC_0(VAR_1->irq, VAR_1);

 FUNC_7(VAR_1);
 FUNC_3(VAR_3);
 FUNC_5(VAR_0);
}
