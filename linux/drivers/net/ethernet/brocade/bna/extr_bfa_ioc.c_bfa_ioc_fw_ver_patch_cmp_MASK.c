
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ patch; scalar_t__ phase; scalar_t__ build; } ;
struct bfi_ioc_image_hdr {TYPE_1__ fwver; } ;
typedef enum bfi_ioc_img_ver_cmp { ____Placeholder_bfi_ioc_img_ver_cmp } bfi_ioc_img_ver_cmp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bfi_ioc_image_hdr*,struct bfi_ioc_image_hdr*) ;
 scalar_t__ FUNC_1 (struct bfi_ioc_image_hdr*) ;

__attribute__((used)) static enum bfi_ioc_img_ver_cmp
FUNC_2(struct bfi_ioc_image_hdr *VAR_4,
    struct bfi_ioc_image_hdr *VAR_5)
{
 if (!FUNC_0(VAR_4, VAR_5))
  return VAR_1;

 if (VAR_5->fwver.patch > VAR_4->fwver.patch)
  return VAR_0;
 else if (VAR_5->fwver.patch < VAR_4->fwver.patch)
  return VAR_2;




 if (FUNC_1(VAR_4))
  if (FUNC_1(VAR_5))
   return VAR_3;
  else
   return VAR_2;
 else
  if (FUNC_1(VAR_5))
   return VAR_0;

 if (VAR_5->fwver.phase > VAR_4->fwver.phase)
  return VAR_0;
 else if (VAR_5->fwver.phase < VAR_4->fwver.phase)
  return VAR_2;

 if (VAR_5->fwver.build > VAR_4->fwver.build)
  return VAR_0;
 else if (VAR_5->fwver.build < VAR_4->fwver.build)
  return VAR_2;




 return VAR_3;
}
