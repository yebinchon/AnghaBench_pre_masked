
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mt7530_priv {unsigned int id; TYPE_2__* ds; int reg_mutex; TYPE_1__* dev; int bus; void* reset; scalar_t__ mcm; void* io_pwr; void* core_pwr; void* rstc; } ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct mdio_device {TYPE_1__ dev; int bus; } ;
struct device_node {int dummy; } ;
struct TYPE_13__ {int * ops; struct mt7530_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct mt7530_priv*) ;
 void* FUNC_5 (TYPE_1__*,char*,int ) ;
 struct mt7530_priv* FUNC_6 (TYPE_1__*,int,int ) ;
 void* FUNC_7 (TYPE_1__*,char*) ;
 void* FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (struct device_node*,char*) ;

__attribute__((used)) static int
FUNC_14(struct mdio_device *VAR_6)
{
 struct mt7530_priv *VAR_7;
 struct device_node *VAR_8;

 VAR_8 = VAR_6->dev.of_node;

 VAR_7 = FUNC_6(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->ds = FUNC_10(&VAR_6->dev, VAR_0);
 if (!VAR_7->ds)
  return -VAR_1;




 VAR_7->mcm = FUNC_13(VAR_8, "mediatek,mcm");
 if (VAR_7->mcm) {
  FUNC_3(&VAR_6->dev, "MT7530 adapts as multi-chip module\n");

  VAR_7->rstc = FUNC_8(&VAR_6->dev, "mcm");
  if (FUNC_0(VAR_7->rstc)) {
   FUNC_2(&VAR_6->dev, "Couldn't get our reset line\n");
   return FUNC_1(VAR_7->rstc);
  }
 }




 VAR_7->id = (unsigned int)(unsigned long)
  FUNC_12(&VAR_6->dev);

 if (VAR_7->id == VAR_4) {
  VAR_7->core_pwr = FUNC_7(&VAR_6->dev, "core");
  if (FUNC_0(VAR_7->core_pwr))
   return FUNC_1(VAR_7->core_pwr);

  VAR_7->io_pwr = FUNC_7(&VAR_6->dev, "io");
  if (FUNC_0(VAR_7->io_pwr))
   return FUNC_1(VAR_7->io_pwr);
 }






 if (!VAR_7->mcm) {
  VAR_7->reset = FUNC_5(&VAR_6->dev, "reset",
            VAR_3);
  if (FUNC_0(VAR_7->reset)) {
   FUNC_2(&VAR_6->dev, "Couldn't get our reset line\n");
   return FUNC_1(VAR_7->reset);
  }
 }

 VAR_7->bus = VAR_6->bus;
 VAR_7->dev = &VAR_6->dev;
 VAR_7->ds->priv = VAR_7;
 VAR_7->ds->ops = &VAR_5;
 FUNC_11(&VAR_7->reg_mutex);
 FUNC_4(&VAR_6->dev, VAR_7);

 return FUNC_9(VAR_7->ds);
}
