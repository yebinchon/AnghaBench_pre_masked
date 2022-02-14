
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {scalar_t__ role; scalar_t__ vbus_active; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline enum usb_role FUNC_0(struct ci_hdrc *VAR_5)
{
 if (VAR_5->role == VAR_1)
  return VAR_3;
 else if (VAR_5->role == VAR_0 && VAR_5->vbus_active)
  return VAR_2;
 else
  return VAR_4;
}
