
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct posix_acl {int a_count; } ;
struct nfs4_acl {scalar_t__ naces; } ;
struct inode {int i_mode; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct posix_acl*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct posix_acl*,struct nfs4_acl*,unsigned int) ;
 struct inode* FUNC_4 (struct dentry*) ;
 struct posix_acl* FUNC_5 (struct inode*,int ) ;
 struct nfs4_acl* FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 struct posix_acl* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct posix_acl*) ;

int
FUNC_10(struct svc_rqst *VAR_6, struct dentry *VAR_7,
  struct nfs4_acl **VAR_8)
{
 struct inode *VAR_9 = FUNC_4(VAR_7);
 int VAR_10 = 0;
 struct posix_acl *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 unsigned int VAR_13 = 0;
 int VAR_14 = 0;

 VAR_11 = FUNC_5(VAR_9, VAR_0);
 if (!VAR_11)
  VAR_11 = FUNC_8(VAR_9->i_mode, VAR_3);

 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);


 VAR_14 += 2 * VAR_11->a_count;

 if (FUNC_2(VAR_9->i_mode)) {
  VAR_13 = VAR_4;
  VAR_12 = FUNC_5(VAR_9, VAR_1);
  if (FUNC_0(VAR_12)) {
   VAR_10 = FUNC_1(VAR_12);
   goto rel_pacl;
  }

  if (VAR_12)
   VAR_14 += 2 * VAR_12->a_count;
 }

 *VAR_8 = FUNC_6(FUNC_7(VAR_14), VAR_3);
 if (*VAR_8 == ((void*)0)) {
  VAR_10 = -VAR_2;
  goto out;
 }
 (*VAR_8)->naces = 0;

 FUNC_3(VAR_11, *VAR_8, VAR_13 & ~VAR_5);

 if (VAR_12)
  FUNC_3(VAR_12, *VAR_8, VAR_13 | VAR_5);

out:
 FUNC_9(VAR_12);
rel_pacl:
 FUNC_9(VAR_11);
 return VAR_10;
}
