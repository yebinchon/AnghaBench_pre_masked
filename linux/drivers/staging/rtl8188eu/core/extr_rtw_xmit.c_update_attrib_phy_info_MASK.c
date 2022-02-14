
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sgi; int ch_offset; int bwmode; int ht_option; } ;
struct sta_info {TYPE_1__ htpriv; int raid; int qos_option; } ;
struct pkt_attrib {int ampdu_en; int retry_ctrl; int sgi; int ch_offset; int bwmode; int ht_en; int raid; int qos_en; scalar_t__ triggered; scalar_t__ eosp; scalar_t__ mdata; } ;



__attribute__((used)) static void FUNC_0(struct pkt_attrib *VAR_0, struct sta_info *VAR_1)
{
 VAR_0->mdata = 0;
 VAR_0->eosp = 0;
 VAR_0->triggered = 0;


 VAR_0->qos_en = VAR_1->qos_option;

 VAR_0->raid = VAR_1->raid;
 VAR_0->ht_en = VAR_1->htpriv.ht_option;
 VAR_0->bwmode = VAR_1->htpriv.bwmode;
 VAR_0->ch_offset = VAR_1->htpriv.ch_offset;
 VAR_0->sgi = VAR_1->htpriv.sgi;
 VAR_0->ampdu_en = 0;
 VAR_0->retry_ctrl = 0;
}
