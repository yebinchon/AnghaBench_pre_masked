
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_otg_caps {scalar_t__ adp_support; scalar_t__ hnp_support; scalar_t__ srp_support; } ;
struct ci_hdrc {scalar_t__* roles; scalar_t__ is_otg; TYPE_1__* platdata; } ;
struct TYPE_2__ {struct usb_otg_caps ci_otg_caps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct ci_hdrc *VAR_2)
{







 return 0;

}
