
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_image_hdr {int dummy; } ;
struct bfa_ioc {int dummy; } ;
typedef enum bfi_ioc_img_ver_cmp { ____Placeholder_bfi_ioc_img_ver_cmp } bfi_ioc_img_ver_cmp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bfa_ioc*) ;
 int FUNC_2 (struct bfa_ioc*,struct bfi_ioc_image_hdr*) ;
 int FUNC_3 (struct bfi_ioc_image_hdr*,struct bfi_ioc_image_hdr*) ;

bool
FUNC_4(struct bfa_ioc *VAR_4, struct bfi_ioc_image_hdr *VAR_5)
{
 struct bfi_ioc_image_hdr *VAR_6;
 enum bfi_ioc_img_ver_cmp VAR_7, VAR_8;

 VAR_6 = (struct bfi_ioc_image_hdr *)
  FUNC_0(FUNC_1(VAR_4), 0);


 VAR_8 = FUNC_3(VAR_6, VAR_5);
 if (VAR_8 == VAR_1 ||
     VAR_8 == VAR_2) {
  return 0;
 }





 VAR_7 = FUNC_2(VAR_4, VAR_5);

 if (VAR_7 == VAR_0)
  return 0;
 else if (VAR_7 == VAR_3)
  return 1;
 else
  return (VAR_8 == VAR_3) ?
   1 : 0;
}
