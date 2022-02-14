
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_context {struct cxl_afu_driver_ops* afu_driver_ops; int afu_driver_events; } ;
struct cxl_afu_driver_ops {int event_delivered; int fetch_event; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct cxl_context *VAR_0,
   struct cxl_afu_driver_ops *VAR_1)
{
 FUNC_0(!VAR_1->fetch_event || !VAR_1->event_delivered);
 FUNC_1(&VAR_0->afu_driver_events, 0);
 VAR_0->afu_driver_ops = VAR_1;
}
