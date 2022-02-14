
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au0828_dvb {scalar_t__ frontend; int lock; } ;
struct au0828_dev {int need_urb_start; int restart_streaming; scalar_t__ urb_streaming; struct au0828_dvb dvb; } ;


 int FUNC_0 (struct au0828_dev*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct au0828_dev*) ;

void FUNC_7(struct au0828_dev *VAR_0)
{
 struct au0828_dvb *VAR_1 = &VAR_0->dvb;
 int VAR_2;

 if (VAR_1->frontend) {
  if (VAR_0->urb_streaming) {
   FUNC_1(&VAR_0->restart_streaming);

   FUNC_3(&VAR_1->lock);
   FUNC_6(VAR_0);
   FUNC_0(VAR_0, 1);
   FUNC_4(&VAR_1->lock);
   VAR_0->need_urb_start = 1;
  }

  VAR_2 = FUNC_2(VAR_1->frontend);
  FUNC_5("au0828_dvb_suspend(): Suspending DVB fe %d\n", VAR_2);
 }
}
