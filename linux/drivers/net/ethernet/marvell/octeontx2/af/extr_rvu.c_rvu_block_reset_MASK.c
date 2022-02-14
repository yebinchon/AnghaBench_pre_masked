
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rvu_block {int implemented; } ;
struct rvu {TYPE_1__* hw; } ;
struct TYPE_2__ {struct rvu_block* block; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rvu*,int,int ,int ,int) ;
 int FUNC_2 (struct rvu*,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rvu *VAR_0, int VAR_1, u64 VAR_2)
{
 struct rvu_block *VAR_3 = &VAR_0->hw->block[VAR_1];

 if (!VAR_3->implemented)
  return;

 FUNC_2(VAR_0, VAR_1, VAR_2, FUNC_0(0));
 FUNC_1(VAR_0, VAR_1, VAR_2, FUNC_0(63), 1);
}
