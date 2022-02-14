
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7530_priv {int reg_mutex; int ds; int dev; int io_pwr; int core_pwr; } ;
struct mdio_device {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 struct mt7530_priv* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct mdio_device *VAR_0)
{
 struct mt7530_priv *VAR_1 = FUNC_1(&VAR_0->dev);
 int VAR_2 = 0;

 VAR_2 = FUNC_4(VAR_1->core_pwr);
 if (VAR_2 < 0)
  FUNC_0(VAR_1->dev,
   "Failed to disable core power: %d\n", VAR_2);

 VAR_2 = FUNC_4(VAR_1->io_pwr);
 if (VAR_2 < 0)
  FUNC_0(VAR_1->dev, "Failed to disable io pwr: %d\n",
   VAR_2);

 FUNC_2(VAR_1->ds);
 FUNC_3(&VAR_1->reg_mutex);
}
