
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_image_hdr_s {int dummy; } ;
struct bfa_ioc_s {int dummy; } ;
typedef enum bfi_ioc_state { ____Placeholder_bfi_ioc_state } bfi_ioc_state ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bfa_ioc_s*) ;
 int FUNC_1 (struct bfa_ioc_s*) ;
 int FUNC_2 (struct bfa_ioc_s*,struct bfi_ioc_image_hdr_s*) ;
 int FUNC_3 (struct bfa_ioc_s*,struct bfi_ioc_image_hdr_s*) ;
 int FUNC_4 (struct bfa_ioc_s*,int) ;

__attribute__((used)) static bfa_boolean_t
FUNC_5(struct bfa_ioc_s *VAR_4)
{
 enum bfi_ioc_state VAR_5, VAR_6;
 struct bfi_ioc_image_hdr_s VAR_7;

 VAR_6 = FUNC_1(VAR_4);
 FUNC_4(VAR_4, VAR_6);
 VAR_5 = FUNC_0(VAR_4);
 FUNC_4(VAR_4, VAR_5);




 if (VAR_6 == VAR_3)
  return VAR_1;



 FUNC_3(VAR_4, &VAR_7);
 if (!FUNC_2(VAR_4, &VAR_7) &&
  VAR_5 != VAR_2) {
  FUNC_4(VAR_4, VAR_5);
  return VAR_0;
 }

 return VAR_1;
}
