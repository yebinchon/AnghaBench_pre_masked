
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int framelen; } ;
struct TYPE_3__ {TYPE_2__ info; } ;
union hfa384x_usbin {TYPE_1__ infofrm; } ;
struct wlandevice {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct wlandevice*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct wlandevice *VAR_0,
          union hfa384x_usbin *VAR_1)
{
 FUNC_0(&VAR_1->infofrm.info.framelen);
 FUNC_1(VAR_0, &VAR_1->infofrm.info);
}
