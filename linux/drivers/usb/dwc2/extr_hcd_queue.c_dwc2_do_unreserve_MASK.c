
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc2_qh {int unreserve_pending; scalar_t__ host_us; int qh_list_entry; } ;
struct TYPE_2__ {scalar_t__ uframe_sched; } ;
struct dwc2_hsotg {int periodic_channels; TYPE_1__ params; int periodic_usecs; int lock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dwc2_hsotg*,struct dwc2_qh*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dwc2_hsotg *VAR_0, struct dwc2_qh *VAR_1)
{
 FUNC_1(&VAR_0->lock);

 FUNC_0(!VAR_1->unreserve_pending);


 VAR_1->unreserve_pending = 0;

 if (FUNC_0(!FUNC_4(&VAR_1->qh_list_entry)))
  FUNC_3(&VAR_1->qh_list_entry);


 VAR_0->periodic_usecs -= VAR_1->host_us;

 if (VAR_0->params.uframe_sched) {
  FUNC_2(VAR_0, VAR_1);
 } else {

  VAR_0->periodic_channels--;
 }
}
