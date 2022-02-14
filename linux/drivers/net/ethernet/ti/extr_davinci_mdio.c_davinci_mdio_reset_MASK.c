
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mii_bus {struct davinci_mdio_data* priv; } ;
struct TYPE_4__ {int bus_freq; } ;
struct davinci_mdio_data {int access_time; int dev; TYPE_3__* bus; TYPE_2__* regs; scalar_t__ skip_scan; TYPE_1__ pdata; } ;
struct TYPE_6__ {int phy_mask; } ;
struct TYPE_5__ {int alive; int version; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct mii_bus *VAR_1)
{
 struct davinci_mdio_data *VAR_2 = VAR_1->priv;
 u32 VAR_3, VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2->dev);
 if (VAR_5 < 0) {
  FUNC_6(VAR_2->dev);
  return VAR_5;
 }


 FUNC_2(VAR_0 * VAR_2->access_time);


 VAR_4 = FUNC_7(&VAR_2->regs->version);
 FUNC_0(VAR_2->dev,
   "davinci mdio revision %d.%d, bus freq %ld\n",
   (VAR_4 >> 8) & 0xff, VAR_4 & 0xff,
   VAR_2->pdata.bus_freq);

 if (VAR_2->skip_scan)
  goto done;


 VAR_3 = FUNC_7(&VAR_2->regs->alive);
 if (VAR_3) {

  FUNC_0(VAR_2->dev, "detected phy mask %x\n", ~VAR_3);
  VAR_3 = ~VAR_3;
 } else {

  FUNC_1(VAR_2->dev, "no live phy, scanning all\n");
  VAR_3 = 0;
 }
 VAR_2->bus->phy_mask = VAR_3;

done:
 FUNC_4(VAR_2->dev);
 FUNC_5(VAR_2->dev);

 return 0;
}
