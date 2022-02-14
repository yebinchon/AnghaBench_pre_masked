
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp_xclk {int clk; } ;
struct isp_device {struct isp_xclk* xclks; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 unsigned int FUNC_0 (struct isp_xclk*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static void FUNC_4(struct isp_device *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev->of_node;
 unsigned int VAR_2;

 if (VAR_1)
  FUNC_3(VAR_1);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->xclks); ++VAR_2) {
  struct isp_xclk *VAR_3 = &VAR_0->xclks[VAR_2];

  if (!FUNC_1(VAR_3->clk))
   FUNC_2(VAR_3->clk);
 }
}
