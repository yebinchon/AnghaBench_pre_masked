
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt; } ;
struct nameidata {int flags; TYPE_1__ root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nameidata*) ;
 int FUNC_1 (struct nameidata*) ;
 int FUNC_2 (struct nameidata*) ;

__attribute__((used)) static inline int FUNC_3(struct nameidata *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0) {
  if (!VAR_2->root.mnt)
   FUNC_2(VAR_2);
  if (VAR_2->flags & VAR_1) {
   return FUNC_1(VAR_2);
  } else
   return FUNC_0(VAR_2);
 }
 return 0;
}
