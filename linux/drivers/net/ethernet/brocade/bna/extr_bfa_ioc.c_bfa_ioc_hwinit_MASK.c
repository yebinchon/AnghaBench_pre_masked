
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bfa_ioc {int iocpf; } ;
typedef enum bfi_ioc_state { ____Placeholder_bfi_ioc_state } bfi_ioc_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct bfa_ioc*,int ,int ) ;
 int FUNC_2 (struct bfa_ioc*,int ) ;
 int FUNC_3 (struct bfa_ioc*) ;
 int FUNC_4 (struct bfa_ioc*) ;
 int FUNC_5 (struct bfa_ioc*) ;

__attribute__((used)) static void
FUNC_6(struct bfa_ioc *VAR_8, bool VAR_9)
{
 enum bfi_ioc_state VAR_10;
 bool VAR_11;
 u32 VAR_12;

 VAR_10 = FUNC_3(VAR_8);

 if (VAR_9)
  VAR_10 = VAR_6;

 VAR_12 = VAR_1;




 VAR_11 = (VAR_10 == VAR_6) ?
  0 : FUNC_2(VAR_8, VAR_12);

 if (!VAR_11) {
  if (FUNC_1(VAR_8, VAR_2, VAR_12) ==
        VAR_0)
   FUNC_5(VAR_8);

  return;
 }





 if (VAR_10 == VAR_4) {
  FUNC_5(VAR_8);
  return;
 }





 if (VAR_10 == VAR_3 || VAR_10 == VAR_5) {




  FUNC_4(VAR_8);
  FUNC_0(&VAR_8->iocpf, VAR_7);
  return;
 }




 if (FUNC_1(VAR_8, VAR_2, VAR_12) ==
       VAR_0)
  FUNC_5(VAR_8);
}
