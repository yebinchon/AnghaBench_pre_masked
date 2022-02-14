
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sc_file; } ;
struct nfs4_delegation {TYPE_3__ dl_stid; } ;
struct file_lock {int fl_file; int fl_pid; scalar_t__ fl_owner; int fl_end; int fl_type; int fl_flags; int * fl_lmops; } ;
typedef scalar_t__ fl_owner_t ;
struct TYPE_8__ {int tgid; } ;
struct TYPE_6__ {TYPE_1__* fi_deleg_file; } ;
struct TYPE_5__ {int nf_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 struct file_lock* FUNC_0 () ;
 int VAR_6 ;

__attribute__((used)) static struct file_lock *FUNC_1(struct nfs4_delegation *VAR_7,
      int VAR_8)
{
 struct file_lock *VAR_9;

 VAR_9 = FUNC_0();
 if (!VAR_9)
  return ((void*)0);
 VAR_9->fl_lmops = &VAR_6;
 VAR_9->fl_flags = VAR_0;
 VAR_9->fl_type = VAR_8 == VAR_3? VAR_1: VAR_2;
 VAR_9->fl_end = VAR_4;
 VAR_9->fl_owner = (fl_owner_t)VAR_7;
 VAR_9->fl_pid = VAR_5->tgid;
 VAR_9->fl_file = VAR_7->dl_stid.sc_file->fi_deleg_file->nf_file;
 return VAR_9;
}
