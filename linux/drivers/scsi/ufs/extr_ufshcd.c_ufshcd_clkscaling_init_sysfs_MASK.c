
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* name; int mode; } ;
struct TYPE_6__ {TYPE_2__ attr; int store; int show; } ;
struct TYPE_4__ {TYPE_3__ enable_attr; } ;
struct ufs_hba {int dev; TYPE_1__ clk_scaling; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct ufs_hba *VAR_2)
{
 VAR_2->clk_scaling.enable_attr.show = VAR_0;
 VAR_2->clk_scaling.enable_attr.store = VAR_1;
 FUNC_2(&VAR_2->clk_scaling.enable_attr.attr);
 VAR_2->clk_scaling.enable_attr.attr.name = "clkscale_enable";
 VAR_2->clk_scaling.enable_attr.attr.mode = 0644;
 if (FUNC_1(VAR_2->dev, &VAR_2->clk_scaling.enable_attr))
  FUNC_0(VAR_2->dev, "Failed to create sysfs for clkscale_enable\n");
}
