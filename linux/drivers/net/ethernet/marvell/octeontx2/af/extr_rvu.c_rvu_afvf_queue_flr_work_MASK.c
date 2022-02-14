
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rvu {TYPE_2__* flr_wrk; int flr_wq; TYPE_1__* hw; } ;
struct TYPE_4__ {int work; } ;
struct TYPE_3__ {int total_pfs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct rvu*,int ) ;
 int FUNC_5 (struct rvu*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rvu *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 u64 VAR_6;

 if (VAR_1 >= 64)
  VAR_5 = 1;

 VAR_6 = FUNC_4(VAR_0, FUNC_1(VAR_5));
 if (!VAR_6)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!(VAR_6 & FUNC_0(VAR_4)))
   continue;
  VAR_3 = VAR_4 + VAR_1 + VAR_0->hw->total_pfs;
  FUNC_3(VAR_0->flr_wq, &VAR_0->flr_wrk[VAR_3].work);

  FUNC_5(VAR_0, FUNC_1(VAR_5), FUNC_0(VAR_4));
  FUNC_5(VAR_0, FUNC_2(VAR_5), FUNC_0(VAR_4));
 }
}
