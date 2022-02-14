
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dwc3_omap {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;




 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (struct dwc3_omap*) ;
 int FUNC_2 (struct dwc3_omap*,int) ;
 int FUNC_3 (struct device_node*,char*,int*) ;

__attribute__((used)) static void FUNC_4(struct dwc3_omap *VAR_1)
{
 u32 VAR_2;
 struct device_node *VAR_3 = VAR_1->dev->of_node;
 u32 VAR_4 = 0;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_3(VAR_3, "utmi-mode", &VAR_4);

 switch (VAR_4) {
 case 128:
  VAR_2 |= VAR_0;
  break;
 case 129:
  VAR_2 &= ~VAR_0;
  break;
 default:
  FUNC_0(VAR_1->dev, "UNKNOWN utmi mode %d\n", VAR_4);
 }

 FUNC_2(VAR_1, VAR_2);
}
