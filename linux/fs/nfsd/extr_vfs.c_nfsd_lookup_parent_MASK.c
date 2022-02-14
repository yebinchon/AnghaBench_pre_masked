
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_2__ {int mnt; } ;
struct svc_export {TYPE_1__ ex_path; } ;
struct path {struct dentry* dentry; int mnt; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct svc_export*) ;
 int FUNC_1 (struct svc_export*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct svc_export*) ;
 int FUNC_4 (struct path*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct path*) ;
 struct svc_export* FUNC_7 (struct svc_rqst*,struct path*) ;

__attribute__((used)) static int FUNC_8(struct svc_rqst *VAR_1, struct dentry *VAR_2, struct svc_export **VAR_3, struct dentry **VAR_4)
{
 struct svc_export *VAR_5;
 struct path VAR_6 = {.mnt = FUNC_5((*VAR_3)->ex_path.mnt),
       .dentry = FUNC_2(VAR_2)};

 FUNC_4(&VAR_6);

 VAR_5 = FUNC_7(VAR_1, &VAR_6);
 if (FUNC_1(VAR_5) == -VAR_0) {
  *VAR_4 = FUNC_2(VAR_2);
 } else if (FUNC_0(VAR_5)) {
  FUNC_6(&VAR_6);
  return FUNC_1(VAR_5);
 } else {
  *VAR_4 = FUNC_2(VAR_6.dentry);
  FUNC_3(*VAR_3);
  *VAR_3 = VAR_5;
 }
 FUNC_6(&VAR_6);
 return 0;
}
