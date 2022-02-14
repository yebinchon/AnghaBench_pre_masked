
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_pd_identity {int dummy; } ;
struct typec_partner {struct usb_pd_identity* identity; } ;
struct typec_cable {struct usb_pd_identity* identity; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 struct typec_cable* FUNC_2 (struct device*) ;
 struct typec_partner* FUNC_3 (struct device*) ;

__attribute__((used)) static struct usb_pd_identity *FUNC_4(struct device *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  struct typec_partner *VAR_1 = FUNC_3(VAR_0);

  return VAR_1->identity;
 } else if (FUNC_0(VAR_0)) {
  struct typec_cable *VAR_2 = FUNC_2(VAR_0);

  return VAR_2->identity;
 }
 return ((void*)0);
}
