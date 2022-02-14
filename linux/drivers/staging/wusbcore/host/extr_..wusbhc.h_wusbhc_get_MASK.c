
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int usb_hcd; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline struct wusbhc *FUNC_1(struct wusbhc *VAR_0)
{
 return FUNC_0(&VAR_0->usb_hcd) ? VAR_0 : ((void*)0);
}
