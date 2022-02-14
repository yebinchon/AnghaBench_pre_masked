
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu_hwinfo {struct rvu_block* block; } ;
struct rvu_block {int implemented; } ;
struct rvu {struct rvu_hwinfo* hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rvu*,int ) ;

__attribute__((used)) static void FUNC_3(struct rvu *VAR_1)
{
 struct rvu_hwinfo *VAR_2 = VAR_1->hw;
 struct rvu_block *VAR_3;
 int VAR_4;
 u64 VAR_5;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->block[VAR_4];
  VAR_5 = FUNC_2(VAR_1, FUNC_1(VAR_4));
  if (VAR_5 & FUNC_0(11))
   VAR_3->implemented = 1;
 }
}
