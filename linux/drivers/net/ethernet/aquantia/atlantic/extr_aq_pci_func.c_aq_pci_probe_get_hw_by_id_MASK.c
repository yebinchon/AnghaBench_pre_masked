
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {scalar_t__ vendor; scalar_t__ device; scalar_t__ revision; } ;
struct aq_hw_ops {int dummy; } ;
struct aq_hw_caps_s {int dummy; } ;
struct TYPE_3__ {scalar_t__ devid; scalar_t__ revision; struct aq_hw_caps_s* caps; struct aq_hw_ops* ops; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_4,
         const struct aq_hw_ops **VAR_5,
         const struct aq_hw_caps_s **VAR_6)
{
 int VAR_7;

 if (VAR_4->vendor != VAR_2)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  if (VAR_3[VAR_7].devid == VAR_4->device &&
      (VAR_3[VAR_7].revision == VAR_0 ||
       VAR_3[VAR_7].revision == VAR_4->revision)) {
   *VAR_5 = VAR_3[VAR_7].ops;
   *VAR_6 = VAR_3[VAR_7].caps;
   break;
  }
 }

 if (VAR_7 == FUNC_0(VAR_3))
  return -VAR_1;

 return 0;
}
