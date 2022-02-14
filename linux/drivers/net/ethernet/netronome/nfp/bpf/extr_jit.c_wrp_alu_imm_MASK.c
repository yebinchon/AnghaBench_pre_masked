
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
typedef enum alu_op { ____Placeholder_alu_op } alu_op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int,int ) ;
 int FUNC_1 (struct nfp_prog*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct nfp_prog*,int ,int ) ;
 int FUNC_7 (struct nfp_prog*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_8(struct nfp_prog *VAR_4, u8 VAR_5, enum alu_op VAR_6, u32 VAR_7)
{
 swreg VAR_8;

 if (VAR_6 == VAR_0) {
  if (!VAR_7)
   FUNC_7(VAR_4, FUNC_4(VAR_5), 0);
  if (!VAR_7 || !~VAR_7)
   return;
 }
 if (VAR_6 == VAR_2) {
  if (!~VAR_7)
   FUNC_7(VAR_4, FUNC_4(VAR_5), ~0U);
  if (!VAR_7 || !~VAR_7)
   return;
 }
 if (VAR_6 == VAR_3) {
  if (!~VAR_7)
   FUNC_0(VAR_4, FUNC_4(VAR_5), FUNC_5(),
     VAR_1, FUNC_3(VAR_5));
  if (!VAR_7 || !~VAR_7)
   return;
 }

 VAR_8 = FUNC_6(VAR_4, VAR_7, FUNC_1(VAR_4));
 FUNC_0(VAR_4, FUNC_4(VAR_5), FUNC_2(VAR_5), VAR_6, VAR_8);
}
