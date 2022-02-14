
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_file {int fi_had_conflict; int fi_lock; } ;
struct TYPE_2__ {struct nfs4_file* sc_file; } ;
struct nfs4_delegation {TYPE_1__ dl_stid; } ;
struct file_lock {scalar_t__ fl_break_time; scalar_t__ fl_owner; } ;


 int FUNC_0 (struct nfs4_delegation*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(struct file_lock *VAR_0)
{
 bool VAR_1 = 0;
 struct nfs4_delegation *VAR_2 = (struct nfs4_delegation *)VAR_0->fl_owner;
 struct nfs4_file *VAR_3 = VAR_2->dl_stid.sc_file;






 VAR_0->fl_break_time = 0;

 FUNC_1(&VAR_3->fi_lock);
 VAR_3->fi_had_conflict = 1;
 FUNC_0(VAR_2);
 FUNC_2(&VAR_3->fi_lock);
 return VAR_1;
}
