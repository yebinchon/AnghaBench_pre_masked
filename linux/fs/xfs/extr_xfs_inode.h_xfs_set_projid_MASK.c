
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_2__ {void* di_projid_lo; void* di_projid_hi; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
typedef int prid_t ;



__attribute__((used)) static inline void
FUNC_0(struct xfs_inode *VAR_0,
  prid_t VAR_1)
{
 VAR_0->i_d.di_projid_hi = (uint16_t) (VAR_1 >> 16);
 VAR_0->i_d.di_projid_lo = (uint16_t) (VAR_1 & 0xffff);
}
