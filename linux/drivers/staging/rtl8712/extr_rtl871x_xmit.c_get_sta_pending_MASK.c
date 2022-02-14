
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_servq {int dummy; } ;
struct TYPE_3__ {struct tx_servq be_q; struct tx_servq vo_q; struct tx_servq vi_q; struct tx_servq bk_q; } ;
struct sta_info {TYPE_1__ sta_xmitpriv; } ;
struct hw_xmit {int accnt; } ;
struct __queue {int dummy; } ;
struct TYPE_4__ {struct __queue be_pending; struct __queue vo_pending; struct __queue vi_pending; struct __queue bk_pending; struct hw_xmit* hwxmits; } ;
struct _adapter {TYPE_2__ xmitpriv; } ;
typedef int sint ;



__attribute__((used)) static inline struct tx_servq *FUNC_0(struct _adapter *VAR_0,
            struct __queue **VAR_1,
            struct sta_info *VAR_2, sint VAR_3)
{

 struct tx_servq *VAR_4;
 struct hw_xmit *VAR_5 = VAR_0->xmitpriv.hwxmits;

 switch (VAR_3) {
 case 1:
 case 2:
  VAR_4 = &(VAR_2->sta_xmitpriv.bk_q);
  *VAR_1 = &VAR_0->xmitpriv.bk_pending;
  (VAR_5 + 3)->accnt++;
  break;
 case 4:
 case 5:
  VAR_4 = &(VAR_2->sta_xmitpriv.vi_q);
  *VAR_1 = &VAR_0->xmitpriv.vi_pending;
  (VAR_5 + 1)->accnt++;
  break;
 case 6:
 case 7:
  VAR_4 = &(VAR_2->sta_xmitpriv.vo_q);
  *VAR_1 = &VAR_0->xmitpriv.vo_pending;
  (VAR_5 + 0)->accnt++;
  break;
 case 0:
 case 3:
 default:
  VAR_4 = &(VAR_2->sta_xmitpriv.be_q);
  *VAR_1 = &VAR_0->xmitpriv.be_pending;
  (VAR_5 + 2)->accnt++;
  break;
 }
 return VAR_4;
}
