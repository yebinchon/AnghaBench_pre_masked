
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct csi_state {int hs_settle; int mrst; int clk_frequency; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1,
         struct csi_state *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->dev.of_node;

 if (FUNC_3(VAR_3, "clock-frequency",
     &VAR_2->clk_frequency))
  VAR_2->clk_frequency = VAR_0;


 VAR_2->mrst = FUNC_2(&VAR_1->dev, "mrst");
 if (FUNC_0(VAR_2->mrst))
  return FUNC_1(VAR_2->mrst);


 FUNC_3(VAR_3, "fsl,csis-hs-settle", &VAR_2->hs_settle);

 return 0;
}
