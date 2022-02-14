
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int of_node; } ;
struct mdio_device {TYPE_2__ dev; } ;
struct TYPE_7__ {int * ops; TYPE_2__* dev; int regmap; } ;
struct lan9303_mdio {TYPE_1__ chip; struct mdio_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,struct lan9303_mdio*) ;
 struct lan9303_mdio* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,int *,struct lan9303_mdio*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(struct mdio_device *VAR_4)
{
 struct lan9303_mdio *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(&VAR_4->dev, sizeof(struct lan9303_mdio),
         VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->chip.regmap = FUNC_6(&VAR_4->dev, ((void*)0), VAR_5,
            &VAR_3);
 if (FUNC_0(VAR_5->chip.regmap)) {
  VAR_6 = FUNC_1(VAR_5->chip.regmap);
  FUNC_2(&VAR_4->dev, "regmap init failed: %d\n", VAR_6);
  return VAR_6;
 }


 VAR_5->device = VAR_4;
 FUNC_4(&VAR_4->dev, VAR_5);
 VAR_5->chip.dev = &VAR_4->dev;

 VAR_5->chip.ops = &VAR_2;

 VAR_6 = FUNC_7(&VAR_5->chip, VAR_4->dev.of_node);
 if (VAR_6 != 0)
  return VAR_6;

 FUNC_3(&VAR_4->dev, "LAN9303 MDIO driver loaded successfully\n");

 return 0;
}
