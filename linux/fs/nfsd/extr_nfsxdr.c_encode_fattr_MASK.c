
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct user_namespace {int dummy; } ;
struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;
struct svc_rqst {int dummy; } ;
struct svc_fh {TYPE_1__* fh_export; struct dentry* fh_dentry; } ;
struct TYPE_6__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct kstat {int mode; scalar_t__ size; TYPE_3__ ctime; struct timespec64 mtime; TYPE_2__ atime; scalar_t__ ino; int dev; scalar_t__ blocks; int rdev; scalar_t__ blksize; int gid; int uid; scalar_t__ nlink; } ;
struct dentry {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ ex_uuid; scalar_t__ ex_fsid; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct user_namespace*,int ) ;
 scalar_t__ FUNC_5 (struct user_namespace*,int ) ;
 int FUNC_6 (struct svc_fh*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int ,struct timespec64*) ;
 int FUNC_9 (int ) ;
 int* VAR_2 ;
 struct user_namespace* FUNC_10 (struct svc_rqst*) ;

__attribute__((used)) static __be32 *
FUNC_11(struct svc_rqst *VAR_3, __be32 *VAR_4, struct svc_fh *VAR_5,
      struct kstat *VAR_6)
{
 struct user_namespace *VAR_7 = FUNC_10(VAR_3);
 struct dentry *VAR_8 = VAR_5->fh_dentry;
 int VAR_9;
 struct timespec64 VAR_10;
 u32 VAR_11;

 VAR_9 = (VAR_6->mode & VAR_1);

 *VAR_4++ = FUNC_7(VAR_2[VAR_9 >> 12]);
 *VAR_4++ = FUNC_7((u32) VAR_6->mode);
 *VAR_4++ = FUNC_7((u32) VAR_6->nlink);
 *VAR_4++ = FUNC_7((u32) FUNC_5(VAR_7, VAR_6->uid));
 *VAR_4++ = FUNC_7((u32) FUNC_4(VAR_7, VAR_6->gid));

 if (FUNC_2(VAR_9) && VAR_6->size > VAR_0) {
  *VAR_4++ = FUNC_7(VAR_0);
 } else {
  *VAR_4++ = FUNC_7((u32) VAR_6->size);
 }
 *VAR_4++ = FUNC_7((u32) VAR_6->blksize);
 if (FUNC_1(VAR_9) || FUNC_0(VAR_9))
  *VAR_4++ = FUNC_7(FUNC_9(VAR_6->rdev));
 else
  *VAR_4++ = FUNC_7(0xffffffff);
 *VAR_4++ = FUNC_7((u32) VAR_6->blocks);
 switch (FUNC_6(VAR_5)) {
 default:
 case 130:
  *VAR_4++ = FUNC_7(FUNC_9(VAR_6->dev));
  break;
 case 129:
  *VAR_4++ = FUNC_7((u32) VAR_5->fh_export->ex_fsid);
  break;
 case 128:
  VAR_11 = ((u32*)VAR_5->fh_export->ex_uuid)[0];
  VAR_11 ^= ((u32*)VAR_5->fh_export->ex_uuid)[1];
  VAR_11 ^= ((u32*)VAR_5->fh_export->ex_uuid)[2];
  VAR_11 ^= ((u32*)VAR_5->fh_export->ex_uuid)[3];
  *VAR_4++ = FUNC_7(VAR_11);
  break;
 }
 *VAR_4++ = FUNC_7((u32) VAR_6->ino);
 *VAR_4++ = FUNC_7((u32) VAR_6->atime.tv_sec);
 *VAR_4++ = FUNC_7(VAR_6->atime.tv_nsec ? VAR_6->atime.tv_nsec / 1000 : 0);
 VAR_10 = VAR_6->mtime;
 FUNC_8(FUNC_3(VAR_8), &VAR_10);
 *VAR_4++ = FUNC_7((u32) VAR_10.tv_sec);
 *VAR_4++ = FUNC_7(VAR_10.tv_nsec ? VAR_10.tv_nsec / 1000 : 0);
 *VAR_4++ = FUNC_7((u32) VAR_6->ctime.tv_sec);
 *VAR_4++ = FUNC_7(VAR_6->ctime.tv_nsec ? VAR_6->ctime.tv_nsec / 1000 : 0);

 return VAR_4;
}
