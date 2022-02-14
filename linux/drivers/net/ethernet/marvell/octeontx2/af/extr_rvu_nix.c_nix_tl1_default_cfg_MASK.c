
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct rvu {int rsrc_lock; int hw; } ;
struct nix_hw {TYPE_1__* txsch; } ;
struct TYPE_2__ {int * pfvf_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct nix_hw* FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct rvu*,int ,int) ;
 int FUNC_10 (struct rvu*,int,int,int*,int*) ;
 int FUNC_11 (struct rvu*,int,int,int) ;

__attribute__((used)) static int
FUNC_12(struct rvu *VAR_7, u16 VAR_8)
{
 u16 VAR_9[2], VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14 = 0;
 u16 VAR_15, VAR_16;
 struct nix_hw *VAR_17;
 u64 VAR_18, VAR_19;
 u32 *VAR_20;

 VAR_12 = FUNC_9(VAR_7, VAR_0, VAR_8);
 if (VAR_12 < 0)
  return VAR_2;

 VAR_17 = FUNC_6(VAR_7->hw, VAR_12);
 if (!VAR_17)
  return -VAR_1;

 VAR_20 = VAR_17->txsch[VAR_4].pfvf_map;

 FUNC_7(&VAR_7->rsrc_lock);

 VAR_14 = FUNC_10(VAR_7, VAR_12,
    VAR_8, VAR_9, &VAR_10);
 if (VAR_14)
  goto unlock;

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  VAR_11 = VAR_9[VAR_13];
  VAR_15 = FUNC_5(VAR_20[VAR_11]);
  VAR_16 = FUNC_4(VAR_20[VAR_11]);


  if (VAR_16 & VAR_3)
   continue;


  VAR_18 = FUNC_2(VAR_11);
  VAR_19 = (VAR_5 << 1);
  FUNC_11(VAR_7, VAR_12, VAR_18, VAR_19);
  VAR_18 = FUNC_1(VAR_11);
  VAR_19 = VAR_6;
  FUNC_11(VAR_7, VAR_12, VAR_18, VAR_19);
  VAR_18 = FUNC_0(VAR_11);
  VAR_19 = 0;
  FUNC_11(VAR_7, VAR_12, VAR_18, VAR_19);

  VAR_16 |= VAR_3;
  VAR_20[VAR_11] = FUNC_3(VAR_15, VAR_16);
 }
unlock:
 FUNC_8(&VAR_7->rsrc_lock);
 return VAR_14;
}
