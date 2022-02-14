
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int bfad_lock; int bfa; } ;
struct bfa_trunk_attr_s {int dummy; } ;
struct bfa_fcport_trunk_s {int attr; } ;
struct TYPE_3__ {scalar_t__ topology; } ;
struct bfa_fcport_s {scalar_t__ topology; TYPE_1__ cfg; struct bfa_fcport_trunk_s trunk; } ;
struct TYPE_4__ {int port_id; } ;
struct bfa_bsg_trunk_attr_s {int status; TYPE_2__ attr; } ;


 struct bfa_fcport_s* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(struct bfad_s *VAR_3, void *VAR_4)
{
 struct bfa_bsg_trunk_attr_s *VAR_5 = (struct bfa_bsg_trunk_attr_s *)VAR_4;
 struct bfa_fcport_s *VAR_6 = FUNC_0(&VAR_3->bfa);
 struct bfa_fcport_trunk_s *VAR_7 = &VAR_6->trunk;
 unsigned long VAR_8;

 FUNC_3(&VAR_3->bfad_lock, VAR_8);
 if ((VAR_6->cfg.topology == VAR_0) ||
  (VAR_6->topology == VAR_0))
  VAR_5->status = VAR_2;
 else {
  FUNC_2((void *)&VAR_5->attr, (void *)&VAR_7->attr,
   sizeof(struct bfa_trunk_attr_s));
  VAR_5->attr.port_id = FUNC_1(&VAR_3->bfa);
  VAR_5->status = VAR_1;
 }
 FUNC_4(&VAR_3->bfad_lock, VAR_8);

 return 0;
}
