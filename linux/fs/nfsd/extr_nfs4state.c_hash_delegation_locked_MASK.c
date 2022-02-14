
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_file {int fi_delegations; int fi_lock; } ;
struct TYPE_2__ {int sc_type; int sc_count; struct nfs4_client* sc_client; } ;
struct nfs4_delegation {int dl_perclnt; int dl_perfile; TYPE_1__ dl_stid; } ;
struct nfs4_client {int cl_delegations; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct nfs4_client*,struct nfs4_file*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct nfs4_delegation *VAR_3, struct nfs4_file *VAR_4)
{
 struct nfs4_client *VAR_5 = VAR_3->dl_stid.sc_client;

 FUNC_1(&VAR_2);
 FUNC_1(&VAR_4->fi_lock);

 if (FUNC_2(VAR_5, VAR_4))
  return -VAR_0;
 FUNC_3(&VAR_3->dl_stid.sc_count);
 VAR_3->dl_stid.sc_type = VAR_1;
 FUNC_0(&VAR_3->dl_perfile, &VAR_4->fi_delegations);
 FUNC_0(&VAR_3->dl_perclnt, &VAR_5->cl_delegations);
 return 0;
}
