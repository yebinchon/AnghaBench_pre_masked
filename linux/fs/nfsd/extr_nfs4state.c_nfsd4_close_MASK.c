
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfsd4_close {int cl_stateid; int cl_seqid; } ;
union nfsd4_op_u {struct nfsd4_close close; } ;
struct svc_rqst {int dummy; } ;
struct nfsd_net {int dummy; } ;
struct TYPE_4__ {int fh_dentry; } ;
struct nfsd4_compound_state {TYPE_1__ current_fh; } ;
struct TYPE_5__ {int sc_type; } ;
struct nfs4_ol_stateid {TYPE_2__ st_stid; int st_mutex; } ;
struct net {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_0 (struct svc_rqst*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 struct nfsd_net* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct nfsd4_compound_state*,int ,int *,int,struct nfs4_ol_stateid**,struct nfsd_net*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct nfsd4_compound_state*,scalar_t__) ;
 int FUNC_9 (struct nfs4_ol_stateid*) ;
 int VAR_3 ;

__be32
FUNC_10(struct svc_rqst *VAR_4, struct nfsd4_compound_state *VAR_5,
  union nfsd4_op_u *VAR_6)
{
 struct nfsd4_close *VAR_7 = &VAR_6->close;
 __be32 VAR_8;
 struct nfs4_ol_stateid *VAR_9;
 struct net *VAR_10 = FUNC_0(VAR_4);
 struct nfsd_net *VAR_11 = FUNC_4(VAR_10, VAR_3);

 FUNC_1("NFSD: nfsd4_close on file %pd\n",
   VAR_5->current_fh.fh_dentry);

 VAR_8 = FUNC_6(VAR_5, VAR_7->cl_seqid,
     &VAR_7->cl_stateid,
     VAR_1|VAR_0,
     &VAR_9, VAR_11);
 FUNC_8(VAR_5, VAR_8);
 if (VAR_8)
  goto out;

 VAR_9->st_stid.sc_type = VAR_0;







 FUNC_5(&VAR_7->cl_stateid, &VAR_9->st_stid);

 FUNC_9(VAR_9);
 FUNC_3(&VAR_9->st_mutex);
 FUNC_2(&VAR_7->cl_stateid, &VAR_2, sizeof(VAR_7->cl_stateid));


 FUNC_7(&VAR_9->st_stid);
out:
 return VAR_8;
}
