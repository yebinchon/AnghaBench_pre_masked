
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef void* u16 ;
struct TYPE_2__ {int u64; } ;
struct bfa_trc_s {int timestamp; TYPE_1__ data; void* line; void* fileno; } ;
struct bfa_trc_mod_s {int tail; int head; scalar_t__ stopped; struct bfa_trc_s* trc; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_trc_mod_s*) ;

void
FUNC_1(struct bfa_trc_mod_s *VAR_1, int VAR_2, int VAR_3, u64 VAR_4)
{
 int VAR_5 = VAR_1->tail;
 struct bfa_trc_s *VAR_6 = &VAR_1->trc[VAR_5];

 if (VAR_1->stopped)
  return;

 VAR_6->fileno = (u16) VAR_2;
 VAR_6->line = (u16) VAR_3;
 VAR_6->data.u64 = VAR_4;
 VAR_6->timestamp = FUNC_0(VAR_1);

 VAR_1->tail = (VAR_1->tail + 1) & (VAR_0 - 1);
 if (VAR_1->tail == VAR_1->head)
  VAR_1->head = (VAR_1->head + 1) & (VAR_0 - 1);
}
