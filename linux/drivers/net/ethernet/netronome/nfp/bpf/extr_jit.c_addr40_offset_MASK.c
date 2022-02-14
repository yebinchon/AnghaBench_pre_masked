
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ swreg ;
struct nfp_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_prog*,scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct nfp_prog*) ;
 scalar_t__ FUNC_2 (struct nfp_prog*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct nfp_prog *VAR_2, u8 VAR_3, swreg VAR_4,
       swreg *VAR_5, swreg *VAR_6)
{
 if (VAR_4 == FUNC_5(0)) {
  *VAR_5 = FUNC_3(VAR_3);
  *VAR_6 = FUNC_4(VAR_3 + 1);
  return;
 }

 FUNC_0(VAR_2, FUNC_1(VAR_2), FUNC_3(VAR_3), VAR_0, VAR_4);
 FUNC_0(VAR_2, FUNC_2(VAR_2), FUNC_4(VAR_3 + 1), VAR_1,
   FUNC_5(0));
 *VAR_5 = FUNC_1(VAR_2);
 *VAR_6 = FUNC_2(VAR_2);
}
