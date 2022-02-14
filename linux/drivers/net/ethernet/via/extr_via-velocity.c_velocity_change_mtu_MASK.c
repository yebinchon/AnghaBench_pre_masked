
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_info {int numq; } ;
struct rx_info {int dummy; } ;
struct velocity_info {int lock; int mac_regs; int napi; struct tx_info tx; struct rx_info rx; int options; int dev; int pdev; struct net_device* netdev; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct velocity_info*) ;
 struct velocity_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct velocity_info* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct velocity_info*) ;
 int FUNC_12 (struct velocity_info*) ;
 int FUNC_13 (struct velocity_info*,int ) ;
 int FUNC_14 (struct velocity_info*,int) ;
 int FUNC_15 (struct velocity_info*) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_3, int VAR_4)
{
 struct velocity_info *VAR_5 = FUNC_5(VAR_3);
 int VAR_6 = 0;

 if (!FUNC_6(VAR_3)) {
  VAR_3->mtu = VAR_4;
  goto out_0;
 }

 if (VAR_3->mtu != VAR_4) {
  struct velocity_info *VAR_7;
  unsigned long VAR_8;
  struct rx_info VAR_9;
  struct tx_info VAR_10;

  VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
  if (!VAR_7) {
   VAR_6 = -VAR_0;
   goto out_0;
  }

  VAR_7->netdev = VAR_3;
  VAR_7->pdev = VAR_5->pdev;
  VAR_7->dev = VAR_5->dev;
  VAR_7->options = VAR_5->options;
  VAR_7->tx.numq = VAR_5->tx.numq;

  VAR_6 = FUNC_14(VAR_7, VAR_4);
  if (VAR_6 < 0)
   goto out_free_tmp_vptr_1;

  FUNC_3(&VAR_5->napi);

  FUNC_9(&VAR_5->lock, VAR_8);

  FUNC_8(VAR_3);
  FUNC_15(VAR_5);

  VAR_9 = VAR_5->rx;
  VAR_10 = VAR_5->tx;

  VAR_5->rx = VAR_7->rx;
  VAR_5->tx = VAR_7->tx;

  VAR_7->rx = VAR_9;
  VAR_7->tx = VAR_10;

  VAR_3->mtu = VAR_4;

  FUNC_13(VAR_5, VAR_2);

  FUNC_12(VAR_5);

  FUNC_4(&VAR_5->napi);

  FUNC_2(VAR_5->mac_regs);
  FUNC_7(VAR_3);

  FUNC_10(&VAR_5->lock, VAR_8);

  FUNC_11(VAR_7);

out_free_tmp_vptr_1:
  FUNC_0(VAR_7);
 }
out_0:
 return VAR_6;
}
