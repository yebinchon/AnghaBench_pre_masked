
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int cpp; } ;
struct nfp_nsp {int dummy; } ;


 scalar_t__ FUNC_0 (struct nfp_nsp*) ;
 int FUNC_1 (struct nfp_nsp*) ;
 int FUNC_2 (struct nfp_nsp*,unsigned int) ;
 int FUNC_3 (struct nfp_nsp*) ;
 int FUNC_4 (struct nfp_nsp*) ;
 struct nfp_nsp* FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct nfp_pf*) ;

__attribute__((used)) static int
FUNC_7(struct nfp_pf *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 struct nfp_nsp *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(VAR_0->cpp, VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_3);
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4)
  return 0;

 return FUNC_6(VAR_0);
}
