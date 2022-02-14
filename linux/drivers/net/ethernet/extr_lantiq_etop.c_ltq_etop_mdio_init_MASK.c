
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ltq_etop_priv {TYPE_2__* mii_bus; TYPE_1__* pdev; } ;
struct TYPE_7__ {char* name; int id; int write; int read; struct net_device* priv; } ;
struct TYPE_6__ {char* name; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct ltq_etop_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_5)
{
 struct ltq_etop_priv *VAR_6 = FUNC_6(VAR_5);
 int VAR_7;

 VAR_6->mii_bus = FUNC_1();
 if (!VAR_6->mii_bus) {
  FUNC_5(VAR_5, "failed to allocate mii bus\n");
  VAR_7 = -VAR_0;
  goto err_out;
 }

 VAR_6->mii_bus->priv = VAR_5;
 VAR_6->mii_bus->read = VAR_3;
 VAR_6->mii_bus->write = VAR_4;
 VAR_6->mii_bus->name = "ltq_mii";
 FUNC_7(VAR_6->mii_bus->id, VAR_2, "%s-%x",
  VAR_6->pdev->name, VAR_6->pdev->id);
 if (FUNC_3(VAR_6->mii_bus)) {
  VAR_7 = -VAR_1;
  goto err_out_free_mdiobus;
 }

 if (FUNC_0(VAR_5)) {
  VAR_7 = -VAR_1;
  goto err_out_unregister_bus;
 }
 return 0;

err_out_unregister_bus:
 FUNC_4(VAR_6->mii_bus);
err_out_free_mdiobus:
 FUNC_2(VAR_6->mii_bus);
err_out:
 return VAR_7;
}
