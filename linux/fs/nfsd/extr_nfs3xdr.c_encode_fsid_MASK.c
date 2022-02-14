
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct svc_fh {TYPE_1__* fh_export; TYPE_3__* fh_dentry; } ;
typedef int __be32 ;
struct TYPE_6__ {TYPE_2__* d_sb; } ;
struct TYPE_5__ {int s_dev; } ;
struct TYPE_4__ {scalar_t__ ex_uuid; int ex_fsid; } ;





 int FUNC_0 (struct svc_fh*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static __be32 *FUNC_3(__be32 *VAR_0, struct svc_fh *VAR_1)
{
 u64 VAR_2;
 switch(FUNC_0(VAR_1)) {
 default:
 case 130:
  VAR_0 = FUNC_2(VAR_0, (u64)FUNC_1
         (VAR_1->fh_dentry->d_sb->s_dev));
  break;
 case 129:
  VAR_0 = FUNC_2(VAR_0, (u64) VAR_1->fh_export->ex_fsid);
  break;
 case 128:
  VAR_2 = ((u64*)VAR_1->fh_export->ex_uuid)[0];
  VAR_2 ^= ((u64*)VAR_1->fh_export->ex_uuid)[1];
  VAR_0 = FUNC_2(VAR_0, VAR_2);
  break;
 }
 return VAR_0;
}
