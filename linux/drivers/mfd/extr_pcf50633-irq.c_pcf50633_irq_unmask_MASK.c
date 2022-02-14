
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633 {int dev; } ;


 int FUNC_0 (struct pcf50633*,int,int ) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct pcf50633 *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0->dev, "Unmasking IRQ %d\n", VAR_1);

 return FUNC_0(VAR_0, VAR_1, 0);
}
