
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int type; int invert_polarity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,int*) ;
 struct device_node* FUNC_4 (struct device_node*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 struct device_node *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_5);
 if (!VAR_6)
  return 0;

 VAR_3.invert_polarity = FUNC_2(VAR_6, "ti,invert-polarity");

 VAR_8 = FUNC_3(VAR_6, "ti,channels", &VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_4->dev,
   "failed to read property 'ti,channels': %d\n", VAR_8);
  goto err;
 }

 switch (VAR_7) {
 case 1:
  VAR_3.type = VAR_1;
  break;
 case 2:
  VAR_3.type = VAR_2;
  break;
 default:
  FUNC_0(&VAR_4->dev, "bad channel propert '%d'\n", VAR_7);
  VAR_8 = -VAR_0;
  goto err;
 }

 FUNC_1(VAR_6);

 return 0;
err:
 FUNC_1(VAR_6);

 return 0;
}
