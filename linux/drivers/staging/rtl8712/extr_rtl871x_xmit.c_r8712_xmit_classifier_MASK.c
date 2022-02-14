
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkt_attrib {int priority; int ra; struct sta_info* psta; } ;
struct xmit_frame {int list; struct pkt_attrib attrib; } ;
struct TYPE_2__ {int queue; } ;
struct tx_servq {int qcnt; TYPE_1__ sta_pending; int tx_pending; } ;
struct sta_priv {int dummy; } ;
struct sta_info {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct _adapter {struct mlme_priv mlmepriv; struct sta_priv stapriv; } ;
struct __queue {int lock; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct mlme_priv*) ;
 struct tx_servq* FUNC_2 (struct _adapter*,struct __queue**,struct sta_info*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 struct sta_info* FUNC_6 (struct _adapter*) ;
 struct sta_info* FUNC_7 (struct sta_priv*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(struct _adapter *VAR_2,
     struct xmit_frame *VAR_3)
{
 unsigned long VAR_4;
 struct __queue *VAR_5;
 struct sta_info *VAR_6;
 struct tx_servq *VAR_7;
 struct pkt_attrib *VAR_8 = &VAR_3->attrib;
 struct sta_priv *VAR_9 = &VAR_2->stapriv;
 struct mlme_priv *VAR_10 = &VAR_2->mlmepriv;
 bool VAR_11 = FUNC_3(VAR_8->ra);

 if (VAR_8->psta) {
  VAR_6 = VAR_8->psta;
 } else {
  if (VAR_11) {
   VAR_6 = FUNC_6(VAR_2);
  } else {
   if (FUNC_0(VAR_10, VAR_1))
    VAR_6 = FUNC_7(VAR_9,
           FUNC_1(VAR_10));
   else
    VAR_6 = FUNC_7(VAR_9, VAR_8->ra);
  }
 }
 if (VAR_6 == ((void*)0))
  return -VAR_0;
 VAR_7 = FUNC_2(VAR_2, &VAR_5,
     VAR_6, VAR_8->priority);
 FUNC_8(&VAR_5->lock, VAR_4);
 if (FUNC_5(&VAR_7->tx_pending))
  FUNC_4(&VAR_7->tx_pending, &VAR_5->queue);
 FUNC_4(&VAR_3->list, &VAR_7->sta_pending.queue);
 VAR_7->qcnt++;
 FUNC_9(&VAR_5->lock, VAR_4);
 return 0;
}
