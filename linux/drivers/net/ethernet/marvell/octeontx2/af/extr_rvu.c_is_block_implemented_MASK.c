
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_hwinfo {struct rvu_block* block; } ;
struct rvu_block {int implemented; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(struct rvu_hwinfo *VAR_2, int VAR_3)
{
 struct rvu_block *VAR_4;

 if (VAR_3 < VAR_0 || VAR_3 >= VAR_1)
  return 0;

 VAR_4 = &VAR_2->block[VAR_3];
 return VAR_4->implemented;
}
