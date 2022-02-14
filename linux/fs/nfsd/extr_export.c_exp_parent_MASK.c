
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_export {int dummy; } ;
struct path {struct dentry* dentry; } ;
struct dentry {int dummy; } ;
struct cache_detail {int dummy; } ;
struct auth_domain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct svc_export*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 struct svc_export* FUNC_5 (struct cache_detail*,struct auth_domain*,struct path*,int *) ;

__attribute__((used)) static struct svc_export *
FUNC_6(struct cache_detail *VAR_1, struct auth_domain *VAR_2, struct path *VAR_3)
{
 struct dentry *VAR_4 = FUNC_2(VAR_3->dentry);
 struct svc_export *VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, ((void*)0));

 while (FUNC_1(VAR_5) == -VAR_0 && !FUNC_0(VAR_3->dentry)) {
  struct dentry *VAR_6 = FUNC_3(VAR_3->dentry);
  FUNC_4(VAR_3->dentry);
  VAR_3->dentry = VAR_6;
  VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, ((void*)0));
 }
 FUNC_4(VAR_3->dentry);
 VAR_3->dentry = VAR_4;
 return VAR_5;
}
