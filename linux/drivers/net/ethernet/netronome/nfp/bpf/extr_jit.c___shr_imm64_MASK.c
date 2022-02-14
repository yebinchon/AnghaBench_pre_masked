
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfp_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct nfp_prog*,int ,int ) ;
 int FUNC_6 (struct nfp_prog*,int,int) ;

__attribute__((used)) static int FUNC_7(struct nfp_prog *VAR_3, u8 VAR_4, u8 VAR_5)
{
 if (!VAR_5)
  return 0;

 if (VAR_5 < 32) {
  FUNC_0(VAR_3, FUNC_3(VAR_4), FUNC_1(VAR_4 + 1), VAR_0,
    FUNC_2(VAR_4), VAR_1, VAR_5);
  FUNC_0(VAR_3, FUNC_3(VAR_4 + 1), FUNC_4(), VAR_0,
    FUNC_2(VAR_4 + 1), VAR_2, VAR_5);
 } else if (VAR_5 == 32) {
  FUNC_6(VAR_3, VAR_4, VAR_4 + 1);
  FUNC_5(VAR_3, FUNC_3(VAR_4 + 1), 0);
 } else if (VAR_5 > 32) {
  FUNC_0(VAR_3, FUNC_3(VAR_4), FUNC_4(), VAR_0,
    FUNC_2(VAR_4 + 1), VAR_2, VAR_5 - 32);
  FUNC_5(VAR_3, FUNC_3(VAR_4 + 1), 0);
 }

 return 0;
}
