
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_servq {int qcnt; } ;
struct TYPE_2__ {struct tx_servq be_q; struct tx_servq vo_q; struct tx_servq vi_q; struct tx_servq bk_q; } ;
struct sta_info {TYPE_1__ sta_xmitpriv; } ;
struct pkt_attrib {int priority; struct sta_info* psta; } ;
struct _adapter {int dummy; } ;



int FUNC_0(struct _adapter *VAR_0,
      struct pkt_attrib *VAR_1)
{
 struct sta_info *VAR_2;
 struct tx_servq *VAR_3;
 int VAR_4 = VAR_1->priority;

 VAR_2 = VAR_1->psta;
 switch (VAR_4) {
 case 1:
 case 2:
  VAR_3 = &VAR_2->sta_xmitpriv.bk_q;
  break;
 case 4:
 case 5:
  VAR_3 = &VAR_2->sta_xmitpriv.vi_q;
  break;
 case 6:
 case 7:
  VAR_3 = &VAR_2->sta_xmitpriv.vo_q;
  break;
 case 0:
 case 3:
 default:
  VAR_3 = &VAR_2->sta_xmitpriv.be_q;
 break;
 }
 return VAR_3->qcnt;
}
