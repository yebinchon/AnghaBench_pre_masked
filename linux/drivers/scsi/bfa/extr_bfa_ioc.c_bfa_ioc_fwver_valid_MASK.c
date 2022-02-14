
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bfi_ioc_image_hdr_s {scalar_t__ bootenv; } ;
struct bfa_ioc_s {int dummy; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_ioc_s*,struct bfi_ioc_image_hdr_s*) ;
 int FUNC_1 (struct bfa_ioc_s*,struct bfi_ioc_image_hdr_s*) ;
 int FUNC_2 (struct bfa_ioc_s*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static bfa_boolean_t
FUNC_4(struct bfa_ioc_s *VAR_1, u32 VAR_2)
{
 struct bfi_ioc_image_hdr_s VAR_3;

 FUNC_1(VAR_1, &VAR_3);

 if (FUNC_3(VAR_3.bootenv) != VAR_2) {
  FUNC_2(VAR_1, VAR_3.bootenv);
  FUNC_2(VAR_1, VAR_2);
  return VAR_0;
 }

 return FUNC_0(VAR_1, &VAR_3);
}
