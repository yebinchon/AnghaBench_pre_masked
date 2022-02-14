
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct netdata_local {TYPE_2__* mii_bus; int ndev; TYPE_1__* pdev; int net_base; } ;
struct TYPE_8__ {char* name; int * parent; struct netdata_local* priv; int id; int * reset; int * write; int * read; } ;
struct TYPE_7__ {char* name; int id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_9 (int ,int ,char*,char*,int) ;
 int FUNC_10 (int,int ) ;

__attribute__((used)) static int FUNC_11(struct netdata_local *VAR_10)
{
 int VAR_11 = -VAR_1;

 VAR_10->mii_bus = FUNC_4();
 if (!VAR_10->mii_bus) {
  VAR_11 = -VAR_0;
  goto err_out;
 }


 if (FUNC_3(&VAR_10->pdev->dev) == VAR_6)
  FUNC_10(VAR_2,
         FUNC_0(VAR_10->net_base));
 else {
  FUNC_10((VAR_2 | VAR_3),
         FUNC_0(VAR_10->net_base));
  FUNC_10(VAR_4, FUNC_1(VAR_10->net_base));
 }

 VAR_10->mii_bus->name = "lpc_mii_bus";
 VAR_10->mii_bus->read = &VAR_7;
 VAR_10->mii_bus->write = &VAR_9;
 VAR_10->mii_bus->reset = &VAR_8;
 FUNC_9(VAR_10->mii_bus->id, VAR_5, "%s-%x",
   VAR_10->pdev->name, VAR_10->pdev->id);
 VAR_10->mii_bus->priv = VAR_10;
 VAR_10->mii_bus->parent = &VAR_10->pdev->dev;

 FUNC_8(VAR_10->pdev, VAR_10->mii_bus);

 if (FUNC_6(VAR_10->mii_bus))
  goto err_out_unregister_bus;

 if (FUNC_2(VAR_10->ndev) != 0)
  goto err_out_unregister_bus;

 return 0;

err_out_unregister_bus:
 FUNC_7(VAR_10->mii_bus);
 FUNC_5(VAR_10->mii_bus);
err_out:
 return VAR_11;
}
