
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct cpcap_battery_ddata {int reg; int active; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct cpcap_battery_ddata* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct cpcap_battery_ddata *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 FUNC_0(&VAR_2->active, 0);
 VAR_3 = FUNC_3(VAR_2->reg, VAR_0,
       0xffff, 0);
 if (VAR_3)
  FUNC_1(&VAR_1->dev, "could not disable: %i\n", VAR_3);

 return 0;
}
