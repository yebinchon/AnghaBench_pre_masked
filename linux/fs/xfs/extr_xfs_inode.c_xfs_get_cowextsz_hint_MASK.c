
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
struct TYPE_2__ {int di_flags2; scalar_t__ di_cowextsize; } ;
struct xfs_inode {TYPE_1__ i_d; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct xfs_inode*) ;

xfs_extlen_t
FUNC_2(
 struct xfs_inode *VAR_2)
{
 xfs_extlen_t VAR_3, VAR_4;

 VAR_3 = 0;
 if (VAR_2->i_d.di_flags2 & VAR_1)
  VAR_3 = VAR_2->i_d.di_cowextsize;
 VAR_4 = FUNC_1(VAR_2);

 VAR_3 = FUNC_0(VAR_3, VAR_4);
 if (VAR_3 == 0)
  return VAR_0;
 return VAR_3;
}
