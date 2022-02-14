
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipq806x_gmac {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct device*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct ipq806x_gmac *VAR_4, unsigned int VAR_5)
{
 struct device *VAR_6 = &VAR_4->pdev->dev;
 int VAR_7;

 switch (VAR_5) {
 case 128:
  VAR_7 = VAR_3;
  break;

 case 129:
  VAR_7 = VAR_2;
  break;

 case 130:
  VAR_7 = VAR_1;
  break;

 default:
  FUNC_0(VAR_6, "Speed %dMbps not supported in RGMII\n", VAR_5);
  return -VAR_0;
 }

 return VAR_7;
}
