
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dnet {TYPE_2__* mii_bus; int dev; TYPE_1__* pdev; } ;
struct TYPE_7__ {char* name; struct dnet* priv; int id; int * write; int * read; } ;
struct TYPE_6__ {char* name; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct dnet *VAR_5)
{
 int VAR_6;

 VAR_5->mii_bus = FUNC_1();
 if (VAR_5->mii_bus == ((void*)0))
  return -VAR_0;

 VAR_5->mii_bus->name = "dnet_mii_bus";
 VAR_5->mii_bus->read = &VAR_3;
 VAR_5->mii_bus->write = &VAR_4;

 FUNC_5(VAR_5->mii_bus->id, VAR_2, "%s-%x",
  VAR_5->pdev->name, VAR_5->pdev->id);

 VAR_5->mii_bus->priv = VAR_5;

 if (FUNC_3(VAR_5->mii_bus)) {
  VAR_6 = -VAR_1;
  goto err_out;
 }

 if (FUNC_0(VAR_5->dev) != 0) {
  VAR_6 = -VAR_1;
  goto err_out_unregister_bus;
 }

 return 0;

err_out_unregister_bus:
 FUNC_4(VAR_5->mii_bus);
err_out:
 FUNC_2(VAR_5->mii_bus);
 return VAR_6;
}
