
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct device_node* of_node; int * ops; scalar_t__ nr_resets; int owner; } ;
struct pistachio_reset_data {TYPE_1__ rcdev; int periph_regs; } ;
struct device_node {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 struct pistachio_reset_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct pistachio_reset_data *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 struct device_node *VAR_8 = VAR_5->dev.of_node;

 VAR_6 = FUNC_2(VAR_7, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->periph_regs = FUNC_4(VAR_8->parent);
 if (FUNC_0(VAR_6->periph_regs))
  return FUNC_1(VAR_6->periph_regs);

 VAR_6->rcdev.owner = VAR_3;
 VAR_6->rcdev.nr_resets = VAR_2 + 1;
 VAR_6->rcdev.ops = &VAR_4;
 VAR_6->rcdev.of_node = VAR_8;

 return FUNC_3(VAR_7, &VAR_6->rcdev);
}
