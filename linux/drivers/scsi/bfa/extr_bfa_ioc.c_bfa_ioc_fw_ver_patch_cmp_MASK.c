
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ patch; scalar_t__ phase; scalar_t__ build; } ;
struct bfi_ioc_image_hdr_s {TYPE_1__ fwver; } ;
typedef enum bfi_ioc_img_ver_cmp_e { ____Placeholder_bfi_ioc_img_ver_cmp_e } bfi_ioc_img_ver_cmp_e ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct bfi_ioc_image_hdr_s*,struct bfi_ioc_image_hdr_s*) ;
 scalar_t__ FUNC_1 (struct bfi_ioc_image_hdr_s*) ;

__attribute__((used)) static enum bfi_ioc_img_ver_cmp_e
FUNC_2(struct bfi_ioc_image_hdr_s *VAR_6,
    struct bfi_ioc_image_hdr_s *VAR_7)
{
 if (FUNC_0(VAR_6, VAR_7) == VAR_0)
  return VAR_3;

 if (VAR_7->fwver.patch > VAR_6->fwver.patch)
  return VAR_2;

 else if (VAR_7->fwver.patch < VAR_6->fwver.patch)
  return VAR_4;






 if (FUNC_1(VAR_6) == VAR_1) {
  if (FUNC_1(VAR_7))
   return VAR_5;
  else
   return VAR_4;
 } else {
  if (FUNC_1(VAR_7))
   return VAR_2;
 }

 if (VAR_7->fwver.phase > VAR_6->fwver.phase)
  return VAR_2;
 else if (VAR_7->fwver.phase < VAR_6->fwver.phase)
  return VAR_4;

 if (VAR_7->fwver.build > VAR_6->fwver.build)
  return VAR_2;
 else if (VAR_7->fwver.build < VAR_6->fwver.build)
  return VAR_4;





 return VAR_5;
}
