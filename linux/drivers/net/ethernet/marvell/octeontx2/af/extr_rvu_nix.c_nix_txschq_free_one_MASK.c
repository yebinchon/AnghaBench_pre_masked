
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct rvu_hwinfo {int * block; } ;
struct rvu {int rsrc_lock; int dev; struct rvu_hwinfo* hw; } ;
struct TYPE_3__ {scalar_t__ pcifunc; } ;
struct nix_txsch_free_req {int schq_lvl; int schq; TYPE_1__ hdr; } ;
struct TYPE_4__ {int max; } ;
struct nix_txsch {scalar_t__* pfvf_map; TYPE_2__ schq; } ;
struct nix_hw {struct nix_txsch* txsch; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int,int) ;
 struct nix_hw* FUNC_4 (struct rvu_hwinfo*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (struct rvu*,int ,scalar_t__) ;
 int FUNC_9 (struct rvu*,int *,scalar_t__,int ) ;
 int FUNC_10 (struct rvu*,int,int ,int,int) ;
 int FUNC_11 (struct rvu*,int,int ) ;
 int FUNC_12 (struct rvu*,int,int ,int) ;

__attribute__((used)) static int FUNC_13(struct rvu *VAR_6,
          struct nix_txsch_free_req *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct rvu_hwinfo *VAR_13 = VAR_6->hw;
 u16 VAR_14 = VAR_7->hdr.pcifunc;
 struct nix_txsch *VAR_15;
 struct nix_hw *VAR_16;
 u32 *VAR_17;
 u64 VAR_18;

 VAR_11 = FUNC_8(VAR_6, VAR_0, VAR_14);
 if (VAR_11 < 0)
  return VAR_2;

 VAR_16 = FUNC_4(VAR_6->hw, VAR_11);
 if (!VAR_16)
  return -VAR_1;

 VAR_10 = FUNC_9(VAR_6, &VAR_13->block[VAR_11], VAR_14, 0);
 if (VAR_10 < 0)
  return VAR_2;

 VAR_8 = VAR_7->schq_lvl;
 VAR_9 = VAR_7->schq;
 VAR_15 = &VAR_16->txsch[VAR_8];


 if (VAR_8 > VAR_5 ||
     VAR_9 >= VAR_15->schq.max)
  goto err;

 VAR_17 = VAR_15->pfvf_map;
 FUNC_5(&VAR_6->rsrc_lock);

 if (FUNC_2(VAR_17[VAR_9]) != VAR_14) {
  FUNC_6(&VAR_6->rsrc_lock);
  goto err;
 }




 if (VAR_8 == VAR_4) {
  VAR_18 = FUNC_11(VAR_6, VAR_11, FUNC_1(VAR_9));

  VAR_18 |= FUNC_0(50) | FUNC_0(49);
  FUNC_12(VAR_6, VAR_11, FUNC_1(VAR_9), VAR_18);


  VAR_12 = FUNC_10(VAR_6, VAR_11,
      FUNC_1(VAR_9), FUNC_0(49), 1);
  if (VAR_12) {
   FUNC_3(VAR_6->dev,
    "NIXLF%d: SMQ%d flush failed\n", VAR_10, VAR_9);
  }
 }


 FUNC_7(&VAR_15->schq, VAR_9);
 VAR_15->pfvf_map[VAR_9] = 0;
 FUNC_6(&VAR_6->rsrc_lock);
 return 0;
err:
 return VAR_3;
}
