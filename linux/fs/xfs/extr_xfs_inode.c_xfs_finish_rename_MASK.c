
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {TYPE_1__* t_mountp; } ;
struct TYPE_2__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_trans*) ;
 int FUNC_1 (struct xfs_trans*) ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_trans *VAR_2)
{




 if (VAR_2->t_mountp->m_flags & (VAR_1|VAR_0))
  FUNC_1(VAR_2);

 return FUNC_0(VAR_2);
}
