
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct oxu_hcd {int reclaim_ready; int lock; int async; int actions; TYPE_1__* regs; scalar_t__ reclaim; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxu_hcd*) ;
 struct oxu_hcd* FUNC_1 (int ,struct timer_list*,int ) ;
 struct oxu_hcd* VAR_2 ;
 int FUNC_2 (struct oxu_hcd*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct oxu_hcd*,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int VAR_3 ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_4)
{
 struct oxu_hcd *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 unsigned long VAR_6;

 FUNC_4(&VAR_5->lock, VAR_6);


 if (VAR_5->reclaim) {
  u32 VAR_7 = FUNC_3(&VAR_5->regs->status);
  if (VAR_7 & VAR_0) {
   FUNC_2(VAR_5, "lost IAA\n");
   FUNC_8(VAR_0, &VAR_5->regs->status);
   VAR_5->reclaim_ready = 1;
  }
 }


 if (FUNC_7(VAR_1, &VAR_5->actions))
  FUNC_6(VAR_5, VAR_5->async);


 FUNC_0(VAR_5);

 FUNC_5(&VAR_5->lock, VAR_6);
}
