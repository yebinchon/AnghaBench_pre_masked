
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlandevice {struct hfa384x* priv; } ;
struct TYPE_3__ {int linkstatus; } ;
struct TYPE_4__ {TYPE_1__ linkstatus; } ;
struct hfa384x_inf_frame {TYPE_2__ info; } ;
struct hfa384x {int link_bh; int link_status_new; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct wlandevice *VAR_0,
         struct hfa384x_inf_frame *VAR_1)
{
 struct hfa384x *VAR_2 = VAR_0->priv;

 VAR_2->link_status_new = FUNC_0(VAR_1->info.linkstatus.linkstatus);

 FUNC_1(&VAR_2->link_bh);
}
