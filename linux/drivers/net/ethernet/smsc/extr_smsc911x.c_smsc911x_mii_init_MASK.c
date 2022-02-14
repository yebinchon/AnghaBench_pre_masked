
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct smsc911x_data {int idrev; TYPE_1__* mii_bus; scalar_t__ using_extphy; } ;
struct platform_device {char* name; int id; int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int phy_mask; int * parent; int write; int read; struct smsc911x_data* priv; int id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*) ;
 int FUNC_1 (struct smsc911x_data*,int ,char*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 struct smsc911x_data* FUNC_5 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct smsc911x_data*) ;
 int FUNC_7 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_8,
        struct net_device *VAR_9)
{
 struct smsc911x_data *VAR_10 = FUNC_5(VAR_9);
 int VAR_11 = -VAR_1;

 VAR_10->mii_bus = FUNC_2();
 if (!VAR_10->mii_bus) {
  VAR_11 = -VAR_0;
  goto err_out_1;
 }

 VAR_10->mii_bus->name = VAR_3;
 FUNC_7(VAR_10->mii_bus->id, VAR_2, "%s-%x",
  VAR_8->name, VAR_8->id);
 VAR_10->mii_bus->priv = VAR_10;
 VAR_10->mii_bus->read = VAR_6;
 VAR_10->mii_bus->write = VAR_7;

 VAR_10->mii_bus->parent = &VAR_8->dev;

 switch (VAR_10->idrev & 0xFFFF0000) {
 case 0x01170000:
 case 0x01150000:
 case 0x117A0000:
 case 0x115A0000:

  FUNC_6(VAR_10);
  break;
 default:
  FUNC_0(VAR_10, VAR_4, "External PHY is not supported, "
      "using internal PHY");
  VAR_10->using_extphy = 0;
  break;
 }

 if (!VAR_10->using_extphy) {

  VAR_10->mii_bus->phy_mask = ~(1 << 1);
 }

 if (FUNC_4(VAR_10->mii_bus)) {
  FUNC_1(VAR_10, VAR_5, "Error registering mii bus");
  goto err_out_free_bus_2;
 }

 return 0;

err_out_free_bus_2:
 FUNC_3(VAR_10->mii_bus);
err_out_1:
 return VAR_11;
}
