
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_pre_ctime; int fh_pre_mtime; scalar_t__ fh_pre_size; scalar_t__ fh_pre_saved; scalar_t__ fh_post_saved; struct dentry* fh_dentry; } ;
struct dentry {int dummy; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int * FUNC_1 (struct svc_rqst*,int *,struct svc_fh*) ;
 int * FUNC_2 (struct svc_rqst*,int *,struct svc_fh*) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ) ;
 int VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static __be32 *
FUNC_5(struct svc_rqst *VAR_2, __be32 *VAR_3, struct svc_fh *VAR_4)
{
 struct dentry *VAR_5 = VAR_4->fh_dentry;

 if (VAR_5 && FUNC_0(VAR_5) && VAR_4->fh_post_saved) {
  if (VAR_4->fh_pre_saved) {
   *VAR_3++ = VAR_0;
   VAR_3 = FUNC_4(VAR_3, (u64) VAR_4->fh_pre_size);
   VAR_3 = FUNC_3(VAR_3, &VAR_4->fh_pre_mtime);
   VAR_3 = FUNC_3(VAR_3, &VAR_4->fh_pre_ctime);
  } else {
   *VAR_3++ = VAR_1;
  }
  return FUNC_2(VAR_2, VAR_3, VAR_4);
 }

 *VAR_3++ = VAR_1;
 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
