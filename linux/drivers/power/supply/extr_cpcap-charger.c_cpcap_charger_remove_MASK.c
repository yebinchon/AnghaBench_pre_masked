
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cpcap_charger_ddata {int detect_work; int vbus_work; int dev; int active; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cpcap_charger_ddata*,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *) ;
 struct cpcap_charger_ddata* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct cpcap_charger_ddata *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 FUNC_0(&VAR_1->active, 0);
 VAR_2 = FUNC_4(((void*)0));
 if (VAR_2)
  FUNC_3(VAR_1->dev, "could not clear USB comparator: %i\n",
    VAR_2);

 VAR_2 = FUNC_2(VAR_1, 0, 0, 0);
 if (VAR_2)
  FUNC_3(VAR_1->dev, "could not clear charger: %i\n",
    VAR_2);
 FUNC_1(&VAR_1->vbus_work);
 FUNC_1(&VAR_1->detect_work);

 return 0;
}
