
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_2__ {scalar_t__ mnt; } ;
struct svc_export {int ex_flags; TYPE_1__ ex_path; } ;
struct path {scalar_t__ mnt; struct dentry* dentry; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct svc_export*) ;
 scalar_t__ FUNC_1 (struct svc_export*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct svc_export*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct svc_export*) ;
 int FUNC_5 (struct path*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct dentry*,struct svc_export*) ;
 scalar_t__ FUNC_8 (struct svc_rqst*) ;
 int FUNC_9 (struct path*) ;
 struct svc_export* FUNC_10 (struct svc_rqst*,struct path*) ;

int
FUNC_11(struct svc_rqst *VAR_3, struct dentry **VAR_4,
          struct svc_export **VAR_5)
{
 struct svc_export *VAR_6 = *VAR_5, *VAR_7 = ((void*)0);
 struct dentry *VAR_8 = *VAR_4;
 struct path VAR_9 = {.mnt = FUNC_6(VAR_6->ex_path.mnt),
       .dentry = FUNC_3(VAR_8)};
 int VAR_10 = 0;

 VAR_10 = FUNC_5(&VAR_9);
 if (VAR_10 < 0)
  goto out;
 if (VAR_9.mnt == VAR_6->ex_path.mnt && VAR_9.dentry == VAR_8 &&
     FUNC_7(VAR_8, VAR_6) == 2) {

  FUNC_9(&VAR_9);
  goto out;
 }

 VAR_7 = FUNC_10(VAR_3, &VAR_9);
 if (FUNC_1(VAR_7)) {
  VAR_10 = FUNC_2(VAR_7);







  if (VAR_10 == -VAR_0 && !(VAR_6->ex_flags & VAR_2))
   VAR_10 = 0;
  FUNC_9(&VAR_9);
  goto out;
 }
 if (FUNC_8(VAR_3) ||
  (VAR_6->ex_flags & VAR_1) || FUNC_0(VAR_7)) {







  *VAR_4 = VAR_9.dentry;
  VAR_9.dentry = VAR_8;
  *VAR_5 = VAR_7;
  VAR_7 = VAR_6;
 }
 FUNC_9(&VAR_9);
 FUNC_4(VAR_7);
out:
 return VAR_10;
}
