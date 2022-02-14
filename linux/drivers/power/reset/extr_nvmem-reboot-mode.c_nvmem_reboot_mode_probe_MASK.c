
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int write; int * dev; } ;
struct nvmem_reboot_mode {TYPE_1__ reboot; int cell; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 struct nvmem_reboot_mode* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 int VAR_4;
 struct nvmem_reboot_mode *VAR_5;

 VAR_5 = FUNC_3(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->reboot.dev = &VAR_3->dev;
 VAR_5->reboot.write = VAR_2;

 VAR_5->cell = FUNC_4(&VAR_3->dev, "reboot-mode");
 if (FUNC_0(VAR_5->cell)) {
  FUNC_2(&VAR_3->dev, "failed to get the nvmem cell reboot-mode\n");
  return FUNC_1(VAR_5->cell);
 }

 VAR_4 = FUNC_5(&VAR_3->dev, &VAR_5->reboot);
 if (VAR_4)
  FUNC_2(&VAR_3->dev, "can't register reboot mode\n");

 return VAR_4;
}
