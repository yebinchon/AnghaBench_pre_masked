
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct nfp_pf*) ;
 int FUNC_3 (struct nfp_pf*) ;

void FUNC_4(struct nfp_pf *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 <= 0)
  return;

 FUNC_1(FUNC_3(VAR_1), VAR_0,
      FUNC_0(VAR_0));
}
