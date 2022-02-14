
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_btcoex_info {int dhcp_done; int timer_on; scalar_t__ bt_state; int work; int timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_btcoex_info*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct brcmf_btcoex_info *VAR_2)
{

 VAR_2->dhcp_done = 1;
 if (VAR_2->timer_on) {
  FUNC_1(VAR_1, "disable BT DHCP Timer\n");
  VAR_2->timer_on = 0;
  FUNC_2(&VAR_2->timer);


  if (VAR_2->bt_state != VAR_0) {
   FUNC_1(VAR_1, "bt_state:%d\n",
      VAR_2->bt_state);
   FUNC_3(&VAR_2->work);
  }
 } else {

  FUNC_0(VAR_2);
 }
}
