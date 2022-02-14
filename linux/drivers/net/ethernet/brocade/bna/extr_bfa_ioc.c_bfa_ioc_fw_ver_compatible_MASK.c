
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ major; scalar_t__ minor; scalar_t__ maint; scalar_t__ patch; scalar_t__ phase; scalar_t__ build; } ;
struct bfi_ioc_image_hdr {scalar_t__ signature; TYPE_1__ fwver; } ;


 int FUNC_0 (struct bfi_ioc_image_hdr*,struct bfi_ioc_image_hdr*) ;

__attribute__((used)) static bool
FUNC_1(struct bfi_ioc_image_hdr *VAR_0,
     struct bfi_ioc_image_hdr *VAR_1)
{
 if (VAR_0->signature != VAR_1->signature)
  return 0;
 if (VAR_0->fwver.major != VAR_1->fwver.major)
  return 0;
 if (VAR_0->fwver.minor != VAR_1->fwver.minor)
  return 0;
 if (VAR_0->fwver.maint != VAR_1->fwver.maint)
  return 0;
 if (VAR_0->fwver.patch == VAR_1->fwver.patch &&
     VAR_0->fwver.phase == VAR_1->fwver.phase &&
     VAR_0->fwver.build == VAR_1->fwver.build)
  return FUNC_0(VAR_0, VAR_1);

 return 1;
}
