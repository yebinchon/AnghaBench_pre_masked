
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_dentry; int fh_export; } ;
struct inode {scalar_t__ i_size; } ;
struct iattr {scalar_t__ ia_size; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,int ,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static __be32
FUNC_6(struct svc_rqst *VAR_2, struct svc_fh *VAR_3,
  struct iattr *VAR_4)
{
 struct inode *VAR_5 = FUNC_0(VAR_3->fh_dentry);
 int VAR_6;

 if (VAR_4->ia_size < VAR_5->i_size) {
  __be32 VAR_7;

  VAR_7 = FUNC_3(VAR_2, VAR_3->fh_export, VAR_3->fh_dentry,
    VAR_1 | VAR_0);
  if (VAR_7)
   return VAR_7;
 }

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  goto out_nfserrno;

 VAR_6 = FUNC_2(VAR_5, ((void*)0), VAR_4->ia_size);
 if (VAR_6)
  goto out_put_write_access;
 return 0;

out_put_write_access:
 FUNC_5(VAR_5);
out_nfserrno:
 return FUNC_4(VAR_6);
}
