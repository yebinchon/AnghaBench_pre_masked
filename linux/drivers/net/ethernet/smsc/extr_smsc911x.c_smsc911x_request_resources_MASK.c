
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct smsc911x_data {int clk; int reset_gpiod; TYPE_1__* supplies; } ;
struct platform_device {int dev; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {char* supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 struct smsc911x_data* FUNC_7 (struct net_device*) ;
 struct net_device* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_8(VAR_2);
 struct smsc911x_data *VAR_4 = FUNC_7(VAR_3);
 int VAR_5 = 0;


 VAR_4->supplies[0].supply = "vdd33a";
 VAR_4->supplies[1].supply = "vddvario";
 VAR_5 = FUNC_9(&VAR_2->dev,
   FUNC_0(VAR_4->supplies),
   VAR_4->supplies);
 if (VAR_5) {




  if (VAR_5 == -VAR_0)
   return VAR_5;
  FUNC_6(VAR_3, "couldn't get regulators %d\n",
    VAR_5);
 }


 VAR_4->reset_gpiod = FUNC_5(&VAR_2->dev,
           "reset",
           VAR_1);


 VAR_4->clk = FUNC_3(&VAR_2->dev, ((void*)0));
 if (FUNC_1(VAR_4->clk))
  FUNC_4(&VAR_2->dev, "couldn't get clock %li\n",
   FUNC_2(VAR_4->clk));

 return VAR_5;
}
