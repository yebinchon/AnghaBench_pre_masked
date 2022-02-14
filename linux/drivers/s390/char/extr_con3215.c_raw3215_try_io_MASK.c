
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct raw3215_info {int flags; TYPE_2__ timer; TYPE_1__* queued_write; int * queued_read; int port; } ;
struct TYPE_3__ {scalar_t__ delayable; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct raw3215_info*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct raw3215_info *VAR_5)
{
 if (!FUNC_2(&VAR_5->port) || FUNC_3(&VAR_5->port))
  return;
 if (VAR_5->queued_read != ((void*)0))
  FUNC_1(VAR_5);
 else if (VAR_5->queued_write != ((void*)0)) {
  if ((VAR_5->queued_write->delayable == 0) ||
      (VAR_5->flags & VAR_0)) {

   FUNC_1(VAR_5);
  }
 }
 if ((VAR_5->queued_read || VAR_5->queued_write) &&
     !(VAR_5->flags & VAR_3) &&
     !(VAR_5->flags & VAR_2)) {
  VAR_5->timer.expires = VAR_1 + VAR_4;
  FUNC_0(&VAR_5->timer);
  VAR_5->flags |= VAR_2;
 }
}
