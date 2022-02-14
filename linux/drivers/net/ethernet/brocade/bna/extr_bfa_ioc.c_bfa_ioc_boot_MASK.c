
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bfi_ioc_image_hdr {int dummy; } ;
struct bfa_ioc {int iocpf; } ;
typedef enum bfi_fwboot_type { ____Placeholder_bfi_fwboot_type } bfi_fwboot_type ;
typedef enum bfa_status { ____Placeholder_bfa_status } bfa_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct bfa_ioc*) ;
 int FUNC_3 (struct bfa_ioc*,int,int ) ;
 scalar_t__ FUNC_4 (struct bfa_ioc*,struct bfi_ioc_image_hdr*) ;
 int FUNC_5 (struct bfa_ioc*) ;
 int FUNC_6 (struct bfa_ioc*) ;
 scalar_t__ FUNC_7 (struct bfa_ioc*) ;
 int FUNC_8 (struct bfa_ioc*,int ) ;
 int FUNC_9 (struct bfa_ioc*,int ) ;
 int FUNC_10 (struct bfa_ioc*,int ) ;
 int VAR_10 ;

__attribute__((used)) static enum bfa_status
FUNC_11(struct bfa_ioc *VAR_11, enum bfi_fwboot_type VAR_12,
  u32 VAR_13)
{
 struct bfi_ioc_image_hdr *VAR_14;
 enum bfa_status VAR_15;
 FUNC_10(VAR_11, VAR_10);

 if (FUNC_7(VAR_11) != VAR_1)
  return VAR_0;
 if (VAR_13 == VAR_2 &&
     VAR_12 == VAR_5) {
  VAR_14 = (struct bfi_ioc_image_hdr *)
   FUNC_0(FUNC_2(VAR_11), 0);



  if (FUNC_4(VAR_11, VAR_14) ==
   VAR_6)
   VAR_12 = VAR_3;
 }




 if (VAR_12 == VAR_4) {
  FUNC_9(VAR_11, VAR_8);
  FUNC_8(VAR_11, VAR_8);
 } else {
  FUNC_9(VAR_11, VAR_7);
  FUNC_8(VAR_11, VAR_7);
 }

 FUNC_6(VAR_11);
 VAR_15 = FUNC_3(VAR_11, VAR_12, VAR_13);
 if (VAR_15 == VAR_1)
  FUNC_5(VAR_11);
 else
  FUNC_1(&VAR_11->iocpf, VAR_9);

 return VAR_15;
}
