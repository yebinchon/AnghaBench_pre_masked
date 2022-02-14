
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct status_block {scalar_t__ status_idx; } ;
struct TYPE_2__ {struct status_block* msi; } ;
struct bnx2_napi {scalar_t__ last_status_idx; int napi; TYPE_1__ status_blk; struct bnx2* bp; } ;
struct bnx2 {int intr_sem; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t
FUNC_6(int VAR_7, void *VAR_8)
{
 struct bnx2_napi *VAR_9 = VAR_8;
 struct bnx2 *VAR_10 = VAR_9->bp;
 struct status_block *VAR_11 = VAR_9->status_blk.msi;







 if ((VAR_11->status_idx == VAR_9->last_status_idx) &&
     (FUNC_0(VAR_10, VAR_3) &
      VAR_4))
  return VAR_6;

 FUNC_1(VAR_10, VAR_0,
  VAR_2 |
  VAR_1);




 FUNC_0(VAR_10, VAR_0);


 if (FUNC_5(FUNC_3(&VAR_10->intr_sem) != 0))
  return VAR_5;

 if (FUNC_4(&VAR_9->napi)) {
  VAR_9->last_status_idx = VAR_11->status_idx;
  FUNC_2(&VAR_9->napi);
 }

 return VAR_5;
}
