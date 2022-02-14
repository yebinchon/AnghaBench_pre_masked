
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct rvu_pfvf {int cgx_lmac; } ;
struct rvu {int cgx_cnt_max; int hw; } ;
struct TYPE_2__ {int max; } ;
struct nix_txsch {TYPE_1__ schq; scalar_t__* pfvf_map; } ;
struct nix_hw {struct nix_txsch* txsch; } ;


 int VAR_0 ;
 int VAR_1 ;


 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_4 ;
 struct nix_hw* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct rvu*,int,size_t,int) ;
 int FUNC_4 (struct rvu*,int,size_t,int) ;
 int FUNC_5 (int ,int*,int*) ;
 int FUNC_6 (int) ;
 struct rvu_pfvf* FUNC_7 (struct rvu*,int) ;

__attribute__((used)) static int
FUNC_8(struct rvu *VAR_5, int VAR_6, u16 VAR_7,
    u16 *VAR_8, u16 *VAR_9)
{
 struct nix_txsch *VAR_10;
 struct nix_hw *VAR_11;
 struct rvu_pfvf *VAR_12;
 u8 VAR_13, VAR_14;
 u16 VAR_15;
 u32 *VAR_16;
 int VAR_17, VAR_18;

 VAR_11 = FUNC_1(VAR_5->hw, VAR_6);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_7(VAR_5, VAR_7);
 VAR_10 = &VAR_11->txsch[VAR_2];
 VAR_16 = VAR_10->pfvf_map;
 VAR_17 = FUNC_6(VAR_7);


 VAR_18 = FUNC_2(VAR_7) ? 128 : 129;

 switch (VAR_18) {
 case 129:
  FUNC_5(VAR_12->cgx_lmac, &VAR_13, &VAR_14);
  VAR_15 = (VAR_13 * VAR_1 + VAR_14) * 2;
  break;
 case 128:
  VAR_15 = VAR_5->cgx_cnt_max * VAR_1 * 2;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_15 + 1 > VAR_10->schq.max)
  return -VAR_0;


 if (VAR_16[VAR_15] == VAR_4) {
  VAR_16[VAR_15] =
   FUNC_0((VAR_17 << VAR_3), 0);
  VAR_16[VAR_15 + 1] =
   FUNC_0((VAR_17 << VAR_3), 0);


  FUNC_3(VAR_5, VAR_6,
         VAR_2, VAR_15);
  FUNC_4(VAR_5, VAR_6,
         VAR_2, VAR_15);

  FUNC_3(VAR_5, VAR_6,
         VAR_2, VAR_15 + 1);
  FUNC_4(VAR_5, VAR_6,
         VAR_2, VAR_15 + 1);
 }

 if (VAR_8 && VAR_9) {
  VAR_8[0] = VAR_15;
  VAR_8[1] = VAR_15 + 1;
  *VAR_9 = 2;
 }

 return 0;
}
