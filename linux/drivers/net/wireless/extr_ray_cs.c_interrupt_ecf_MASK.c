
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int dev; } ;
struct TYPE_3__ {scalar_t__ amem; scalar_t__ sram; struct pcmcia_device* finder; } ;
typedef TYPE_1__ ray_dev_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(ray_dev_t *VAR_4, int VAR_5)
{
 int VAR_6 = 50;
 struct pcmcia_device *VAR_7 = VAR_4->finder;

 if (!(FUNC_1(VAR_7))) {
  FUNC_0(&VAR_7->dev, "ray_cs interrupt_ecf - device not present\n");
  return -1;
 }
 FUNC_0(&VAR_7->dev, "interrupt_ecf(local=%p, ccs = 0x%x\n", VAR_4, VAR_5);

 while (VAR_6 &&
        (FUNC_2(VAR_4->amem + VAR_0 + VAR_1) &
  VAR_2))
  VAR_6--;
 if (VAR_6 == 0) {
  FUNC_0(&VAR_7->dev, "ray_cs interrupt_ecf card not ready for interrupt\n");
  return -1;
 }

 FUNC_3(VAR_5, VAR_4->sram + VAR_3);
 FUNC_3(VAR_2, VAR_4->amem + VAR_0 + VAR_1);
 return 0;
}
