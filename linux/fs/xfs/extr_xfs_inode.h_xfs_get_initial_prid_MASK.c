
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int di_flags; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
typedef int prid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_inode*) ;

__attribute__((used)) static inline prid_t
FUNC_1(struct xfs_inode *VAR_2)
{
 if (VAR_2->i_d.di_flags & VAR_0)
  return FUNC_0(VAR_2);

 return VAR_1;
}
