
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rvu_pfvf {int nixlf; } ;
struct rvu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rvu*,int ,int ) ;
 struct rvu_pfvf* FUNC_1 (struct rvu*,int ) ;

bool FUNC_2(struct rvu *VAR_1, u16 VAR_2)
{
 struct rvu_pfvf *VAR_3 = FUNC_1(VAR_1, VAR_2);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2);
 if (!VAR_3->nixlf || VAR_4 < 0)
  return 0;
 return 1;
}
