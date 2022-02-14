
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_hwinfo {int * block; } ;
struct rvu {struct rvu_hwinfo* hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct rvu*,int *) ;
 int FUNC_1 (struct rvu*,int ,int ) ;

int FUNC_2(struct rvu *VAR_1)
{
 struct rvu_hwinfo *VAR_2 = VAR_1->hw;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_0, 0);
 if (VAR_3 < 0)
  return 0;


 VAR_4 = FUNC_0(VAR_1, &VAR_2->block[VAR_3]);
 if (VAR_4)
  return VAR_4;

 return 0;
}
