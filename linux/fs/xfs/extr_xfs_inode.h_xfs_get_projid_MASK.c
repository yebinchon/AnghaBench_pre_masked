
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int di_projid_lo; scalar_t__ di_projid_hi; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
typedef int prid_t ;



__attribute__((used)) static inline prid_t
FUNC_0(struct xfs_inode *VAR_0)
{
 return (prid_t)VAR_0->i_d.di_projid_hi << 16 | VAR_0->i_d.di_projid_lo;
}
