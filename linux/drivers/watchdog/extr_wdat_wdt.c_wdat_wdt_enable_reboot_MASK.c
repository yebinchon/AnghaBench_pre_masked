
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wdat_wdt {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct wdat_wdt*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct wdat_wdt *VAR_2)
{
 int VAR_3;







 VAR_3 = FUNC_1(VAR_2, VAR_0, 0, ((void*)0));
 if (VAR_3 && VAR_3 != -VAR_1) {
  FUNC_0(&VAR_2->pdev->dev,
   "Failed to enable reboot when watchdog triggers\n");
  return VAR_3;
 }

 return 0;
}
