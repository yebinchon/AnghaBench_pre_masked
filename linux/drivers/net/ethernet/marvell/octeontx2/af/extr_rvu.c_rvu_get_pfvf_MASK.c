
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_pfvf {int dummy; } ;
struct rvu {struct rvu_pfvf* pf; struct rvu_pfvf* hwvf; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct rvu*,int) ;
 size_t FUNC_1 (int) ;

struct rvu_pfvf *FUNC_2(struct rvu *VAR_1, int VAR_2)
{

 if (VAR_2 & VAR_0)
  return &VAR_1->hwvf[FUNC_0(VAR_1, VAR_2)];
 else
  return &VAR_1->pf[FUNC_1(VAR_2)];
}
