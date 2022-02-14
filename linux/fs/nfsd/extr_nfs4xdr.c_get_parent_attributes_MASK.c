
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {scalar_t__ dentry; TYPE_1__* mnt; } ;
struct svc_export {struct path ex_path; } ;
struct kstat {int dummy; } ;
struct TYPE_2__ {scalar_t__ mnt_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct path*) ;
 int FUNC_1 (struct path*) ;
 int FUNC_2 (struct path*) ;
 int FUNC_3 (struct path*,struct kstat*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct svc_export *VAR_2, struct kstat *VAR_3)
{
 struct path VAR_4 = VAR_2->ex_path;
 int VAR_5;

 FUNC_1(&VAR_4);
 while (FUNC_0(&VAR_4)) {
  if (VAR_4.dentry != VAR_4.mnt->mnt_root)
   break;
 }
 VAR_5 = FUNC_3(&VAR_4, VAR_3, VAR_1, VAR_0);
 FUNC_2(&VAR_4);
 return VAR_5;
}
