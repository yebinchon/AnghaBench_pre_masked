
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct esp {int bursts; int dev; } ;
struct device_node {struct device_node* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,char*,int) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct esp *VAR_2, struct platform_device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev.of_node;
 struct platform_device *VAR_5 = FUNC_1(VAR_2->dev);
 struct device_node *VAR_6;
 u8 VAR_7, VAR_8;

 VAR_6 = VAR_5->dev.of_node;
 VAR_7 = FUNC_0(VAR_6, "burst-sizes", 0xff);
 VAR_8 = FUNC_0(VAR_4, "burst-sizes", 0xff);
 if (VAR_8 != 0xff)
  VAR_7 &= VAR_8;

 VAR_8 = FUNC_0(VAR_4->parent, "burst-sizes", 0xff);
 if (VAR_8 != 0xff)
  VAR_7 &= VAR_8;

 if (VAR_7 == 0xff ||
     (VAR_7 & VAR_0) == 0 ||
     (VAR_7 & VAR_1) == 0)
  VAR_7 = (VAR_1 - 1);

 VAR_2->bursts = VAR_7;
}
