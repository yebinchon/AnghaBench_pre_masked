
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int of_node; struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct device *VAR_9;
 int VAR_10;

 if (VAR_3.parent)
  return -VAR_0;
 VAR_3.parent = &VAR_7->dev;

 VAR_9 = VAR_8->parent;
 if (!VAR_9) {
  FUNC_1(VAR_8, "no parent\n");
  return -VAR_1;
 }

 VAR_5 = FUNC_6(VAR_9->of_node);
 if (FUNC_0(VAR_5))
  return -VAR_1;

 VAR_10 = FUNC_3(&VAR_3);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_5(&VAR_2);
 if (VAR_10)
  FUNC_2(VAR_8, "failed to register restart handler\n");

 FUNC_4("AT91 Watchdog Timer enabled (%d seconds%s)\n",
  VAR_6, VAR_4 ? ", nowayout" : "");
 return 0;
}
