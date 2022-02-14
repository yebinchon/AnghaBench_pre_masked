
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int of_node; } ;
struct spi_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int*) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_7)
{
 u32 VAR_8 = 0;
 u8 VAR_9;

 if (FUNC_3(VAR_7->dev.of_node, "trickle-resistor-ohms",
     &VAR_8))
  goto out;


 VAR_9 = VAR_5;
 if (FUNC_2(VAR_7->dev.of_node, "trickle-diode-disable"))
  VAR_9 |= VAR_6;
 else
  VAR_9 |= VAR_4;


 switch (VAR_8) {
 case 250:
  VAR_9 |= VAR_1;
  break;
 case 2000:
  VAR_9 |= VAR_2;
  break;
 case 4000:
  VAR_9 |= VAR_3;
  break;
 default:
  FUNC_0(&VAR_7->dev,
    "Unsupported ohm value %02ux in dt\n", VAR_8);
  return;
 }

 FUNC_1(&VAR_7->dev, VAR_0, VAR_9);

out:
 return;
}
