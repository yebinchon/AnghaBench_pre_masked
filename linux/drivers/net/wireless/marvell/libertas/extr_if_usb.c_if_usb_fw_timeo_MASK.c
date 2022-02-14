
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct if_usb_card {int surprise_removed; int fw_wq; scalar_t__ fwdnldover; } ;


 struct if_usb_card* VAR_0 ;
 struct if_usb_card* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct if_usb_card *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 if (VAR_3->fwdnldover) {
  FUNC_1("Download complete, no event. Assuming success\n");
 } else {
  FUNC_2("Download timed out\n");
  VAR_3->surprise_removed = 1;
 }
 FUNC_3(&VAR_3->fw_wq);
}
