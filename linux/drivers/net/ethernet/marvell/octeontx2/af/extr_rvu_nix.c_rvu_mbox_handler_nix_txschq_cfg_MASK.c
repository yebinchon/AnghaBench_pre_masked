
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct rvu_hwinfo {int * block; } ;
struct rvu {int rsrc_lock; struct rvu_hwinfo* hw; } ;
struct TYPE_2__ {size_t pcifunc; } ;
struct nix_txschq_config {size_t lvl; int num_regs; int* reg; int* regval; TYPE_1__ hdr; } ;
struct nix_txsch {int lvl; int * pfvf_map; } ;
struct nix_hw {struct nix_txsch* txsch; } ;
struct msg_rsp {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t FUNC_4 (int,int ) ;
 int VAR_10 ;
 int FUNC_5 (size_t,size_t) ;
 size_t FUNC_6 (int ) ;
 size_t FUNC_7 (int ) ;
 struct nix_hw* FUNC_8 (struct rvu_hwinfo*,int) ;
 int FUNC_9 (struct rvu*,size_t,int,int ,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct rvu*,size_t) ;
 int FUNC_13 (struct rvu*,int ,size_t) ;
 int FUNC_14 (struct rvu*,int *,size_t,int ) ;
 int FUNC_15 (struct rvu*,int,int,int,int) ;
 int FUNC_16 (struct rvu*,int,int,int) ;

int FUNC_17(struct rvu *VAR_11,
        struct nix_txschq_config *VAR_12,
        struct msg_rsp *VAR_13)
{
 u16 VAR_14, VAR_15 = VAR_12->hdr.pcifunc;
 struct rvu_hwinfo *VAR_16 = VAR_11->hw;
 u64 VAR_17, VAR_18, VAR_19;
 struct nix_txsch *VAR_20;
 u16 VAR_21, VAR_22;
 struct nix_hw *VAR_23;
 int VAR_24, VAR_25, VAR_26;
 u32 *VAR_27;
 int VAR_28;

 if (VAR_12->lvl >= VAR_7 ||
     VAR_12->num_regs > VAR_2)
  return VAR_4;

 VAR_24 = FUNC_13(VAR_11, VAR_0, VAR_15);
 if (VAR_24 < 0)
  return VAR_3;

 VAR_23 = FUNC_8(VAR_11->hw, VAR_24);
 if (!VAR_23)
  return -VAR_1;

 VAR_28 = FUNC_14(VAR_11, &VAR_16->block[VAR_24], VAR_15, 0);
 if (VAR_28 < 0)
  return VAR_3;

 VAR_20 = &VAR_23->txsch[VAR_12->lvl];
 VAR_27 = VAR_20->pfvf_map;




 if (VAR_15 & VAR_9 &&
     VAR_12->lvl == VAR_8) {
  return FUNC_12(VAR_11, VAR_15);
 }

 for (VAR_25 = 0; VAR_25 < VAR_12->num_regs; VAR_25++) {
  VAR_17 = VAR_12->reg[VAR_25];
  VAR_18 = VAR_12->regval[VAR_25];
  VAR_19 = VAR_17 & 0xFFFF;

  if (!FUNC_9(VAR_11, VAR_15, VAR_24,
         VAR_20->lvl, VAR_17, VAR_18))
   return VAR_4;


  if (VAR_19 == FUNC_1(0)) {
   VAR_28 = FUNC_14(VAR_11, &VAR_16->block[VAR_24],
        VAR_15, 0);
   VAR_18 &= ~(0x7FULL << 24);
   VAR_18 |= ((u64)VAR_28 << 24);
  }


  if (VAR_19 >= FUNC_3(0) &&
      VAR_19 <= FUNC_2(0)) {
   VAR_14 = FUNC_4(VAR_17, VAR_10);

   FUNC_10(&VAR_11->rsrc_lock);

   VAR_21 = FUNC_7(VAR_27[VAR_14]);
   VAR_22 = FUNC_6(VAR_27[VAR_14]);

   VAR_22 |= VAR_6;
   VAR_27[VAR_14] = FUNC_5(VAR_21, VAR_22);
   FUNC_11(&VAR_11->rsrc_lock);
  }

  FUNC_16(VAR_11, VAR_24, VAR_17, VAR_18);


  if (VAR_19 == FUNC_1(0) &&
      (VAR_18 & FUNC_0(49))) {
   VAR_26 = FUNC_15(VAR_11, VAR_24,
        VAR_17, FUNC_0(49), 1);
   if (VAR_26)
    return VAR_5;
  }
 }
 return 0;
}
