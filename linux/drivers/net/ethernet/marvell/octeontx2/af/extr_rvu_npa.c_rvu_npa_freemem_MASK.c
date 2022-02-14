
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_hwinfo {struct rvu_block* block; } ;
struct rvu_block {int aq; } ;
struct rvu {struct rvu_hwinfo* hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct rvu*,int ) ;
 int FUNC_1 (struct rvu*,int ,int ) ;

void FUNC_2(struct rvu *VAR_1)
{
 struct rvu_hwinfo *VAR_2 = VAR_1->hw;
 struct rvu_block *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_0, 0);
 if (VAR_4 < 0)
  return;

 VAR_3 = &VAR_2->block[VAR_4];
 FUNC_0(VAR_1, VAR_3->aq);
}
