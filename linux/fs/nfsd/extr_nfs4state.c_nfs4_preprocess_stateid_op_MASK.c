
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_dentry; } ;
struct nfsd_net {int dummy; } ;
struct nfsd_file {int dummy; } ;
struct nfsd4_compound_state {int dummy; } ;
struct nfs4_stid {int sc_type; } ;
struct net {int dummy; } ;
struct inode {int dummy; } ;
typedef int stateid_t ;
typedef scalar_t__ __be32 ;





 scalar_t__ FUNC_0 (int *) ;
 struct net* FUNC_1 (struct svc_rqst*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net*,struct svc_fh*,int *,int) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (struct nfs4_stid*) ;
 scalar_t__ FUNC_6 (struct net*,struct inode*) ;
 struct nfsd_net* FUNC_7 (struct net*,int ) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (struct svc_fh*,struct nfs4_stid*) ;
 scalar_t__ FUNC_10 (struct svc_rqst*,struct svc_fh*,struct nfs4_stid*,struct nfsd_file**,int) ;
 scalar_t__ FUNC_11 (int ,int) ;
 int FUNC_12 (struct nfs4_stid*) ;
 scalar_t__ VAR_0 ;
 int FUNC_13 (struct nfsd4_compound_state*) ;
 scalar_t__ FUNC_14 (struct nfsd4_compound_state*,int *,int,struct nfs4_stid**,struct nfsd_net*) ;
 scalar_t__ FUNC_15 (int *,struct nfs4_stid*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_16 (struct nfs4_stid*) ;

__be32
FUNC_17(struct svc_rqst *VAR_4,
  struct nfsd4_compound_state *VAR_5, struct svc_fh *VAR_6,
  stateid_t *VAR_7, int VAR_8, struct nfsd_file **VAR_9)
{
 struct inode *VAR_10 = FUNC_4(VAR_6->fh_dentry);
 struct net *VAR_11 = FUNC_1(VAR_4);
 struct nfsd_net *VAR_12 = FUNC_7(VAR_11, VAR_1);
 struct nfs4_stid *VAR_13 = ((void*)0);
 __be32 VAR_14;

 if (VAR_9)
  *VAR_9 = ((void*)0);

 if (FUNC_6(VAR_11, VAR_10))
  return VAR_3;

 if (FUNC_2(VAR_7) || FUNC_0(VAR_7)) {
  VAR_14 = FUNC_3(VAR_11, VAR_6, VAR_7, VAR_8);
  goto done;
 }

 VAR_14 = FUNC_14(VAR_5, VAR_7,
    130|128|129,
    &VAR_13, VAR_12);
 if (VAR_14)
  return VAR_14;
 VAR_14 = FUNC_15(VAR_7, VAR_13,
   FUNC_13(VAR_5));
 if (VAR_14)
  goto out;

 switch (VAR_13->sc_type) {
 case 130:
  VAR_14 = FUNC_8(FUNC_5(VAR_13), VAR_8);
  break;
 case 128:
 case 129:
  VAR_14 = FUNC_11(FUNC_16(VAR_13), VAR_8);
  break;
 default:
  VAR_14 = VAR_2;
  break;
 }
 if (VAR_14)
  goto out;
 VAR_14 = FUNC_9(VAR_6, VAR_13);

done:
 if (VAR_14 == VAR_0 && VAR_9)
  VAR_14 = FUNC_10(VAR_4, VAR_6, VAR_13, VAR_9, VAR_8);
out:
 if (VAR_13)
  FUNC_12(VAR_13);
 return VAR_14;
}
