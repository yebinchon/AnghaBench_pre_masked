
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct devbus_write_params {int dummy; } ;
struct devbus_read_params {int dummy; } ;
struct devbus {int tick_ps; struct device* dev; struct clk* base; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct devbus*,struct device_node*,struct devbus_read_params*,struct devbus_write_params*) ;
 int FUNC_6 (struct devbus*,struct device_node*,struct devbus_read_params*,struct devbus_write_params*) ;
 int FUNC_7 (struct devbus*,struct device_node*,struct devbus_read_params*,struct devbus_write_params*) ;
 struct clk* FUNC_8 (struct device*,int *) ;
 struct clk* FUNC_9 (struct device*,struct resource*) ;
 struct devbus* FUNC_10 (struct device*,int,int ) ;
 scalar_t__ FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (struct device_node*,int *,int *,struct device*) ;
 int FUNC_13 (struct device_node*,char*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct device_node *VAR_5 = VAR_3->dev.of_node;
 struct devbus_read_params VAR_6;
 struct devbus_write_params VAR_7;
 struct devbus *VAR_8;
 struct resource *VAR_9;
 struct clk *VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_8 = FUNC_10(&VAR_3->dev, sizeof(struct devbus), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->dev = VAR_4;
 VAR_9 = FUNC_14(VAR_3, VAR_2, 0);
 VAR_8->base = FUNC_9(&VAR_3->dev, VAR_9);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_10 = FUNC_8(&VAR_3->dev, ((void*)0));
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);
 FUNC_3(VAR_10);






 VAR_11 = FUNC_2(VAR_10) / 1000;
 VAR_8->tick_ps = 1000000000 / VAR_11;

 FUNC_4(VAR_8->dev, "Setting timing parameter, tick is %lu ps\n",
  VAR_8->tick_ps);

 if (!FUNC_13(VAR_5, "devbus,keep-config")) {

  VAR_12 = FUNC_6(VAR_8, VAR_5, &VAR_6, &VAR_7);
  if (VAR_12 < 0)
   return VAR_12;


  if (FUNC_11(VAR_5, "marvell,orion-devbus"))
   FUNC_7(VAR_8, VAR_5, &VAR_6, &VAR_7);
  else
   FUNC_5(VAR_8, VAR_5, &VAR_6, &VAR_7);
 }






 VAR_12 = FUNC_12(VAR_5, ((void*)0), ((void*)0), VAR_4);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
