
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* name; int mode; } ;
struct TYPE_8__ {TYPE_3__ attr; int store; int show; } ;
struct TYPE_6__ {int delay_ms; int is_enabled; TYPE_4__ enable_attr; TYPE_4__ delay_attr; int clk_gating_workq; int ungate_work; int gate_work; } ;
struct ufs_hba {int dev; TYPE_2__ clk_gating; TYPE_1__* host; } ;
struct TYPE_5__ {int host_no; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,TYPE_4__*) ;
 int FUNC_6 (char*,int ,char*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct ufs_hba*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_9(struct ufs_hba *VAR_7)
{
 char VAR_8[sizeof("ufs_clk_gating_00")];

 if (!FUNC_8(VAR_7))
  return;

 VAR_7->clk_gating.delay_ms = 150;
 FUNC_1(&VAR_7->clk_gating.gate_work, VAR_5);
 FUNC_2(&VAR_7->clk_gating.ungate_work, VAR_6);

 FUNC_6(VAR_8, FUNC_0(VAR_8), "ufs_clk_gating_%d",
   VAR_7->host->host_no);
 VAR_7->clk_gating.clk_gating_workq = FUNC_3(VAR_8,
          VAR_0);

 VAR_7->clk_gating.is_enabled = 1;

 VAR_7->clk_gating.delay_attr.show = VAR_1;
 VAR_7->clk_gating.delay_attr.store = VAR_2;
 FUNC_7(&VAR_7->clk_gating.delay_attr.attr);
 VAR_7->clk_gating.delay_attr.attr.name = "clkgate_delay_ms";
 VAR_7->clk_gating.delay_attr.attr.mode = 0644;
 if (FUNC_5(VAR_7->dev, &VAR_7->clk_gating.delay_attr))
  FUNC_4(VAR_7->dev, "Failed to create sysfs for clkgate_delay\n");

 VAR_7->clk_gating.enable_attr.show = VAR_3;
 VAR_7->clk_gating.enable_attr.store = VAR_4;
 FUNC_7(&VAR_7->clk_gating.enable_attr.attr);
 VAR_7->clk_gating.enable_attr.attr.name = "clkgate_enable";
 VAR_7->clk_gating.enable_attr.attr.mode = 0644;
 if (FUNC_5(VAR_7->dev, &VAR_7->clk_gating.enable_attr))
  FUNC_4(VAR_7->dev, "Failed to create sysfs for clkgate_enable\n");
}
