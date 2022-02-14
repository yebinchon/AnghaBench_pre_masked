
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct if_usb_card {int fw_wq; TYPE_1__* priv; int fwdnldover; } ;
struct TYPE_2__ {int surpriseremoved; } ;


 int VAR_0 ;
 struct if_usb_card* VAR_1 ;
 struct if_usb_card* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct if_usb_card *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 FUNC_1(VAR_0);
 if (!VAR_4->fwdnldover) {

  VAR_4->priv->surpriseremoved = 1;
  FUNC_4("Download timed out\n");
 } else {
  FUNC_3("Download complete, no event. Assuming success\n");
 }
 FUNC_5(&VAR_4->fw_wq);
 FUNC_2(VAR_0);
}
