
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_fsize_t ;
struct TYPE_2__ {scalar_t__ di_size; } ;
struct xfs_inode {TYPE_1__ i_d; } ;


 int FUNC_0 (struct xfs_inode*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline xfs_fsize_t
FUNC_2(struct xfs_inode *VAR_0, xfs_fsize_t VAR_1)
{
 xfs_fsize_t VAR_2 = FUNC_1(FUNC_0(VAR_0));

 if (VAR_1 > VAR_2 || VAR_1 < 0)
  VAR_1 = VAR_2;
 return VAR_1 > VAR_0->i_d.di_size ? VAR_1 : 0;
}
