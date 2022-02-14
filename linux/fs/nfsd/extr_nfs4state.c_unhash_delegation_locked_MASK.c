
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_file {int fi_lock; } ;
struct TYPE_2__ {int sc_type; struct nfs4_file* sc_file; } ;
struct nfs4_delegation {int dl_perfile; int dl_recall_lru; int dl_perclnt; int dl_time; TYPE_1__ dl_stid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_5(struct nfs4_delegation *VAR_2)
{
 struct nfs4_file *VAR_3 = VAR_2->dl_stid.sc_file;

 FUNC_2(&VAR_1);

 if (FUNC_1(&VAR_2->dl_perfile))
  return 0;

 VAR_2->dl_stid.sc_type = VAR_0;

 ++VAR_2->dl_time;
 FUNC_3(&VAR_3->fi_lock);
 FUNC_0(&VAR_2->dl_perclnt);
 FUNC_0(&VAR_2->dl_recall_lru);
 FUNC_0(&VAR_2->dl_perfile);
 FUNC_4(&VAR_3->fi_lock);
 return 1;
}
