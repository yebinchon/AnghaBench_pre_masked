
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_dentry; TYPE_2__* fh_export; } ;
struct path {int dentry; int mnt; } ;
struct kstatfs {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {int mnt; } ;
struct TYPE_4__ {TYPE_1__ ex_path; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct svc_fh*,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct path*,struct kstatfs*) ;

__be32
FUNC_2(struct svc_rqst *VAR_2, struct svc_fh *VAR_3, struct kstatfs *VAR_4, int VAR_5)
{
 __be32 VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, 0, VAR_0 | VAR_5);
 if (!VAR_6) {
  struct path VAR_7 = {
   .mnt = VAR_3->fh_export->ex_path.mnt,
   .dentry = VAR_3->fh_dentry,
  };
  if (FUNC_1(&VAR_7, VAR_4))
   VAR_6 = VAR_1;
 }
 return VAR_6;
}
