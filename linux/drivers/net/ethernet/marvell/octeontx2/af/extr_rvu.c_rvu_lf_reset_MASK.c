
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_block {int lfreset_reg; int addr; int implemented; } ;
struct rvu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rvu*,int ,int ,int,int) ;
 int FUNC_2 (struct rvu*,int ,int ,int) ;

int FUNC_3(struct rvu *VAR_0, struct rvu_block *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!VAR_1->implemented)
  return 0;

 FUNC_2(VAR_0, VAR_1->addr, VAR_1->lfreset_reg, VAR_2 | FUNC_0(12));
 VAR_3 = FUNC_1(VAR_0, VAR_1->addr, VAR_1->lfreset_reg, FUNC_0(12),
      1);
 return VAR_3;
}
