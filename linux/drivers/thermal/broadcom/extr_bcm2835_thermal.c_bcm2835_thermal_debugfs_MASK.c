
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct debugfs_regset32 {int base; int nregs; int regs; } ;
struct bcm2835_thermal_data {int debugfsdir; int regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int,int ,struct debugfs_regset32*) ;
 struct debugfs_regset32* FUNC_3 (int *,int,int ) ;
 struct bcm2835_thermal_data* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_2)
{
 struct bcm2835_thermal_data *VAR_3 = FUNC_4(VAR_2);
 struct debugfs_regset32 *VAR_4;

 VAR_3->debugfsdir = FUNC_1("bcm2835_thermal", ((void*)0));

 VAR_4 = FUNC_3(&VAR_2->dev, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 VAR_4->regs = VAR_1;
 VAR_4->nregs = FUNC_0(VAR_1);
 VAR_4->base = VAR_3->regs;

 FUNC_2("regset", 0444, VAR_3->debugfsdir, VAR_4);
}
