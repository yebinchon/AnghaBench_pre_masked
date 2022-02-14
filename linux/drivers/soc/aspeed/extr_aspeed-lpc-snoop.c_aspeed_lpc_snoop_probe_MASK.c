
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int of_node; TYPE_1__* parent; } ;
struct platform_device {struct device dev; } ;
struct aspeed_lpc_snoop {int regmap; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct aspeed_lpc_snoop*,int ) ;
 int FUNC_2 (struct aspeed_lpc_snoop*,struct device*,int,int ) ;
 int FUNC_3 (struct aspeed_lpc_snoop*,struct platform_device*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct aspeed_lpc_snoop*) ;
 struct aspeed_lpc_snoop* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (int ,char*,int,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct aspeed_lpc_snoop *VAR_4;
 struct device *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = &VAR_3->dev;

 VAR_4 = FUNC_6(VAR_5, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->regmap = FUNC_8(
   VAR_3->dev.parent->of_node);
 if (FUNC_0(VAR_4->regmap)) {
  FUNC_4(VAR_5, "Couldn't get regmap\n");
  return -VAR_0;
 }

 FUNC_5(&VAR_3->dev, VAR_4);

 VAR_7 = FUNC_7(VAR_5->of_node, "snoop-ports", 0, &VAR_6);
 if (VAR_7) {
  FUNC_4(VAR_5, "no snoop ports configured\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_5, 0, VAR_6);
 if (VAR_7)
  return VAR_7;


 if (FUNC_7(VAR_5->of_node, "snoop-ports",
           1, &VAR_6) == 0) {
  VAR_7 = FUNC_2(VAR_4, VAR_5, 1, VAR_6);
  if (VAR_7)
   FUNC_1(VAR_4, 0);
 }

 return VAR_7;
}
