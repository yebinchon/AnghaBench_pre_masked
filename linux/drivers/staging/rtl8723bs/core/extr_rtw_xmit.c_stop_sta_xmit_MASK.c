
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xmit_priv {int lock; } ;
struct TYPE_8__ {int tx_pending; int sta_pending; } ;
struct TYPE_7__ {int tx_pending; int sta_pending; } ;
struct TYPE_6__ {int tx_pending; int sta_pending; } ;
struct TYPE_5__ {int tx_pending; int sta_pending; } ;
struct sta_xmit_priv {TYPE_4__ be_q; TYPE_3__ bk_q; TYPE_2__ vi_q; TYPE_1__ vo_q; } ;
struct sta_priv {int sta_dz_bitmap; } ;
struct sta_info {struct sta_xmit_priv sta_xmitpriv; int aid; int state; } ;
struct adapter {struct xmit_priv xmitpriv; struct sta_priv stapriv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,struct sta_info*,int *) ;
 int FUNC_2 (int *) ;
 struct sta_info* FUNC_3 (struct adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct adapter *VAR_1, struct sta_info *VAR_2)
{
 struct sta_info *VAR_3;
 struct sta_xmit_priv *VAR_4;
 struct sta_priv *VAR_5 = &VAR_1->stapriv;
 struct xmit_priv *VAR_6 = &VAR_1->xmitpriv;

 VAR_4 = &VAR_2->sta_xmitpriv;


 VAR_3 = FUNC_3(VAR_1);


 FUNC_4(&VAR_6->lock);

 VAR_2->state |= VAR_0;

 VAR_5->sta_dz_bitmap |= FUNC_0(VAR_2->aid);



 FUNC_1(VAR_1, VAR_2, &VAR_4->vo_q.sta_pending);
 FUNC_2(&(VAR_4->vo_q.tx_pending));


 FUNC_1(VAR_1, VAR_2, &VAR_4->vi_q.sta_pending);
 FUNC_2(&(VAR_4->vi_q.tx_pending));


 FUNC_1(VAR_1, VAR_2, &VAR_4->be_q.sta_pending);
 FUNC_2(&(VAR_4->be_q.tx_pending));


 FUNC_1(VAR_1, VAR_2, &VAR_4->bk_q.sta_pending);
 FUNC_2(&(VAR_4->bk_q.tx_pending));


 VAR_4 = &VAR_3->sta_xmitpriv;
 FUNC_1(VAR_1, VAR_3, &VAR_4->be_q.sta_pending);
 FUNC_2(&(VAR_4->be_q.tx_pending));

 FUNC_5(&VAR_6->lock);
}
