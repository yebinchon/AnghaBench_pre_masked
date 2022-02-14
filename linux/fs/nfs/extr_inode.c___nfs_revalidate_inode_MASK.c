
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {int dummy; } ;
struct nfs_inode {int cache_validity; int flags; } ;
struct nfs_fattr {int dummy; } ;
struct nfs4_label {int dummy; } ;
struct inode {TYPE_1__* i_sb; int i_mode; } ;
struct TYPE_4__ {int (* getattr ) (struct nfs_server*,int ,struct nfs_fattr*,struct nfs4_label*,struct inode*) ;} ;
struct TYPE_3__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nfs4_label*) ;
 int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct nfs_inode* FUNC_3 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int VAR_6 ;
 int FUNC_7 (struct nfs4_label*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int ,unsigned long long,...) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 struct nfs4_label* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct nfs4_label*) ;
 struct nfs_fattr* FUNC_14 () ;
 int FUNC_15 (struct nfs_fattr*) ;
 int FUNC_16 (struct inode*,int ) ;
 int FUNC_17 (struct inode*,struct nfs_fattr*) ;
 int FUNC_18 (struct inode*,struct nfs_fattr*,struct nfs4_label*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct inode*,int) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (struct nfs_server*,int ,struct nfs_fattr*,struct nfs4_label*,struct inode*) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (struct inode*,int) ;

int
FUNC_26(struct nfs_server *VAR_7, struct inode *VAR_8)
{
 int VAR_9 = -VAR_1;
 struct nfs4_label *VAR_10 = ((void*)0);
 struct nfs_fattr *VAR_11 = ((void*)0);
 struct nfs_inode *VAR_12 = FUNC_3(VAR_8);

 FUNC_10(VAR_6, "NFS: revalidating (%s/%Lu)\n",
  VAR_8->i_sb->s_id, (unsigned long long)FUNC_2(VAR_8));

 FUNC_24(VAR_8);

 if (FUNC_11(VAR_8))
  goto out;
 if (FUNC_6(VAR_8))
  goto out;


 if (FUNC_9(VAR_8->i_mode)) {
  VAR_9 = FUNC_21(VAR_8, 0);
  if (VAR_9)
   goto out;
 }

 VAR_9 = -VAR_0;
 VAR_11 = FUNC_14();
 if (VAR_11 == ((void*)0))
  goto out;

 FUNC_16(VAR_8, VAR_3);

 VAR_10 = FUNC_12(FUNC_5(VAR_8), VAR_2);
 if (FUNC_0(VAR_10)) {
  VAR_9 = FUNC_7(VAR_10);
  goto out;
 }

 VAR_9 = FUNC_4(VAR_8)->getattr(VAR_7, FUNC_1(VAR_8), VAR_11,
   VAR_10, VAR_8);
 if (VAR_9 != 0) {
  FUNC_10(VAR_6, "nfs_revalidate_inode: (%s/%Lu) getattr failed, error=%d\n",
    VAR_8->i_sb->s_id,
    (unsigned long long)FUNC_2(VAR_8), VAR_9);
  if (VAR_9 == -VAR_1) {
   FUNC_20(VAR_8);
   if (!FUNC_8(VAR_8->i_mode))
    FUNC_22(VAR_5, &FUNC_3(VAR_8)->flags);
  }
  goto err_out;
 }

 VAR_9 = FUNC_17(VAR_8, VAR_11);
 if (VAR_9) {
  FUNC_10(VAR_6, "nfs_revalidate_inode: (%s/%Lu) refresh failed, error=%d\n",
    VAR_8->i_sb->s_id,
    (unsigned long long)FUNC_2(VAR_8), VAR_9);
  goto err_out;
 }

 if (VAR_12->cache_validity & VAR_4)
  FUNC_19(VAR_8);

 FUNC_18(VAR_8, VAR_11, VAR_10);

 FUNC_10(VAR_6, "NFS: (%s/%Lu) revalidation complete\n",
  VAR_8->i_sb->s_id,
  (unsigned long long)FUNC_2(VAR_8));

err_out:
 FUNC_13(VAR_10);
out:
 FUNC_15(VAR_11);
 FUNC_25(VAR_8, VAR_9);
 return VAR_9;
}
