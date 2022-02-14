
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct user_namespace {int dummy; } ;
struct timespec {int dummy; } ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct kstat {int mode; scalar_t__ size; int ino; int ctime; int mtime; int atime; int rdev; scalar_t__ blocks; int gid; int uid; scalar_t__ nlink; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (int *,struct svc_fh*) ;
 int * FUNC_4 (int *,struct timespec*) ;
 scalar_t__ FUNC_5 (struct user_namespace*,int ) ;
 scalar_t__ FUNC_6 (struct user_namespace*,int ) ;
 void* FUNC_7 (int ) ;
 int * VAR_3 ;
 struct user_namespace* FUNC_8 (struct svc_rqst*) ;
 struct timespec FUNC_9 (int ) ;
 int * FUNC_10 (int *,int) ;

__attribute__((used)) static __be32 *
FUNC_11(struct svc_rqst *VAR_4, __be32 *VAR_5, struct svc_fh *VAR_6,
       struct kstat *VAR_7)
{
 struct user_namespace *VAR_8 = FUNC_8(VAR_4);
 struct timespec VAR_9;
 *VAR_5++ = FUNC_7(VAR_3[(VAR_7->mode & VAR_2) >> 12]);
 *VAR_5++ = FUNC_7((u32) (VAR_7->mode & VAR_1));
 *VAR_5++ = FUNC_7((u32) VAR_7->nlink);
 *VAR_5++ = FUNC_7((u32) FUNC_6(VAR_8, VAR_7->uid));
 *VAR_5++ = FUNC_7((u32) FUNC_5(VAR_8, VAR_7->gid));
 if (FUNC_2(VAR_7->mode) && VAR_7->size > VAR_0) {
  VAR_5 = FUNC_10(VAR_5, (u64) VAR_0);
 } else {
  VAR_5 = FUNC_10(VAR_5, (u64) VAR_7->size);
 }
 VAR_5 = FUNC_10(VAR_5, ((u64)VAR_7->blocks) << 9);
 *VAR_5++ = FUNC_7((u32) FUNC_0(VAR_7->rdev));
 *VAR_5++ = FUNC_7((u32) FUNC_1(VAR_7->rdev));
 VAR_5 = FUNC_3(VAR_5, VAR_6);
 VAR_5 = FUNC_10(VAR_5, VAR_7->ino);
 VAR_9 = FUNC_9(VAR_7->atime);
 VAR_5 = FUNC_4(VAR_5, &VAR_9);
 VAR_9 = FUNC_9(VAR_7->mtime);
 VAR_5 = FUNC_4(VAR_5, &VAR_9);
 VAR_9 = FUNC_9(VAR_7->ctime);
 VAR_5 = FUNC_4(VAR_5, &VAR_9);

 return VAR_5;
}
