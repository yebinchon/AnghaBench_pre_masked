
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int id_rev; } ;
struct lan743x_adapter {TYPE_3__* mdiobus; TYPE_1__ csr; TYPE_2__* pdev; } ;
struct TYPE_7__ {char* name; int phy_mask; int id; int write; int read; void* priv; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 char* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct lan743x_adapter *VAR_6)
{
 int VAR_7;

 VAR_6->mdiobus = FUNC_1(&VAR_6->pdev->dev);
 if (!(VAR_6->mdiobus)) {
  VAR_7 = -VAR_0;
  goto return_error;
 }

 VAR_6->mdiobus->priv = (void *)VAR_6;
 VAR_6->mdiobus->read = VAR_4;
 VAR_6->mdiobus->write = VAR_5;
 VAR_6->mdiobus->name = "lan743x-mdiobus";
 FUNC_4(VAR_6->mdiobus->id, VAR_3,
   "pci-%s", FUNC_3(VAR_6->pdev));

 if ((VAR_6->csr.id_rev & VAR_2) == VAR_1)

  VAR_6->mdiobus->phy_mask = ~(u32)FUNC_0(1);


 VAR_7 = FUNC_2(VAR_6->mdiobus);
 if (VAR_7 < 0)
  goto return_error;
 return 0;

return_error:
 return VAR_7;
}
