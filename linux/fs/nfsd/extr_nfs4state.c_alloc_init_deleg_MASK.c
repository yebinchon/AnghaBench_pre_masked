
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_fh {int fh_handle; } ;
struct nfs4_file {int dummy; } ;
struct TYPE_3__ {int si_generation; } ;
struct TYPE_4__ {struct nfs4_file* sc_file; int sc_client; TYPE_1__ sc_stateid; } ;
struct nfs4_delegation {int dl_retries; TYPE_2__ dl_stid; int dl_recall; int dl_type; struct nfs4_clnt_odstate* dl_clnt_odstate; int dl_recall_lru; int dl_perclnt; int dl_perfile; } ;
struct nfs4_clnt_odstate {int dummy; } ;
struct nfs4_client {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 long FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 struct nfs4_delegation* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct nfs4_clnt_odstate*) ;
 int FUNC_7 (struct nfs4_file*) ;
 long VAR_3 ;
 int FUNC_8 (struct nfs4_client*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *,int ,int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static struct nfs4_delegation *
FUNC_10(struct nfs4_client *VAR_7, struct nfs4_file *VAR_8,
   struct svc_fh *VAR_9,
   struct nfs4_clnt_odstate *VAR_10)
{
 struct nfs4_delegation *VAR_11;
 long VAR_12;

 FUNC_5("NFSD alloc_init_deleg\n");
 VAR_12 = FUNC_2(&VAR_6);
 if (VAR_12 < 0 || VAR_12 > VAR_3)
  goto out_dec;
 if (FUNC_3(&VAR_9->fh_handle))
  goto out_dec;
 VAR_11 = FUNC_4(FUNC_8(VAR_7, VAR_2, VAR_4));
 if (VAR_11 == ((void*)0))
  goto out_dec;






 VAR_11->dl_stid.sc_stateid.si_generation = 1;
 FUNC_0(&VAR_11->dl_perfile);
 FUNC_0(&VAR_11->dl_perclnt);
 FUNC_0(&VAR_11->dl_recall_lru);
 VAR_11->dl_clnt_odstate = VAR_10;
 FUNC_6(VAR_10);
 VAR_11->dl_type = VAR_0;
 VAR_11->dl_retries = 1;
 FUNC_9(&VAR_11->dl_recall, VAR_11->dl_stid.sc_client,
        &VAR_5, VAR_1);
 FUNC_7(VAR_8);
 VAR_11->dl_stid.sc_file = VAR_8;
 return VAR_11;
out_dec:
 FUNC_1(&VAR_6);
 return ((void*)0);
}
