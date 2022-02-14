
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_server {int* attr_bitmask; int nfs_client; } ;
struct nfs_open_context {struct nfs4_state* state; struct nfs4_threshold* mdsthreshold; struct cred* cred; struct dentry* dentry; } ;
struct nfs4_threshold {int dummy; } ;
struct nfs4_state_owner {int dummy; } ;
struct nfs4_state {int inode; } ;
struct TYPE_6__ {struct nfs4_threshold* mdsthreshold; } ;
struct TYPE_5__ {int f_attr; } ;
struct TYPE_4__ {int open_flags; scalar_t__ createmode; int * open_bitmap; } ;
struct nfs4_opendata {TYPE_3__ f_attr; scalar_t__ file_created; TYPE_2__ o_res; TYPE_1__ o_arg; int state; } ;
struct nfs4_open_createattrs {struct nfs4_label* label; struct iattr* sattr; } ;
struct nfs4_label {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {unsigned int ia_valid; } ;
struct dentry {int dummy; } ;
struct cred {int dummy; } ;
typedef int fmode_t ;
typedef enum open_claim_type4 { ____Placeholder_open_claim_type4 } open_claim_type4 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nfs4_label*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct nfs4_label*) ;
 int FUNC_3 (struct nfs_open_context*) ;
 int FUNC_4 (struct nfs4_opendata*,int,struct nfs_open_context*) ;
 int FUNC_5 (struct dentry*) ;
 scalar_t__ FUNC_6 (struct dentry*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct cred const*,int ,struct iattr*,struct nfs_open_context*,struct nfs4_label*,struct nfs4_label*) ;
 unsigned int FUNC_10 (struct nfs4_opendata*,struct iattr*,struct nfs4_label**) ;
 int FUNC_11 (int ,struct nfs4_state_owner*) ;
 struct nfs4_state_owner* FUNC_12 (struct nfs_server*,struct cred const*,int ) ;
 struct nfs4_label* FUNC_13 (struct nfs_server*,int ) ;
 int FUNC_14 (struct nfs4_label*) ;
 struct nfs4_opendata* FUNC_15 (struct dentry*,struct nfs4_state_owner*,int ,int,struct nfs4_open_createattrs const*,int,int ) ;
 int FUNC_16 (struct nfs4_opendata*) ;
 int * VAR_8 ;
 int FUNC_17 (struct nfs4_state_owner*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,struct iattr*,int ) ;
 int FUNC_21 (int ,int ,struct nfs4_label*) ;
 struct nfs4_threshold* FUNC_22 () ;
 scalar_t__ FUNC_23 (struct nfs4_threshold**,struct nfs4_threshold*,struct nfs_server*) ;

__attribute__((used)) static int FUNC_24(struct inode *VAR_9,
   struct nfs_open_context *VAR_10,
   int VAR_11,
   const struct nfs4_open_createattrs *VAR_12,
   int *VAR_13)
{
 struct nfs4_state_owner *VAR_14;
 struct nfs4_state *VAR_15 = ((void*)0);
 struct nfs_server *VAR_16 = FUNC_1(VAR_9);
 struct nfs4_opendata *VAR_17;
 struct dentry *VAR_18 = VAR_10->dentry;
 const struct cred *VAR_19 = VAR_10->cred;
 struct nfs4_threshold **VAR_20 = &VAR_10->mdsthreshold;
 fmode_t VAR_21 = FUNC_3(VAR_10);
 enum open_claim_type4 VAR_22 = VAR_5;
 struct iattr *VAR_23 = VAR_12->sattr;
 struct nfs4_label *VAR_24 = VAR_12->label;
 struct nfs4_label *VAR_25 = ((void*)0);
 int VAR_26;


 VAR_26 = -VAR_0;
 VAR_14 = FUNC_12(VAR_16, VAR_19, VAR_2);
 if (VAR_14 == ((void*)0)) {
  FUNC_7("nfs4_do_open: nfs4_get_state_owner failed!\n");
  goto out_err;
 }
 VAR_26 = FUNC_8(VAR_16->nfs_client);
 if (VAR_26 != 0)
  goto err_put_state_owner;
 if (FUNC_6(VAR_18))
  FUNC_18(FUNC_5(VAR_18), VAR_21);
 VAR_26 = -VAR_0;
 if (FUNC_6(VAR_18))
  VAR_22 = VAR_4;
 VAR_17 = FUNC_15(VAR_18, VAR_14, VAR_21, VAR_11,
   VAR_12, VAR_22, VAR_2);
 if (VAR_17 == ((void*)0))
  goto err_put_state_owner;

 if (VAR_24) {
  VAR_25 = FUNC_13(VAR_16, VAR_2);
  if (FUNC_0(VAR_25)) {
   VAR_26 = FUNC_2(VAR_25);
   goto err_opendata_put;
  }
 }

 if (VAR_16->attr_bitmask[2] & VAR_1) {
  if (!VAR_17->f_attr.mdsthreshold) {
   VAR_17->f_attr.mdsthreshold = FUNC_22();
   if (!VAR_17->f_attr.mdsthreshold)
    goto err_free_label;
  }
  VAR_17->o_arg.open_bitmap = &VAR_8[0];
 }
 if (FUNC_6(VAR_18))
  VAR_17->state = FUNC_11(FUNC_5(VAR_18), VAR_14);

 VAR_26 = FUNC_4(VAR_17, VAR_11, VAR_10);
 if (VAR_26 != 0)
  goto err_free_label;
 VAR_15 = VAR_10->state;

 if ((VAR_17->o_arg.open_flags & (VAR_6|VAR_7)) == (VAR_6|VAR_7) &&
     (VAR_17->o_arg.createmode != VAR_3)) {
  unsigned VAR_27 = FUNC_10(VAR_17, VAR_23, &VAR_24);




  if (VAR_27 || VAR_24) {
   unsigned VAR_28 = VAR_23->ia_valid;

   VAR_23->ia_valid = VAR_27;
   FUNC_19(VAR_17->o_res.f_attr);
   VAR_26 = FUNC_9(VAR_15->inode, VAR_19,
     VAR_17->o_res.f_attr, VAR_23,
     VAR_10, VAR_24, VAR_25);
   if (VAR_26 == 0) {
    FUNC_20(VAR_15->inode, VAR_23,
      VAR_17->o_res.f_attr);
    FUNC_21(VAR_15->inode, VAR_17->o_res.f_attr, VAR_25);
   }
   VAR_23->ia_valid = VAR_28;
  }
 }
 if (VAR_13 && VAR_17->file_created)
  *VAR_13 = 1;

 if (FUNC_23(VAR_20, VAR_17->f_attr.mdsthreshold, VAR_16)) {
  *VAR_20 = VAR_17->f_attr.mdsthreshold;
  VAR_17->f_attr.mdsthreshold = ((void*)0);
 }

 FUNC_14(VAR_25);

 FUNC_16(VAR_17);
 FUNC_17(VAR_14);
 return 0;
err_free_label:
 FUNC_14(VAR_25);
err_opendata_put:
 FUNC_16(VAR_17);
err_put_state_owner:
 FUNC_17(VAR_14);
out_err:
 return VAR_26;
}
