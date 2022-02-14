
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_export {int ex_flags; } ;
struct knfsd_fh {scalar_t__ ofh_dirino; int ofh_generation; int ofh_ino; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int i_generation; int i_ino; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct dentry *VAR_1,
      struct svc_export *VAR_2,
      struct knfsd_fh *VAR_3)
{
 VAR_3->ofh_ino = FUNC_2(FUNC_0(VAR_1)->i_ino);
 VAR_3->ofh_generation = FUNC_0(VAR_1)->i_generation;
 if (FUNC_1(VAR_1) ||
     (VAR_2->ex_flags & VAR_0))
  VAR_3->ofh_dirino = 0;
}
