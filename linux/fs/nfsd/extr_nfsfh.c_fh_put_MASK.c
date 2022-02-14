
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_fh {struct svc_export* fh_export; struct dentry* fh_dentry; } ;
struct svc_export {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct svc_export*) ;
 int FUNC_2 (struct svc_fh*) ;
 int FUNC_3 (struct svc_fh*) ;
 int FUNC_4 (struct svc_fh*) ;

void
FUNC_5(struct svc_fh *VAR_0)
{
 struct dentry * VAR_1 = VAR_0->fh_dentry;
 struct svc_export * VAR_2 = VAR_0->fh_export;
 if (VAR_1) {
  FUNC_4(VAR_0);
  VAR_0->fh_dentry = ((void*)0);
  FUNC_0(VAR_1);
  FUNC_2(VAR_0);
 }
 FUNC_3(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_2);
  VAR_0->fh_export = ((void*)0);
 }
 return;
}
