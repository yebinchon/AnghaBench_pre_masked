
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfp_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nfp_prog*,int,int) ;

__attribute__((used)) static int FUNC_8(struct nfp_prog *VAR_5, u8 VAR_6, u8 VAR_7)
{
 if (!VAR_7)
  return 0;

 if (VAR_7 < 32) {
  FUNC_1(VAR_5, FUNC_4(VAR_6), FUNC_2(VAR_6 + 1), VAR_2,
    FUNC_3(VAR_6), VAR_3, VAR_7);

  FUNC_0(VAR_5, FUNC_6(), FUNC_2(VAR_6 + 1), VAR_0,
    FUNC_5(0));
  FUNC_1(VAR_5, FUNC_4(VAR_6 + 1), FUNC_6(), VAR_1,
    FUNC_3(VAR_6 + 1), VAR_4, VAR_7);
 } else if (VAR_7 == 32) {

  FUNC_7(VAR_5, VAR_6, VAR_6 + 1);
  FUNC_1(VAR_5, FUNC_4(VAR_6 + 1), FUNC_6(), VAR_1,
    FUNC_3(VAR_6 + 1), VAR_4, 31);
 } else if (VAR_7 > 32) {
  FUNC_0(VAR_5, FUNC_6(), FUNC_2(VAR_6 + 1), VAR_0,
    FUNC_5(0));
  FUNC_1(VAR_5, FUNC_4(VAR_6), FUNC_6(), VAR_1,
    FUNC_3(VAR_6 + 1), VAR_4, VAR_7 - 32);
  FUNC_1(VAR_5, FUNC_4(VAR_6 + 1), FUNC_6(), VAR_1,
    FUNC_3(VAR_6 + 1), VAR_4, 31);
 }

 return 0;
}
