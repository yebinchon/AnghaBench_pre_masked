
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_fh {int fh_dentry; TYPE_2__* fh_export; } ;
struct path {int dentry; int mnt; } ;
struct kstat {int dummy; } ;
typedef int __be32 ;
struct TYPE_3__ {int mnt; } ;
struct TYPE_4__ {TYPE_1__ ex_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct path*,struct kstat*,int ,int ) ;

__attribute__((used)) static inline __be32 FUNC_2(struct svc_fh *VAR_2, struct kstat *VAR_3)
{
 struct path VAR_4 = {.mnt = VAR_2->fh_export->ex_path.mnt,
    .dentry = VAR_2->fh_dentry};
 return FUNC_0(FUNC_1(&VAR_4, VAR_3, VAR_1,
        VAR_0));
}
