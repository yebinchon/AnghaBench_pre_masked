
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {size_t resp_idx; int driver_lock; scalar_t__* resp_len; int event_fifo; scalar_t__ cur_cmd; scalar_t__ dnld_sent; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct lbs_private *VAR_0)
{
 unsigned long VAR_1 =0;
 int VAR_2 = 1;

 FUNC_3(&VAR_0->driver_lock, VAR_1);
 if (VAR_0->dnld_sent) {
  VAR_2 = 0;
  FUNC_1("dnld_sent was set\n");
 }


 if (VAR_0->cur_cmd) {
  VAR_2 = 0;
  FUNC_1("cur_cmd was set\n");
 }


 if (FUNC_0(&VAR_0->event_fifo) || VAR_0->resp_len[VAR_0->resp_idx]) {
  VAR_2 = 0;
  FUNC_1("pending events or command responses\n");
 }
 FUNC_4(&VAR_0->driver_lock, VAR_1);

 if (VAR_2) {
  FUNC_1("sending lbs_ps_confirm_sleep\n");
  FUNC_2(VAR_0);
 } else {
  FUNC_1("sleep confirm has been delayed\n");
 }
}
