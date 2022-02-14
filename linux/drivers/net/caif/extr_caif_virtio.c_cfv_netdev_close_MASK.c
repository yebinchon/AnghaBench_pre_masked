
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cfv_info {int tx_lock; int vq_tx; int napi; int vr_rx; } ;
struct buf_info {int dummy; } ;


 int FUNC_0 (struct cfv_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cfv_info*,struct buf_info*) ;
 int FUNC_3 (int *) ;
 struct cfv_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct buf_info* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_0)
{
 struct cfv_info *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2;
 struct buf_info *VAR_3;


 FUNC_5(VAR_0);
 FUNC_9(VAR_1->vq_tx);
 FUNC_10(VAR_1->vr_rx);
 FUNC_3(&VAR_1->napi);


 FUNC_1(VAR_1->vq_tx);
 FUNC_6(&VAR_1->tx_lock, VAR_2);
 while ((VAR_3 = FUNC_8(VAR_1->vq_tx)))
  FUNC_2(VAR_1, VAR_3);
 FUNC_7(&VAR_1->tx_lock, VAR_2);


 FUNC_0(VAR_1);
 return 0;
}
