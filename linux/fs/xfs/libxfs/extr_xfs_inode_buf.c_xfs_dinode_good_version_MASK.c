
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_sb; } ;
typedef int __u8 ;


 scalar_t__ FUNC_0 (int *) ;

bool
FUNC_1(
 struct xfs_mount *VAR_0,
 __u8 VAR_1)
{
 if (FUNC_0(&VAR_0->m_sb))
  return VAR_1 == 3;

 return VAR_1 == 1 || VAR_1 == 2;
}
