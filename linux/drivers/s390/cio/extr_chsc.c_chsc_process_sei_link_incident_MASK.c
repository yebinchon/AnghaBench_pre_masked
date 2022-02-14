
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class; scalar_t__ null; } ;
struct lir {int ic; TYPE_1__ iq; int attached_node; int incident_node; } ;
struct chsc_sei_nt0_area {int rsid; int rs; int * ccdf; } ;


 int FUNC_0 (int,char*,int ,int ,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int *) ;
 int FUNC_2 (char*,int ,int ,int ,char*,char*,char*,char*) ;
 int FUNC_3 (char*,int ,int ,int ,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct chsc_sei_nt0_area *VAR_2)
{
 struct lir *VAR_3 = (struct lir *) &VAR_2->ccdf;
 char VAR_4[VAR_1], VAR_5[VAR_0], VAR_6[VAR_1],
      VAR_7[VAR_0];

 FUNC_0(4, "chsc: link incident (rs=%02x, rs_id=%04x, iq=%02x)\n",
        VAR_2->rs, VAR_2->rsid, VAR_2->ccdf[0]);


 if (VAR_3->iq.null)
  return;





 FUNC_1(VAR_4, VAR_5, &VAR_3->incident_node);
 FUNC_1(VAR_6, VAR_7, &VAR_3->attached_node);

 switch (VAR_3->iq.class) {
 case 129:
  FUNC_3("Link degraded: RS=%02x RSID=%04x IC=%02x "
   "IUPARAMS=%s IUNODEID=%s AUPARAMS=%s AUNODEID=%s\n",
   VAR_2->rs, VAR_2->rsid, VAR_3->ic, VAR_4,
   VAR_5, VAR_6, VAR_7);
  break;
 case 128:
  FUNC_2("Link stopped: RS=%02x RSID=%04x IC=%02x "
         "IUPARAMS=%s IUNODEID=%s AUPARAMS=%s AUNODEID=%s\n",
         VAR_2->rs, VAR_2->rsid, VAR_3->ic, VAR_4,
         VAR_5, VAR_6, VAR_7);
  break;
 default:
  break;
 }
}
