
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {struct cred* cred; } ;
struct nfs_fattr {int dummy; } ;
struct nfs4_label {int dummy; } ;
struct inode {int dummy; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; int ia_file; } ;
struct dentry {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct nfs4_label*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nfs4_label*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct cred const*,struct nfs_fattr*,struct iattr*,struct nfs_open_context*,int *,struct nfs4_label*) ;
 int FUNC_6 (struct inode*) ;
 struct nfs4_label* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct nfs4_label*) ;
 int FUNC_9 (struct nfs_fattr*) ;
 struct nfs_open_context* FUNC_10 (int ) ;
 int FUNC_11 (struct inode*,struct iattr*,struct nfs_fattr*) ;
 int FUNC_12 (struct inode*,struct nfs_fattr*,struct nfs4_label*) ;
 int FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (struct inode*) ;

__attribute__((used)) static int
FUNC_15(struct dentry *VAR_9, struct nfs_fattr *VAR_10,
    struct iattr *VAR_11)
{
 struct inode *VAR_12 = FUNC_3(VAR_9);
 const struct cred *VAR_13 = ((void*)0);
 struct nfs_open_context *VAR_14 = ((void*)0);
 struct nfs4_label *VAR_15 = ((void*)0);
 int VAR_16;

 if (FUNC_14(VAR_12) &&
     VAR_11->ia_valid & VAR_6 &&
     VAR_11->ia_size < FUNC_4(VAR_12))
  FUNC_13(VAR_12);

 FUNC_9(VAR_10);


 if (VAR_11->ia_valid & VAR_5)
  VAR_11->ia_valid &= ~(VAR_4|VAR_0);


 if ((VAR_11->ia_valid & ~(VAR_1|VAR_5)) == 0)
  return 0;


 if (VAR_11->ia_valid & VAR_1) {

  VAR_14 = FUNC_10(VAR_11->ia_file);
  if (VAR_14)
   VAR_13 = VAR_14->cred;
 }

 VAR_15 = FUNC_7(FUNC_1(VAR_12), VAR_8);
 if (FUNC_0(VAR_15))
  return FUNC_2(VAR_15);


 if ((VAR_11->ia_valid & (VAR_3|VAR_7|VAR_2)) != 0)
  FUNC_6(VAR_12);

 VAR_16 = FUNC_5(VAR_12, VAR_13, VAR_10, VAR_11, VAR_14, ((void*)0), VAR_15);
 if (VAR_16 == 0) {
  FUNC_11(VAR_12, VAR_11, VAR_10);
  FUNC_12(VAR_12, VAR_10, VAR_15);
 }
 FUNC_8(VAR_15);
 return VAR_16;
}
