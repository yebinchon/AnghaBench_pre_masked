
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {struct dentry* fh_dentry; } ;
struct kstat {int mtime; } ;
struct dentry {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int * FUNC_2 (struct svc_rqst*,int *,struct svc_fh*,struct kstat*) ;
 int FUNC_3 (struct svc_fh*,struct kstat*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __be32 *
FUNC_5(struct svc_rqst *VAR_2, __be32 *VAR_3, struct svc_fh *VAR_4)
{
 struct dentry *VAR_5 = VAR_4->fh_dentry;
 if (VAR_5 && FUNC_1(VAR_5)) {
         __be32 VAR_6;
  struct kstat VAR_7;

  VAR_6 = FUNC_3(VAR_4, &VAR_7);
  if (!VAR_6) {
   *VAR_3++ = VAR_0;
   FUNC_4(FUNC_0(VAR_5), &VAR_7.mtime);
   return FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_7);
  }
 }
 *VAR_3++ = VAR_1;
 return VAR_3;
}
