
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_dentry; } ;
struct nfsd_file {int nf_flags; int nf_file; scalar_t__ nf_mark; int nf_node; int nf_lru; int nf_ref; int nf_rcu; } ;
struct net {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_ino; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int nfb_lock; int nfb_count; int nfb_maxcount; int nfb_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct net* FUNC_0 (struct svc_rqst*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 struct inode* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct svc_rqst*,struct svc_fh*,int ,unsigned int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ VAR_10 ;
 struct nfsd_file* FUNC_13 (struct inode*,unsigned int,unsigned int,struct net*) ;
 int VAR_11 ;
 struct nfsd_file* FUNC_14 (struct inode*,unsigned int,unsigned int,struct net*) ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_15 (struct nfsd_file*) ;
 int FUNC_16 (struct nfsd_file*) ;
 int FUNC_17 (struct nfsd_file*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct nfsd_file*) ;
 int VAR_14 ;
 int FUNC_20 (int ,unsigned int) ;
 scalar_t__ FUNC_21 (struct svc_rqst*,struct svc_fh*,int ,unsigned int,int *) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int ,int *) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (struct svc_rqst*,unsigned int,struct inode*,unsigned int,struct nfsd_file*,scalar_t__) ;
 int FUNC_31 (int *,int ,int ) ;
 int FUNC_32 (int *,int ) ;

__be32
FUNC_33(struct svc_rqst *VAR_16, struct svc_fh *VAR_17,
    unsigned int VAR_18, struct nfsd_file **VAR_19)
{
 __be32 VAR_20;
 struct net *VAR_21 = FUNC_0(VAR_16);
 struct nfsd_file *VAR_22, *VAR_23;
 struct inode *VAR_24;
 unsigned int VAR_25;


 VAR_20 = FUNC_7(VAR_16, VAR_17, VAR_8,
    VAR_18|VAR_6);
 if (VAR_20 != VAR_10)
  return VAR_20;

 VAR_24 = FUNC_6(VAR_17->fh_dentry);
 VAR_25 = (unsigned int)FUNC_9(VAR_24->i_ino, VAR_3);
retry:
 FUNC_23();
 VAR_22 = FUNC_14(VAR_24, VAR_18, VAR_25, VAR_21);
 FUNC_24();
 if (VAR_22)
  goto wait_for_construction;

 VAR_23 = FUNC_13(VAR_24, VAR_18, VAR_25, VAR_21);
 if (!VAR_23) {
  FUNC_30(VAR_16, VAR_25, VAR_24, VAR_18,
     ((void*)0), VAR_15);
  return VAR_15;
 }

 FUNC_26(&VAR_12[VAR_25].nfb_lock);
 VAR_22 = FUNC_14(VAR_24, VAR_18, VAR_25, VAR_21);
 if (VAR_22 == ((void*)0))
  goto open_file;
 FUNC_27(&VAR_12[VAR_25].nfb_lock);
 FUNC_18(&VAR_23->nf_rcu);

wait_for_construction:
 FUNC_31(&VAR_22->nf_flags, VAR_4, VAR_9);


 if (!FUNC_28(VAR_2, &VAR_22->nf_flags)) {
  FUNC_17(VAR_22);
  goto retry;
 }

 FUNC_29(VAR_11);

 if (!(VAR_18 & VAR_5)) {
  bool VAR_26 = (VAR_18 & VAR_7);

  if (FUNC_28(VAR_0, &VAR_22->nf_flags) ||
      (FUNC_28(VAR_1, &VAR_22->nf_flags) && VAR_26)) {
   VAR_20 = FUNC_22(FUNC_20(
     FUNC_8(VAR_22->nf_file), VAR_18));
   if (VAR_20 == VAR_10) {
    FUNC_4(VAR_0, &VAR_22->nf_flags);
    if (VAR_26)
     FUNC_4(VAR_1,
        &VAR_22->nf_flags);
   }
  }
 }
out:
 if (VAR_20 == VAR_10) {
  *VAR_19 = VAR_22;
 } else {
  FUNC_16(VAR_22);
  VAR_22 = ((void*)0);
 }

 FUNC_30(VAR_16, VAR_25, VAR_24, VAR_18, VAR_22, VAR_20);
 return VAR_20;
open_file:
 VAR_22 = VAR_23;

 FUNC_2(&VAR_22->nf_ref);
 FUNC_1(VAR_2, &VAR_22->nf_flags);
 FUNC_1(VAR_4, &VAR_22->nf_flags);
 FUNC_11(&VAR_13, &VAR_22->nf_lru);
 FUNC_10(&VAR_22->nf_node, &VAR_12[VAR_25].nfb_head);
 ++VAR_12[VAR_25].nfb_count;
 VAR_12[VAR_25].nfb_maxcount = FUNC_12(VAR_12[VAR_25].nfb_maxcount,
   VAR_12[VAR_25].nfb_count);
 FUNC_27(&VAR_12[VAR_25].nfb_lock);
 FUNC_3(&VAR_14);

 VAR_22->nf_mark = FUNC_15(VAR_22);
 if (VAR_22->nf_mark)
  VAR_20 = FUNC_21(VAR_16, VAR_17, VAR_8,
    VAR_18, &VAR_22->nf_file);
 else
  VAR_20 = VAR_15;




 if (VAR_20 != VAR_10 || VAR_24->i_nlink == 0) {
  bool VAR_27;
  FUNC_26(&VAR_12[VAR_25].nfb_lock);
  VAR_27 = FUNC_19(VAR_22);
  FUNC_27(&VAR_12[VAR_25].nfb_lock);
  if (VAR_27)
   FUNC_17(VAR_22);
 }
 FUNC_5(VAR_4, &VAR_22->nf_flags);
 FUNC_25();
 FUNC_32(&VAR_22->nf_flags, VAR_4);
 goto out;
}
