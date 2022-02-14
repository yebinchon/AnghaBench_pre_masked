
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pkt_attrib {int vcs_mode; scalar_t__ ht_en; } ;
struct TYPE_5__ {scalar_t__ preamble_mode; } ;
struct TYPE_6__ {TYPE_1__ mlmext_info; } ;
struct adapter {TYPE_2__ mlmeextpriv; } ;
struct TYPE_7__ {int rtsen; int hw_rts_en; int cts2self; int rtsrate; int rts_ratefb_lmt; int rts_short; int rts_sc; } ;
typedef TYPE_3__* PTXDESC_8723B ;




 scalar_t__ VAR_0 ;

 int FUNC_0 (struct adapter*,struct pkt_attrib*) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_1, struct pkt_attrib *VAR_2, PTXDESC_8723B VAR_3)
{


 if (VAR_2->vcs_mode) {
  switch (VAR_2->vcs_mode) {
  case 128:
   VAR_3->rtsen = 1;

   VAR_3->hw_rts_en = 1;
   break;

  case 130:
   VAR_3->cts2self = 1;
   break;

  case 129:
  default:
   break;
  }

  VAR_3->rtsrate = 8;
  VAR_3->rts_ratefb_lmt = 0xF;

  if (VAR_1->mlmeextpriv.mlmext_info.preamble_mode == VAR_0)
   VAR_3->rts_short = 1;


  if (VAR_2->ht_en)
   VAR_3->rts_sc = FUNC_0(VAR_1, VAR_2);
 }
}
