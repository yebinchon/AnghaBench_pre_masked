
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct kstatfs {scalar_t__ f_blocks; scalar_t__ f_bavail; } ;
struct bsd_acct_struct {int active; scalar_t__ needcheck; TYPE_1__* file; } ;
struct TYPE_2__ {int f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,struct kstatfs*) ;

__attribute__((used)) static int FUNC_4(struct bsd_acct_struct *VAR_5)
{
 struct kstatfs VAR_6;

 if (FUNC_2(VAR_5->needcheck))
  goto out;


 if (FUNC_3(&VAR_5->file->f_path, &VAR_6))
  goto out;

 if (VAR_5->active) {
  u64 VAR_7 = VAR_6.f_blocks * VAR_3;
  FUNC_0(VAR_7, 100);
  if (VAR_6.f_bavail <= VAR_7) {
   VAR_5->active = 0;
   FUNC_1("Process accounting paused\n");
  }
 } else {
  u64 VAR_8 = VAR_6.f_blocks * VAR_2;
  FUNC_0(VAR_8, 100);
  if (VAR_6.f_bavail >= VAR_8) {
   VAR_5->active = 1;
   FUNC_1("Process accounting resumed\n");
  }
 }

 VAR_5->needcheck = VAR_4 + VAR_0*VAR_1;
out:
 return VAR_5->active;
}
