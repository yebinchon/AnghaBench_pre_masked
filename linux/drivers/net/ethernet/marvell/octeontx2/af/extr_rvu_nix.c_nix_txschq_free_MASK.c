
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rvu_hwinfo {int * block; } ;
struct rvu {int dev; int rsrc_lock; struct rvu_hwinfo* hw; } ;
struct TYPE_2__ {int max; } ;
struct nix_txsch {scalar_t__* pfvf_map; TYPE_1__ schq; } ;
struct nix_hw {struct nix_txsch* txsch; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int,...) ;
 struct nix_hw* FUNC_4 (struct rvu_hwinfo*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rvu*,int,int,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (struct rvu*,int ,int ) ;
 int FUNC_10 (struct rvu*,int *,int ,int ) ;
 int FUNC_11 (struct rvu*,int,int ,int,int) ;
 int FUNC_12 (struct rvu*,int,int ) ;
 int FUNC_13 (struct rvu*,int,int ,int) ;

__attribute__((used)) static int FUNC_14(struct rvu *VAR_9, u16 VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct rvu_hwinfo *VAR_16 = VAR_9->hw;
 struct nix_txsch *VAR_17;
 struct nix_hw *VAR_18;
 u64 VAR_19;

 VAR_11 = FUNC_9(VAR_9, VAR_0, VAR_10);
 if (VAR_11 < 0)
  return VAR_2;

 VAR_18 = FUNC_4(VAR_9->hw, VAR_11);
 if (!VAR_18)
  return -VAR_1;

 VAR_12 = FUNC_10(VAR_9, &VAR_16->block[VAR_11], VAR_10, 0);
 if (VAR_12 < 0)
  return VAR_2;


 FUNC_5(&VAR_9->rsrc_lock);
 for (VAR_13 = VAR_8; VAR_13 < VAR_4; VAR_13++) {
  if (VAR_13 != VAR_7 && VAR_13 != VAR_8)
   continue;

  VAR_17 = &VAR_18->txsch[VAR_13];
  for (VAR_14 = 0; VAR_14 < VAR_17->schq.max; VAR_14++) {
   if (FUNC_2(VAR_17->pfvf_map[VAR_14]) != VAR_10)
    continue;
   FUNC_7(VAR_9, VAR_11, VAR_13, VAR_14);
  }
 }


 VAR_17 = &VAR_18->txsch[VAR_5];
 for (VAR_14 = 0; VAR_14 < VAR_17->schq.max; VAR_14++) {
  if (FUNC_2(VAR_17->pfvf_map[VAR_14]) != VAR_10)
   continue;
  VAR_19 = FUNC_12(VAR_9, VAR_11, FUNC_1(VAR_14));

  VAR_19 |= FUNC_0(50) | FUNC_0(49);
  FUNC_13(VAR_9, VAR_11, FUNC_1(VAR_14), VAR_19);


  VAR_15 = FUNC_11(VAR_9, VAR_11,
       FUNC_1(VAR_14), FUNC_0(49), 1);
  if (VAR_15) {
   FUNC_3(VAR_9->dev,
    "NIXLF%d: SMQ%d flush failed\n", VAR_12, VAR_14);
  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {



  if (VAR_13 == VAR_6)
   continue;

  VAR_17 = &VAR_18->txsch[VAR_13];
  for (VAR_14 = 0; VAR_14 < VAR_17->schq.max; VAR_14++) {
   if (FUNC_2(VAR_17->pfvf_map[VAR_14]) != VAR_10)
    continue;
   FUNC_8(&VAR_17->schq, VAR_14);
   VAR_17->pfvf_map[VAR_14] = 0;
  }
 }
 FUNC_6(&VAR_9->rsrc_lock);


 FUNC_13(VAR_9, VAR_11, VAR_3, FUNC_0(12) | VAR_12);
 VAR_15 = FUNC_11(VAR_9, VAR_11, VAR_3, FUNC_0(12), 1);
 if (VAR_15)
  FUNC_3(VAR_9->dev, "NDC-TX sync failed for NIXLF %d\n", VAR_12);

 return 0;
}
