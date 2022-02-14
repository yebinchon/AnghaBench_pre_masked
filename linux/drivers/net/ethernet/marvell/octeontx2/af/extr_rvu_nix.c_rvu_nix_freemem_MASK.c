
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvu_hwinfo {struct rvu_block* block; } ;
struct rvu_block {int aq; } ;
struct rvu {int dev; struct rvu_hwinfo* hw; } ;
struct TYPE_2__ {int bmap; } ;
struct nix_txsch {TYPE_1__ schq; } ;
struct nix_mcast {int mce_lock; int mcast_buf; int mce_ctx; } ;
struct nix_hw {struct nix_mcast mcast; struct nix_txsch* txsch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nix_hw* FUNC_0 (struct rvu_hwinfo*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rvu*,int ) ;
 int FUNC_5 (struct rvu*,int ,int ) ;

void FUNC_6(struct rvu *VAR_3)
{
 struct rvu_hwinfo *VAR_4 = VAR_3->hw;
 struct rvu_block *VAR_5;
 struct nix_txsch *VAR_6;
 struct nix_mcast *VAR_7;
 struct nix_hw *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_5(VAR_3, VAR_1, 0);
 if (VAR_9 < 0)
  return;

 VAR_5 = &VAR_4->block[VAR_9];
 FUNC_4(VAR_3, VAR_5->aq);

 if (VAR_9 == VAR_0) {
  VAR_8 = FUNC_0(VAR_3->hw, VAR_9);
  if (!VAR_8)
   return;

  for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
   VAR_6 = &VAR_8->txsch[VAR_10];
   FUNC_1(VAR_6->schq.bmap);
  }

  VAR_7 = &VAR_8->mcast;
  FUNC_3(VAR_3->dev, VAR_7->mce_ctx);
  FUNC_3(VAR_3->dev, VAR_7->mcast_buf);
  FUNC_2(&VAR_7->mce_lock);
 }
}
