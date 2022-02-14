
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crw {int rsid; int erc; int anc; int rsc; int chn; int oflw; int slct; } ;
struct chsc_sei {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct chsc_sei*,int) ;
 int FUNC_3 () ;
 struct chsc_sei* VAR_2 ;

__attribute__((used)) static void FUNC_4(struct crw *VAR_3, struct crw *VAR_4, int VAR_5)
{
 struct chsc_sei *VAR_6 = VAR_2;

 if (VAR_5) {
  FUNC_3();
  return;
 }
 FUNC_0(2, "CRW reports slct=%d, oflw=%d, "
        "chn=%d, rsc=%X, anc=%d, erc=%X, rsid=%X\n",
        VAR_3->slct, VAR_3->oflw, VAR_3->chn, VAR_3->rsc, VAR_3->anc,
        VAR_3->erc, VAR_3->rsid);

 FUNC_1(2, "prcss");
 FUNC_2(VAR_6, VAR_0 | VAR_1);
}
