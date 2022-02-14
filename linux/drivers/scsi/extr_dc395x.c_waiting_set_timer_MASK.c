
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expires; } ;
struct AdapterCtlBlk {int last_reset; TYPE_1__ waiting_timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct AdapterCtlBlk *VAR_2, unsigned long VAR_3)
{
 if (FUNC_2(&VAR_2->waiting_timer))
  return;
 if (FUNC_1(VAR_1 + VAR_3, VAR_2->last_reset - VAR_0 / 2))
  VAR_2->waiting_timer.expires =
      VAR_2->last_reset - VAR_0 / 2 + 1;
 else
  VAR_2->waiting_timer.expires = VAR_1 + VAR_3 + 1;
 FUNC_0(&VAR_2->waiting_timer);
}
