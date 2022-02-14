
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bfi_ioc_image_hdr {int bootenv; } ;
struct bfa_ioc {int dummy; } ;


 int FUNC_0 (struct bfa_ioc*,struct bfi_ioc_image_hdr*) ;
 int FUNC_1 (struct bfa_ioc*,struct bfi_ioc_image_hdr*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(struct bfa_ioc *VAR_0, u32 VAR_1)
{
 struct bfi_ioc_image_hdr VAR_2;

 FUNC_1(VAR_0, &VAR_2);
 if (FUNC_2(VAR_2.bootenv) != VAR_1)
  return 0;

 return FUNC_0(VAR_0, &VAR_2);
}
