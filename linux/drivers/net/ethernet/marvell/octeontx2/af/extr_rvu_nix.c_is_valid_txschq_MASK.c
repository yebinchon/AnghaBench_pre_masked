
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct rvu {int rsrc_lock; int hw; } ;
struct TYPE_2__ {size_t max; } ;
struct nix_txsch {int * pfvf_map; TYPE_1__ schq; } ;
struct nix_hw {struct nix_txsch* txsch; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 struct nix_hw* FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (size_t) ;

__attribute__((used)) static bool FUNC_5(struct rvu *VAR_1, int VAR_2,
       int VAR_3, u16 VAR_4, u16 VAR_5)
{
 struct nix_txsch *VAR_6;
 struct nix_hw *VAR_7;
 u16 VAR_8;

 VAR_7 = FUNC_1(VAR_1->hw, VAR_2);
 if (!VAR_7)
  return 0;

 VAR_6 = &VAR_7->txsch[VAR_3];

 if (VAR_5 >= VAR_6->schq.max)
  return 0;

 FUNC_2(&VAR_1->rsrc_lock);
 VAR_8 = FUNC_0(VAR_6->pfvf_map[VAR_5]);
 FUNC_3(&VAR_1->rsrc_lock);


 if (VAR_3 == VAR_0 &&
     FUNC_4(VAR_8) != FUNC_4(VAR_4))
  return 0;

 if (VAR_3 != VAR_0 &&
     VAR_8 != VAR_4)
  return 0;

 return 1;
}
