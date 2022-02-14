
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pci_epc_ops {int dummy; } ;
struct TYPE_5__ {struct device* parent; int class; } ;
struct pci_epc {TYPE_1__ dev; int group; struct pci_epc_ops const* ops; int pci_epf; int lock; } ;
struct module {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_epc* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct pci_epc*) ;
 struct pci_epc* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;

struct pci_epc *
FUNC_12(struct device *VAR_4, const struct pci_epc_ops *VAR_5,
   struct module *VAR_6)
{
 int VAR_7;
 struct pci_epc *VAR_8;

 if (FUNC_2(!VAR_4)) {
  VAR_7 = -VAR_0;
  goto err_ret;
 }

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_7 = -VAR_1;
  goto err_ret;
 }

 FUNC_11(&VAR_8->lock);
 FUNC_1(&VAR_8->pci_epf);

 FUNC_6(&VAR_8->dev);
 VAR_8->dev.class = VAR_3;
 VAR_8->dev.parent = VAR_4;
 VAR_8->ops = VAR_5;

 VAR_7 = FUNC_4(&VAR_8->dev, "%s", FUNC_3(VAR_4));
 if (VAR_7)
  goto put_dev;

 VAR_7 = FUNC_5(&VAR_8->dev);
 if (VAR_7)
  goto put_dev;

 VAR_8->group = FUNC_9(FUNC_3(VAR_4));

 return VAR_8;

put_dev:
 FUNC_10(&VAR_8->dev);
 FUNC_7(VAR_8);

err_ret:
 return FUNC_0(VAR_7);
}
