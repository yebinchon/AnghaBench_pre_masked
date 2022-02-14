
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_open {int op_seqid; int op_owner; } ;
struct nfsd4_compound_state {struct nfs4_client* clp; } ;
struct TYPE_2__ {int so_is_open_owner; int so_seqid; int * so_ops; } ;
struct nfs4_openowner {TYPE_1__ oo_owner; int oo_close_lru; int * oo_last_closed_stid; scalar_t__ oo_time; int oo_flags; } ;
struct nfs4_client {int cl_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct nfs4_openowner* FUNC_1 (int ,int *,struct nfs4_client*) ;
 struct nfs4_openowner* FUNC_2 (unsigned int,struct nfsd4_open*,struct nfs4_client*) ;
 int FUNC_3 (struct nfs4_openowner*,struct nfs4_client*,unsigned int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct nfsd4_compound_state*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct nfs4_openowner *
FUNC_8(unsigned int VAR_3, struct nfsd4_open *VAR_4,
      struct nfsd4_compound_state *VAR_5)
{
 struct nfs4_client *VAR_6 = VAR_5->clp;
 struct nfs4_openowner *VAR_7, *VAR_8;

 VAR_7 = FUNC_1(VAR_2, &VAR_4->op_owner, VAR_6);
 if (!VAR_7)
  return ((void*)0);
 VAR_7->oo_owner.so_ops = &VAR_1;
 VAR_7->oo_owner.so_is_open_owner = 1;
 VAR_7->oo_owner.so_seqid = VAR_4->op_seqid;
 VAR_7->oo_flags = 0;
 if (FUNC_5(VAR_5))
  VAR_7->oo_flags |= VAR_0;
 VAR_7->oo_time = 0;
 VAR_7->oo_last_closed_stid = ((void*)0);
 FUNC_0(&VAR_7->oo_close_lru);
 FUNC_6(&VAR_6->cl_lock);
 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_7, VAR_6, VAR_3);
  VAR_8 = VAR_7;
 } else
  FUNC_4(&VAR_7->oo_owner);

 FUNC_7(&VAR_6->cl_lock);
 return VAR_8;
}
