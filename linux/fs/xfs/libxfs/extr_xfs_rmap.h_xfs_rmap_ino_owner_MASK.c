
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_ino_t ;
typedef int xfs_fileoff_t ;
struct xfs_owner_info {int oi_flags; int oi_offset; int oi_owner; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(
 struct xfs_owner_info *VAR_2,
 xfs_ino_t VAR_3,
 int VAR_4,
 xfs_fileoff_t VAR_5)
{
 VAR_2->oi_owner = VAR_3;
 VAR_2->oi_offset = VAR_5;
 VAR_2->oi_flags = 0;
 if (VAR_4 == VAR_0)
  VAR_2->oi_flags |= VAR_1;
}
