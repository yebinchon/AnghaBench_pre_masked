
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt; } ;
struct nameidata {int flags; int root_seq; TYPE_1__ root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nameidata*,TYPE_1__*,int ) ;

__attribute__((used)) static bool FUNC_1(struct nameidata *VAR_2)
{
 if (!VAR_2->root.mnt || (VAR_2->flags & VAR_0))
  return 1;
 VAR_2->flags |= VAR_1;
 return FUNC_0(VAR_2, &VAR_2->root, VAR_2->root_seq);
}
