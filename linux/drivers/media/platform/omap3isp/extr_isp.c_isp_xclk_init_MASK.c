
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct clk_init_data* init; } ;
struct isp_xclk {int divider; int clk; TYPE_2__ hw; int lock; int id; struct isp_device* isp; } ;
struct isp_device {struct isp_xclk* xclks; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct clk_init_data {char* name; int num_parents; int * parent_names; int * ops; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 unsigned int FUNC_0 (struct isp_xclk*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct device_node*,int ,struct isp_device*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct isp_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev->of_node;
 struct clk_init_data VAR_8 = {};
 unsigned int VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6->xclks); ++VAR_9)
  VAR_6->xclks[VAR_9].clk = FUNC_1(-VAR_0);

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6->xclks); ++VAR_9) {
  struct isp_xclk *VAR_10 = &VAR_6->xclks[VAR_9];

  VAR_10->isp = VAR_6;
  VAR_10->id = VAR_9 == 0 ? VAR_1 : VAR_2;
  VAR_10->divider = 1;
  FUNC_6(&VAR_10->lock);

  VAR_8.name = VAR_9 == 0 ? "cam_xclka" : "cam_xclkb";
  VAR_8.ops = &VAR_3;
  VAR_8.parent_names = &VAR_4;
  VAR_8.num_parents = 1;

  VAR_10->hw.init = &VAR_8;






  VAR_10->clk = FUNC_4(((void*)0), &VAR_10->hw);
  if (FUNC_2(VAR_10->clk))
   return FUNC_3(VAR_10->clk);
 }

 if (VAR_7)
  FUNC_5(VAR_7, VAR_5, VAR_6);

 return 0;
}
