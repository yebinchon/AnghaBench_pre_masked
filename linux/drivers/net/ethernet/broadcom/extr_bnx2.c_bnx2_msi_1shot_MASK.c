
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msi; } ;
struct bnx2_napi {int napi; TYPE_1__ status_blk; struct bnx2* bp; } ;
struct bnx2 {int intr_sem; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_1, void *VAR_2)
{
 struct bnx2_napi *VAR_3 = VAR_2;
 struct bnx2 *VAR_4 = VAR_3->bp;

 FUNC_2(VAR_3->status_blk.msi);


 if (FUNC_3(FUNC_0(&VAR_4->intr_sem) != 0))
  return VAR_0;

 FUNC_1(&VAR_3->napi);

 return VAR_0;
}
