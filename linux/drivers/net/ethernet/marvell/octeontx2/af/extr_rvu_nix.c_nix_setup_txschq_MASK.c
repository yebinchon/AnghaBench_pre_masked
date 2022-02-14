
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rvu {int dev; } ;
struct TYPE_2__ {int max; } ;
struct nix_txsch {int lvl; TYPE_1__ schq; int pfvf_map; } ;
struct nix_hw {struct nix_txsch* txsch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;
 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct rvu*,int,int) ;

__attribute__((used)) static int FUNC_4(struct rvu *VAR_9, struct nix_hw *VAR_10, int VAR_11)
{
 struct nix_txsch *VAR_12;
 u64 VAR_13, VAR_14;
 int VAR_15, VAR_16;




 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
  VAR_12 = &VAR_10->txsch[VAR_16];
  VAR_12->lvl = VAR_16;
  switch (VAR_16) {
  case 132:
   VAR_14 = VAR_2;
   break;
  case 128:
   VAR_14 = VAR_6;
   break;
  case 129:
   VAR_14 = VAR_5;
   break;
  case 130:
   VAR_14 = VAR_4;
   break;
  case 131:
   VAR_14 = VAR_3;
   break;
  }
  VAR_13 = FUNC_3(VAR_9, VAR_11, VAR_14);
  VAR_12->schq.max = VAR_13 & 0xFFFF;
  VAR_15 = FUNC_2(&VAR_12->schq);
  if (VAR_15)
   return VAR_15;




  VAR_12->pfvf_map = FUNC_0(VAR_9->dev, VAR_12->schq.max,
            sizeof(u32), VAR_1);
  if (!VAR_12->pfvf_map)
   return -VAR_0;
  FUNC_1(VAR_12->pfvf_map, VAR_8, VAR_12->schq.max * sizeof(u32));
 }
 return 0;
}
