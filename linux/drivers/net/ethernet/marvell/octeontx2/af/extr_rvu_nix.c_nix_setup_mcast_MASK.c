
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int rsrc; } ;
struct rvu_hwinfo {int max_vfs_per_pf; TYPE_1__ pkind; } ;
struct rvu {int dev; struct rvu_hwinfo* hw; } ;
struct nix_mcast {int replay_pkind; int mce_lock; TYPE_2__* mcast_buf; TYPE_2__* mce_ctx; } ;
struct nix_hw {struct nix_mcast mcast; } ;
struct TYPE_4__ {scalar_t__ iova; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvu*,struct nix_hw*) ;
 int FUNC_3 (int ,TYPE_2__**,unsigned long,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rvu*,int,int ) ;
 int FUNC_6 (struct rvu*,int,int ,int) ;

__attribute__((used)) static int FUNC_7(struct rvu *VAR_9, struct nix_hw *VAR_10, int VAR_11)
{
 struct nix_mcast *VAR_12 = &VAR_10->mcast;
 struct rvu_hwinfo *VAR_13 = VAR_9->hw;
 int VAR_14, VAR_15;

 VAR_15 = (FUNC_5(VAR_9, VAR_11, VAR_3) >> 16) & 0x0F;
 VAR_15 = (1ULL << VAR_15);


 VAR_14 = FUNC_3(VAR_9->dev, &VAR_12->mce_ctx,
    (256UL << VAR_2), VAR_15);
 if (VAR_14)
  return -VAR_0;

 FUNC_6(VAR_9, VAR_11, VAR_5,
      (u64)VAR_12->mce_ctx->iova);


 FUNC_6(VAR_9, VAR_11, VAR_8,
      FUNC_0(36) | (VAR_13->max_vfs_per_pf << 4) | VAR_2);


 VAR_15 = FUNC_5(VAR_9, VAR_11, VAR_4) & 0xFFFF;
 VAR_14 = FUNC_3(VAR_9->dev, &VAR_12->mcast_buf,
    (8UL << VAR_1), VAR_15);
 if (VAR_14)
  return -VAR_0;

 FUNC_6(VAR_9, VAR_11, VAR_6,
      (u64)VAR_12->mcast_buf->iova);


 VAR_12->replay_pkind = FUNC_4(&VAR_13->pkind.rsrc);

 FUNC_6(VAR_9, VAR_11, VAR_7,
      FUNC_0(63) | (VAR_12->replay_pkind << 24) |
      FUNC_0(20) | VAR_1);

 FUNC_1(&VAR_12->mce_lock);

 return FUNC_2(VAR_9, VAR_10);
}
