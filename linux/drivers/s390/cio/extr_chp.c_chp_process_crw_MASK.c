
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crw {int erc; int rsid; scalar_t__ slct; int anc; int rsc; int chn; int oflw; } ;
struct chp_id {int id; } ;


 int FUNC_0 (int,char*,int,...) ;




 int FUNC_1 (struct chp_id*) ;
 int FUNC_2 (struct chp_id) ;
 int FUNC_3 (struct chp_id) ;
 int FUNC_4 (struct chp_id) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct crw *VAR_0, struct crw *VAR_1,
       int VAR_2)
{
 struct chp_id VAR_3;

 if (VAR_2) {
  FUNC_5();
  return;
 }
 FUNC_0(2, "CRW reports slct=%d, oflw=%d, "
        "chn=%d, rsc=%X, anc=%d, erc=%X, rsid=%X\n",
        VAR_0->slct, VAR_0->oflw, VAR_0->chn, VAR_0->rsc, VAR_0->anc,
        VAR_0->erc, VAR_0->rsid);





 if (VAR_0->slct) {
  FUNC_0(2, "solicited machine check for "
         "channel path %02X\n", VAR_0->rsid);
  return;
 }
 FUNC_1(&VAR_3);
 VAR_3.id = VAR_0->rsid;
 switch (VAR_0->erc) {
 case 130:
 case 131:
  FUNC_2(VAR_3);
  FUNC_4(VAR_3);
  break;
 case 129:
 case 128:
  FUNC_3(VAR_3);
  break;
 default:
  FUNC_0(2, "Don't know how to handle erc=%x\n",
         VAR_0->erc);
 }
}
