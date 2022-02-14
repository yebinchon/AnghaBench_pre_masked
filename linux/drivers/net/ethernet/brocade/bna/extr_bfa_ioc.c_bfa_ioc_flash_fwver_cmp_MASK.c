
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bfi_ioc_image_hdr {int dummy; } ;
struct bfa_ioc {int dummy; } ;
typedef enum bfi_ioc_img_ver_cmp { ____Placeholder_bfi_ioc_img_ver_cmp } bfi_ioc_img_ver_cmp ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bfi_ioc_image_hdr*) ;
 int FUNC_1 (struct bfi_ioc_image_hdr*,struct bfi_ioc_image_hdr*) ;
 int FUNC_2 (struct bfa_ioc*,int ,int *) ;

__attribute__((used)) static enum bfi_ioc_img_ver_cmp
FUNC_3(struct bfa_ioc *VAR_3,
   struct bfi_ioc_image_hdr *VAR_4)
{
 struct bfi_ioc_image_hdr *VAR_5;
 enum bfa_status VAR_6;
 u32 VAR_7[VAR_1];

 VAR_6 = FUNC_2(VAR_3, 0, VAR_7);
 if (VAR_6 != VAR_0)
  return VAR_2;

 VAR_5 = (struct bfi_ioc_image_hdr *)VAR_7;
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_4, VAR_5);
 else
  return VAR_2;
}
