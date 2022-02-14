
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpu_wdt_handler {void (* reset_func ) (void*) ;void* priv; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {struct vpu_wdt_handler* handler; } ;
struct mtk_vpu {int * dev; int vpu_mutex; TYPE_1__ wdt; } ;
typedef enum rst_id { ____Placeholder_rst_id } rst_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mtk_vpu* FUNC_4 (struct platform_device*) ;

int FUNC_5(struct platform_device *VAR_3,
   void VAR_4(void *),
   void *VAR_5, enum rst_id VAR_6)
{
 struct mtk_vpu *VAR_7 = FUNC_4(VAR_3);
 struct vpu_wdt_handler *VAR_8;

 if (!VAR_7) {
  FUNC_1(&VAR_3->dev, "vpu device in not ready\n");
  return -VAR_1;
 }

 VAR_8 = VAR_7->wdt.handler;

 if (VAR_6 >= 0 && VAR_6 < VAR_2 && VAR_4) {
  FUNC_0(VAR_7->dev, "wdt register id %d\n", VAR_6);
  FUNC_2(&VAR_7->vpu_mutex);
  VAR_8[VAR_6].reset_func = VAR_4;
  VAR_8[VAR_6].priv = VAR_5;
  FUNC_3(&VAR_7->vpu_mutex);
  return 0;
 }

 FUNC_1(VAR_7->dev, "register vpu wdt handler failed\n");
 return -VAR_0;
}
