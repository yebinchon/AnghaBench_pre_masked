
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* i_itemp; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_4__ {int ili_fields; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(xfs_inode_t *VAR_1)
{
 return !VAR_1->i_itemp || !(VAR_1->i_itemp->ili_fields & VAR_0);
}
