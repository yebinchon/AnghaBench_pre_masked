
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rvu_pfvf {int dummy; } ;
struct rvu {int dummy; } ;


 int FUNC_0 (struct rvu*,int ) ;
 struct rvu_pfvf* FUNC_1 (struct rvu*,int ) ;
 int FUNC_2 (struct rvu_pfvf*,int) ;

bool FUNC_3(struct rvu *VAR_0, u16 VAR_1, int VAR_2)
{
 struct rvu_pfvf *VAR_3;

 if (!FUNC_0(VAR_0, VAR_1))
  return 0;

 VAR_3 = FUNC_1(VAR_0, VAR_1);


 if (!FUNC_2(VAR_3, VAR_2))
  return 0;

 return 1;
}
