
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnx2_napi {scalar_t__ last_status_idx; } ;
struct bnx2 {scalar_t__ idle_chk_status_idx; TYPE_1__* irq_tbl; struct bnx2_napi* bnx2_napi; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 scalar_t__ FUNC_2 (struct bnx2_napi*) ;
 int FUNC_3 (int ,struct bnx2_napi*) ;

__attribute__((used)) static void
FUNC_4(struct bnx2 *VAR_2)
{
 struct bnx2_napi *VAR_3 = &VAR_2->bnx2_napi[0];
 u32 VAR_4;

 if (FUNC_2(VAR_3)) {
  VAR_4 = FUNC_0(VAR_2, VAR_0);
  if (!(VAR_4 & VAR_1))
   return;

  if (VAR_3->last_status_idx == VAR_2->idle_chk_status_idx) {
   FUNC_1(VAR_2, VAR_0, VAR_4 &
    ~VAR_1);
   FUNC_1(VAR_2, VAR_0, VAR_4);
   FUNC_3(VAR_2->irq_tbl[0].vector, VAR_3);
  }
 }

 VAR_2->idle_chk_status_idx = VAR_3->last_status_idx;
}
