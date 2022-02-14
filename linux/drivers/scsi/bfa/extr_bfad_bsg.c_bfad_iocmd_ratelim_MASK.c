
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfad_s {int bfad_lock; int bfa; } ;
struct TYPE_2__ {scalar_t__ topology; scalar_t__ trl_def_speed; int ratelimit; } ;
struct bfa_fcport_s {scalar_t__ topology; TYPE_1__ cfg; } ;
struct bfa_bsg_gen_s {int status; } ;


 int VAR_0 ;
 struct bfa_fcport_s* FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct bfad_s *VAR_9, unsigned int VAR_10, void *VAR_11)
{
 struct bfa_bsg_gen_s *VAR_12 = (struct bfa_bsg_gen_s *)VAR_11;
 struct bfa_fcport_s *VAR_13 = FUNC_0(&VAR_9->bfa);
 unsigned long VAR_14;

 FUNC_1(&VAR_9->bfad_lock, VAR_14);

 if ((VAR_13->cfg.topology == VAR_3) &&
  (VAR_13->topology == VAR_3))
  VAR_12->status = VAR_5;
 else {
  if (VAR_10 == VAR_8)
   VAR_13->cfg.ratelimit = VAR_6;
  else if (VAR_10 == VAR_7)
   VAR_13->cfg.ratelimit = VAR_0;

  if (VAR_13->cfg.trl_def_speed == VAR_2)
   VAR_13->cfg.trl_def_speed = VAR_1;

  VAR_12->status = VAR_4;
 }

 FUNC_2(&VAR_9->bfad_lock, VAR_14);

 return 0;
}
