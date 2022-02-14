
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ major; scalar_t__ minor; scalar_t__ maint; scalar_t__ patch; scalar_t__ phase; scalar_t__ build; } ;
struct bfi_ioc_image_hdr_s {scalar_t__ signature; TYPE_1__ fwver; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfi_ioc_image_hdr_s*,struct bfi_ioc_image_hdr_s*) ;

__attribute__((used)) static bfa_boolean_t
FUNC_1(struct bfi_ioc_image_hdr_s *VAR_2,
    struct bfi_ioc_image_hdr_s *VAR_3)
{
 if (VAR_2->signature != VAR_3->signature)
  return VAR_0;

 if (VAR_2->fwver.major != VAR_3->fwver.major)
  return VAR_0;

 if (VAR_2->fwver.minor != VAR_3->fwver.minor)
  return VAR_0;

 if (VAR_2->fwver.maint != VAR_3->fwver.maint)
  return VAR_0;

 if (VAR_2->fwver.patch == VAR_3->fwver.patch &&
  VAR_2->fwver.phase == VAR_3->fwver.phase &&
  VAR_2->fwver.build == VAR_3->fwver.build) {
  return FUNC_0(VAR_2, VAR_3);
 }

 return VAR_1;
}
