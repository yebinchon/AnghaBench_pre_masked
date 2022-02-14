
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ispccdc_lsc {scalar_t__ state; int table_work; int free_queue; TYPE_1__* request; TYPE_1__* active; } ;
struct isp_ccdc_device {struct ispccdc_lsc lsc; } ;
struct TYPE_2__ {int list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct isp_ccdc_device*,TYPE_1__*) ;
 int FUNC_1 (struct isp_ccdc_device*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct isp_ccdc_device*) ;

__attribute__((used)) static int FUNC_7(struct isp_ccdc_device *VAR_3)
{
 struct ispccdc_lsc *VAR_4 = &VAR_3->lsc;

 if (VAR_4->state != VAR_1)
  return -VAR_0;

 if (VAR_4->active) {
  FUNC_2(&VAR_4->active->list, &VAR_4->free_queue);
  VAR_4->active = ((void*)0);
 }

 if (FUNC_0(VAR_3, VAR_4->request) < 0) {
  FUNC_4(FUNC_6(VAR_3),
    VAR_2);
  FUNC_2(&VAR_4->request->list, &VAR_4->free_queue);
  VAR_4->request = ((void*)0);
  goto done;
 }

 VAR_4->active = VAR_4->request;
 VAR_4->request = ((void*)0);
 FUNC_1(VAR_3, 1);

done:
 if (!FUNC_3(&VAR_4->free_queue))
  FUNC_5(&VAR_4->table_work);

 return 0;
}
