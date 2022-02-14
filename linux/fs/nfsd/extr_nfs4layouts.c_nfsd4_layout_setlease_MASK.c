
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs4_layout_stateid {size_t ls_layout_type; TYPE_1__* ls_file; } ;
struct file_lock {int fl_type; int fl_file; int fl_pid; struct nfs4_layout_stateid* fl_owner; int fl_end; int fl_flags; int * fl_lmops; } ;
struct TYPE_6__ {int tgid; } ;
struct TYPE_5__ {scalar_t__ disable_recalls; } ;
struct TYPE_4__ {int nf_file; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 struct file_lock* FUNC_1 () ;
 int FUNC_2 (struct file_lock*) ;
 int FUNC_3 (struct file_lock*) ;
 TYPE_2__** VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,struct file_lock**,int *) ;

__attribute__((used)) static int
FUNC_5(struct nfs4_layout_stateid *VAR_7)
{
 struct file_lock *VAR_8;
 int VAR_9;

 if (VAR_5[VAR_7->ls_layout_type]->disable_recalls)
  return 0;

 VAR_8 = FUNC_1();
 if (!VAR_8)
  return -VAR_0;
 FUNC_3(VAR_8);
 VAR_8->fl_lmops = &VAR_6;
 VAR_8->fl_flags = VAR_1;
 VAR_8->fl_type = VAR_2;
 VAR_8->fl_end = VAR_3;
 VAR_8->fl_owner = VAR_7;
 VAR_8->fl_pid = VAR_4->tgid;
 VAR_8->fl_file = VAR_7->ls_file->nf_file;

 VAR_9 = FUNC_4(VAR_8->fl_file, VAR_8->fl_type, &VAR_8, ((void*)0));
 if (VAR_9) {
  FUNC_2(VAR_8);
  return VAR_9;
 }
 FUNC_0(VAR_8 != ((void*)0));
 return 0;
}
