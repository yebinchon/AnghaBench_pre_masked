
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bfi_ioc_image_hdr_s {int dummy; } ;
struct bfa_ioc_s {int dummy; } ;
typedef enum bfi_ioc_img_ver_cmp_e { ____Placeholder_bfi_ioc_img_ver_cmp_e } bfi_ioc_img_ver_cmp_e ;
typedef scalar_t__ bfa_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bfi_ioc_image_hdr_s*) ;
 scalar_t__ FUNC_1 (struct bfa_ioc_s*,int ,int *) ;
 int FUNC_2 (struct bfi_ioc_image_hdr_s*,struct bfi_ioc_image_hdr_s*) ;

__attribute__((used)) static enum bfi_ioc_img_ver_cmp_e
FUNC_3(struct bfa_ioc_s *VAR_4,
   struct bfi_ioc_image_hdr_s *VAR_5)
{
 struct bfi_ioc_image_hdr_s *VAR_6;
 bfa_status_t VAR_7;
 u32 VAR_8[VAR_2];

 VAR_7 = FUNC_1(VAR_4, 0, VAR_8);
 if (VAR_7 != VAR_0)
  return VAR_3;

 VAR_6 = (struct bfi_ioc_image_hdr_s *) VAR_8;
 if (FUNC_0(VAR_6) == VAR_1)
  return FUNC_2(VAR_5, VAR_6);
 else
  return VAR_3;
}
