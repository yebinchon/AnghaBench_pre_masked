
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au0828_dvb {int lock; scalar_t__ frontend; } ;
struct au0828_dev {scalar_t__ need_urb_start; struct au0828_dvb dvb; } ;


 int FUNC_0 (struct au0828_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct au0828_dev*) ;

void FUNC_6(struct au0828_dev *VAR_0)
{
 struct au0828_dvb *VAR_1 = &VAR_0->dvb;
 int VAR_2;

 if (VAR_1->frontend) {

  VAR_2 = FUNC_1(VAR_1->frontend);
  FUNC_4("au0828_dvb_resume(): Resuming DVB fe %d\n", VAR_2);
  if (VAR_0->need_urb_start) {

   FUNC_2(&VAR_1->lock);
   FUNC_0(VAR_0);
   FUNC_5(VAR_0);
   FUNC_3(&VAR_1->lock);
  }
 }
}
