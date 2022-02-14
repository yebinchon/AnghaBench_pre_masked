
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* attr; } ;
struct TYPE_9__ {TYPE_3__* plog; TYPE_2__ ioc; } ;
struct bfad_s {int bfad_lock; TYPE_4__ bfa; } ;
struct bfa_vhba_attr_s {int path_tov; int io_profile; scalar_t__ plog_enabled; int nwwn; int pwwn; } ;
struct bfa_bsg_vhba_attr_s {int status; struct bfa_vhba_attr_s attr; } ;
typedef scalar_t__ bfa_boolean_t ;
struct TYPE_8__ {scalar_t__ plog_enabled; } ;
struct TYPE_6__ {int nwwn; int pwwn; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(struct bfad_s *VAR_1, void *VAR_2)
{
 struct bfa_bsg_vhba_attr_s *VAR_3 =
   (struct bfa_bsg_vhba_attr_s *)VAR_2;
 struct bfa_vhba_attr_s *VAR_4 = &VAR_3->attr;
 unsigned long VAR_5;

 FUNC_2(&VAR_1->bfad_lock, VAR_5);
 VAR_4->pwwn = VAR_1->bfa.ioc.attr->pwwn;
 VAR_4->nwwn = VAR_1->bfa.ioc.attr->nwwn;
 VAR_4->plog_enabled = (bfa_boolean_t)VAR_1->bfa.plog->plog_enabled;
 VAR_4->io_profile = FUNC_0(&VAR_1->bfa);
 VAR_4->path_tov = FUNC_1(&VAR_1->bfa);
 VAR_3->status = VAR_0;
 FUNC_3(&VAR_1->bfad_lock, VAR_5);
 return 0;
}
