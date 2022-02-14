
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_4__ {int dbg_fwsave_once; } ;
struct TYPE_5__ {TYPE_1__ ioc; } ;
struct bfad_s {int trcmod; TYPE_3__ plog_buf; int bfad_lock; TYPE_2__ bfa; } ;
struct bfa_bsg_gen_s {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct bfad_s *VAR_6, void *VAR_7, unsigned int VAR_8)
{
 struct bfa_bsg_gen_s *VAR_9 = (struct bfa_bsg_gen_s *)VAR_7;
 unsigned long VAR_10;

 if (VAR_8 == VAR_2) {
  FUNC_2(&VAR_6->bfad_lock, VAR_10);
  VAR_6->bfa.ioc.dbg_fwsave_once = VAR_1;
  FUNC_3(&VAR_6->bfad_lock, VAR_10);
 } else if (VAR_8 == VAR_3)
  VAR_6->plog_buf.head = VAR_6->plog_buf.tail = 0;
 else if (VAR_8 == VAR_4)
  FUNC_0(VAR_6->trcmod);
 else if (VAR_8 == VAR_5)
  FUNC_1(VAR_6->trcmod);

 VAR_9->status = VAR_0;
 return 0;
}
