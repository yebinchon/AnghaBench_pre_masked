
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct raw3215_info {int flags; int cdev; TYPE_1__ timer; scalar_t__ queued_write; scalar_t__ queued_read; int port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 struct raw3215_info* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 struct raw3215_info* VAR_4 ;
 int FUNC_3 (struct raw3215_info*) ;
 int FUNC_4 (struct raw3215_info*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_6)
{
 struct raw3215_info *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_5);
 unsigned long VAR_8;

 FUNC_5(FUNC_2(VAR_7->cdev), VAR_8);
 VAR_7->flags &= ~VAR_1;
 if (!FUNC_7(&VAR_7->port)) {
  FUNC_3(VAR_7);
  FUNC_4(VAR_7);
  if ((VAR_7->queued_read || VAR_7->queued_write) &&
      !(VAR_7->flags & VAR_2) &&
      !(VAR_7->flags & VAR_1)) {
   VAR_7->timer.expires = VAR_0 + VAR_3;
   FUNC_0(&VAR_7->timer);
   VAR_7->flags |= VAR_1;
  }
 }
 FUNC_6(FUNC_2(VAR_7->cdev), VAR_8);
}
