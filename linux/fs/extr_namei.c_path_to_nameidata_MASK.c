
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {scalar_t__ mnt; int dentry; } ;
struct TYPE_2__ {scalar_t__ mnt; int dentry; } ;
struct nameidata {int flags; TYPE_1__ path; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(const struct path *VAR_1,
     struct nameidata *VAR_2)
{
 if (!(VAR_2->flags & VAR_0)) {
  FUNC_0(VAR_2->path.dentry);
  if (VAR_2->path.mnt != VAR_1->mnt)
   FUNC_1(VAR_2->path.mnt);
 }
 VAR_2->path.mnt = VAR_1->mnt;
 VAR_2->path.dentry = VAR_1->dentry;
}
