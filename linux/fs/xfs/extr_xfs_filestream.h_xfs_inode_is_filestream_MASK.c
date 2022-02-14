
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int di_flags; } ;
struct xfs_inode {TYPE_2__ i_d; TYPE_1__* i_mount; } ;
struct TYPE_3__ {int m_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int
FUNC_0(
 struct xfs_inode *VAR_2)
{
 return (VAR_2->i_mount->m_flags & VAR_1) ||
  (VAR_2->i_d.di_flags & VAR_0);
}
