
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_context {int wq; int afu_driver_events; } ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cxl_context *VAR_0,
    unsigned int VAR_1)
{
 FUNC_0(VAR_1, &VAR_0->afu_driver_events);
 FUNC_1(&VAR_0->wq);
}
