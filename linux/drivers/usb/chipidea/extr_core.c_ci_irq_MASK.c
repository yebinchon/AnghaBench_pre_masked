
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ci_hdrc {int wakeup_int; int id_event; int b_sess_valid_event; scalar_t__ role; scalar_t__ is_otg; int dev; scalar_t__ in_lpm; } ;
typedef scalar_t__ irqreturn_t ;
struct TYPE_2__ {scalar_t__ (* irq ) (struct ci_hdrc*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ci_hdrc*) ;
 scalar_t__ FUNC_1 (struct ci_hdrc*) ;
 int FUNC_2 (struct ci_hdrc*) ;
 TYPE_1__* FUNC_3 (struct ci_hdrc*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ci_hdrc*,int ) ;
 int FUNC_6 (struct ci_hdrc*,int,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct ci_hdrc*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_7, void *VAR_8)
{
 struct ci_hdrc *VAR_9 = VAR_8;
 irqreturn_t VAR_10 = VAR_2;
 u32 VAR_11 = 0;

 if (VAR_9->in_lpm) {
  FUNC_4(VAR_7);
  VAR_9->wakeup_int = 1;
  FUNC_7(VAR_9->dev);
  return VAR_1;
 }

 if (VAR_9->is_otg) {
  VAR_11 = FUNC_5(VAR_9, ~0);
  if (FUNC_1(VAR_9)) {
   VAR_10 = FUNC_0(VAR_9);
   if (VAR_10 == VAR_1)
    return VAR_10;
  }
 }





 if (VAR_9->is_otg && (VAR_11 & VAR_5) && (VAR_11 & VAR_6)) {
  VAR_9->id_event = 1;

  FUNC_6(VAR_9, VAR_6, VAR_6);
  FUNC_2(VAR_9);
  return VAR_1;
 }





 if (VAR_9->is_otg && (VAR_11 & VAR_3) && (VAR_11 & VAR_4)) {
  VAR_9->b_sess_valid_event = 1;

  FUNC_6(VAR_9, VAR_4, VAR_4);
  FUNC_2(VAR_9);
  return VAR_1;
 }


 if (VAR_9->role != VAR_0)
  VAR_10 = FUNC_3(VAR_9)->irq(VAR_9);

 return VAR_10;
}
