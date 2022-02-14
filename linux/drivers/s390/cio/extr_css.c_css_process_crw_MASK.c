
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int sch_no; int ssid; } ;
struct subchannel {int dev; } ;
struct crw {scalar_t__ erc; int rsid; int anc; int rsc; int chn; int oflw; int slct; } ;


 int FUNC_0 (int,char*,int ,int ,int ,int ,int ,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct subchannel_id,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct subchannel*) ;
 struct subchannel* FUNC_4 (struct subchannel_id) ;
 int FUNC_5 (struct subchannel_id*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct crw *VAR_1, struct crw *VAR_2, int VAR_3)
{
 struct subchannel_id VAR_4;
 struct subchannel *VAR_5;

 if (VAR_3) {
  FUNC_2();
  return;
 }
 FUNC_0(2, "CRW0 reports slct=%d, oflw=%d, "
        "chn=%d, rsc=%X, anc=%d, erc=%X, rsid=%X\n",
        VAR_1->slct, VAR_1->oflw, VAR_1->chn, VAR_1->rsc, VAR_1->anc,
        VAR_1->erc, VAR_1->rsid);
 if (VAR_2)
  FUNC_0(2, "CRW1 reports slct=%d, oflw=%d, "
         "chn=%d, rsc=%X, anc=%d, erc=%X, rsid=%X\n",
         VAR_2->slct, VAR_2->oflw, VAR_2->chn, VAR_2->rsc,
         VAR_2->anc, VAR_2->erc, VAR_2->rsid);
 FUNC_5(&VAR_4);
 VAR_4.sch_no = VAR_1->rsid;
 if (VAR_2)
  VAR_4.ssid = (VAR_2->rsid >> 4) & 3;

 if (VAR_1->erc == VAR_0) {
  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5) {
   FUNC_3(VAR_5);
   FUNC_6(&VAR_5->dev);
  }
 }





 FUNC_1(VAR_4, 0);
}
