
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct pvr2_hdw {int ctl_timeout_flag; int ctl_read_urb; scalar_t__ ctl_read_pend_flag; int ctl_write_urb; scalar_t__ ctl_write_pend_flag; } ;
struct hdw_timer {struct pvr2_hdw* hdw; } ;


 struct hdw_timer* FUNC_0 (int ,struct timer_list*,int ) ;
 struct hdw_timer* VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_1)
{
 struct hdw_timer *VAR_2 = FUNC_0(VAR_2, VAR_1, VAR_2);
 struct pvr2_hdw *VAR_3 = VAR_2->hdw;

 if (VAR_3->ctl_write_pend_flag || VAR_3->ctl_read_pend_flag) {
  VAR_3->ctl_timeout_flag = !0;
  if (VAR_3->ctl_write_pend_flag)
   FUNC_1(VAR_3->ctl_write_urb);
  if (VAR_3->ctl_read_pend_flag)
   FUNC_1(VAR_3->ctl_read_urb);
 }
}
