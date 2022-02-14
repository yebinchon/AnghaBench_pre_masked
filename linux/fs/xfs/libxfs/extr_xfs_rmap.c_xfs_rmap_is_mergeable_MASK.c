
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct xfs_rmap_irec {scalar_t__ rm_owner; unsigned int rm_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static bool
FUNC_0(
 struct xfs_rmap_irec *VAR_4,
 uint64_t VAR_5,
 unsigned int VAR_6)
{
 if (VAR_4->rm_owner == VAR_2)
  return 0;
 if (VAR_4->rm_owner != VAR_5)
  return 0;
 if ((VAR_6 & VAR_3) ^
     (VAR_4->rm_flags & VAR_3))
  return 0;
 if ((VAR_6 & VAR_0) ^
     (VAR_4->rm_flags & VAR_0))
  return 0;
 if ((VAR_6 & VAR_1) ^
     (VAR_4->rm_flags & VAR_1))
  return 0;
 return 1;
}
