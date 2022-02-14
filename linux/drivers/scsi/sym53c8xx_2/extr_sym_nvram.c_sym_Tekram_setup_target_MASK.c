
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sym_tcb {int usrtags; int usr_width; int usr_period; int usrflags; } ;
struct Tekram_target {int flags; int sync_index; } ;
struct TYPE_3__ {int max_tags_index; struct Tekram_target* target; } ;
typedef TYPE_1__ Tekram_nvram ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void
FUNC_0(struct sym_tcb *VAR_6, int VAR_7, Tekram_nvram *VAR_8)
{
 struct Tekram_target *VAR_9 = &VAR_8->target[VAR_7];

 if (VAR_9->flags & VAR_3) {
  VAR_6->usrtags = 2 << VAR_8->max_tags_index;
 }

 if (VAR_9->flags & VAR_1)
  VAR_6->usrflags |= VAR_0;

 if (VAR_9->flags & VAR_2)
  VAR_6->usr_period = VAR_5[VAR_9->sync_index & 0xf];
 VAR_6->usr_width = (VAR_9->flags & VAR_4) ? 1 : 0;
}
