
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_driver_overrides {scalar_t__ reset; scalar_t__ extra_priv_size; int product_desc; } ;
struct hc_driver {scalar_t__ reset; int hcd_priv_size; int product_desc; } ;


 struct hc_driver VAR_0 ;

void FUNC_0(struct hc_driver *VAR_1,
  const struct ohci_driver_overrides *VAR_2)
{

 *VAR_1 = VAR_0;

 if (VAR_2) {
  VAR_1->product_desc = VAR_2->product_desc;
  VAR_1->hcd_priv_size += VAR_2->extra_priv_size;
  if (VAR_2->reset)
   VAR_1->reset = VAR_2->reset;
 }
}
