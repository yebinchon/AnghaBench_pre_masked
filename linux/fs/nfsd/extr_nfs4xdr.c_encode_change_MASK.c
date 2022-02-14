
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_export {int ex_flags; TYPE_2__* cd; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct kstat {TYPE_1__ ctime; } ;
struct inode {int dummy; } ;
typedef int __be32 ;
struct TYPE_4__ {int flush_time; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct kstat*,struct inode*) ;
 int * FUNC_4 (int *,int ) ;

__attribute__((used)) static __be32 *FUNC_5(__be32 *VAR_1, struct kstat *VAR_2, struct inode *VAR_3,
        struct svc_export *VAR_4)
{
 if (VAR_4->ex_flags & VAR_0) {
  *VAR_1++ = FUNC_2(FUNC_1(VAR_4->cd->flush_time));
  *VAR_1++ = 0;
 } else if (FUNC_0(VAR_3)) {
  VAR_1 = FUNC_4(VAR_1, FUNC_3(VAR_2, VAR_3));
 } else {
  *VAR_1++ = FUNC_2(VAR_2->ctime.tv_sec);
  *VAR_1++ = FUNC_2(VAR_2->ctime.tv_nsec);
 }
 return VAR_1;
}
