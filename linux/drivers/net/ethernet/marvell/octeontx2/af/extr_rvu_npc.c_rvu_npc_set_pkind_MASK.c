
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu_pfvf {int dummy; } ;
struct rvu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct rvu*,int ,int ) ;
 int FUNC_2 (struct rvu*,int,int ,int) ;

void FUNC_3(struct rvu *VAR_1, int VAR_2, struct rvu_pfvf *VAR_3)
{
 int VAR_4;
 u64 VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_1, VAR_0, 0);
 if (VAR_4 < 0)
  return;


 VAR_5 = VAR_2 | 1ULL << 62;
 FUNC_2(VAR_1, VAR_4, FUNC_0(VAR_2, 0), VAR_5);
}
