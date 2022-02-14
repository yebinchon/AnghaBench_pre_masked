
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct svc_fh {int dummy; } ;
struct svc_export {int dummy; } ;
struct TYPE_4__ {struct svc_export* fh_export; struct dentry* fh_dentry; } ;
struct nfsd3_readdirres {TYPE_2__ fh; } ;
struct dentry {TYPE_1__* d_inode; } ;
typedef int __be32 ;
struct TYPE_3__ {scalar_t__ i_ino; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct svc_fh*,struct svc_export*,struct dentry*,TYPE_2__*) ;
 scalar_t__ FUNC_7 (char const*,int) ;
 struct dentry* FUNC_8 (char const*,struct dentry*,int) ;
 int VAR_0 ;

__attribute__((used)) static __be32
FUNC_9(struct nfsd3_readdirres *VAR_1, struct svc_fh *VAR_2,
   const char *VAR_3, int VAR_4, u64 VAR_5)
{
 struct svc_export *VAR_6;
 struct dentry *VAR_7, *VAR_8;
 __be32 VAR_9 = VAR_0;

 VAR_7 = VAR_1->fh.fh_dentry;
 VAR_6 = VAR_1->fh.fh_export;

 if (FUNC_7(VAR_3, VAR_4)) {
  if (VAR_4 == 2) {
   VAR_8 = FUNC_4(VAR_7);

   if (VAR_8 == VAR_7)
    goto out;
  } else
   VAR_8 = FUNC_3(VAR_7);
 } else
  VAR_8 = FUNC_8(VAR_3, VAR_7, VAR_4);
 if (FUNC_0(VAR_8))
  return VAR_9;
 if (FUNC_1(VAR_8))
  goto out;
 if (FUNC_2(VAR_8))
  goto out;
 if (VAR_8->d_inode->i_ino != VAR_5)
  goto out;
 VAR_9 = FUNC_6(VAR_2, VAR_6, VAR_8, &VAR_1->fh);
out:
 FUNC_5(VAR_8);
 return VAR_9;
}
