
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max; } ;
struct rvu_block {TYPE_2__ lf; } ;
struct rvu {TYPE_1__* hw; } ;
struct TYPE_3__ {struct rvu_block* block; } ;


 int VAR_0 ;
 int FUNC_0 (struct rvu*,int ,int ) ;

int FUNC_1(struct rvu *VAR_1)
{
 struct rvu_block *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0, 0);
 if (VAR_3 < 0)
  return 0;
 VAR_2 = &VAR_1->hw->block[VAR_3];
 return VAR_2->lf.max;
}
