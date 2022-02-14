
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_mdm6600 {int enabled; scalar_t__ status; int running; int dev; int ack; struct gpio_desc** ctrl_gpios; TYPE_1__* mode_gpios; } ;
struct gpio_desc {int dummy; } ;
struct TYPE_2__ {struct gpio_desc** desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,int,int *,int ,int,char*,struct phy_mdm6600*) ;
 int FUNC_4 (struct gpio_desc*) ;
 int FUNC_5 (struct gpio_desc*,int) ;
 int FUNC_6 (struct gpio_desc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct phy_mdm6600*,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct phy_mdm6600 *VAR_14)
{
 struct gpio_desc *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 int VAR_19 = 0, VAR_20;

 VAR_15 = VAR_14->mode_gpios->desc[VAR_6];
 VAR_16 = VAR_14->mode_gpios->desc[VAR_7];
 VAR_17 = VAR_14->ctrl_gpios[VAR_10];
 VAR_18 = VAR_14->ctrl_gpios[VAR_9];







 FUNC_5(VAR_15, 0);
 FUNC_5(VAR_16, 0);


 FUNC_9(VAR_14, VAR_4);


 FUNC_5(VAR_17, 0);
 FUNC_8(100);


 FUNC_5(VAR_18, 1);
 FUNC_8(100);
 FUNC_5(VAR_18, 0);







 FUNC_8(VAR_8);
 VAR_14->enabled = 1;


 FUNC_1(VAR_14->dev, "Waiting for power up request to complete..\n");
 if (FUNC_10(&VAR_14->ack,
   FUNC_7(VAR_5))) {
  if (VAR_14->status > VAR_11 &&
      VAR_14->status < VAR_12)
   FUNC_1(VAR_14->dev, "Powered up OK\n");
 } else {
  VAR_14->enabled = 0;
  VAR_19 = -VAR_0;
  FUNC_0(VAR_14->dev, "Timed out powering up\n");
 }


 FUNC_4(VAR_16);

 VAR_20 = FUNC_6(VAR_16);
 if (VAR_20 <= 0)
  return VAR_20;

 VAR_19 = FUNC_3(VAR_14->dev, VAR_20, ((void*)0),
       VAR_13,
       VAR_3 |
       VAR_2 |
       VAR_1,
       "mdm6600-wake",
       VAR_14);
 if (VAR_19)
  FUNC_2(VAR_14->dev, "no modem wakeirq irq%i: %i\n",
    VAR_20, VAR_19);

 VAR_14->running = 1;

 return VAR_19;
}
