
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct nfs4_file* sc_file; } ;
struct nfs4_ol_stateid {int st_perstateowner; int st_perfile; TYPE_3__* st_stateowner; TYPE_1__ st_stid; } ;
struct nfs4_file {int fi_lock; } ;
struct TYPE_6__ {TYPE_2__* so_client; } ;
struct TYPE_5__ {int cl_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct nfs4_ol_stateid *VAR_0)
{
 struct nfs4_file *VAR_1 = VAR_0->st_stid.sc_file;

 FUNC_3(&VAR_0->st_stateowner->so_client->cl_lock);

 if (FUNC_2(&VAR_0->st_perfile))
  return 0;

 FUNC_4(&VAR_1->fi_lock);
 FUNC_1(&VAR_0->st_perfile);
 FUNC_5(&VAR_1->fi_lock);
 FUNC_0(&VAR_0->st_perstateowner);
 return 1;
}
