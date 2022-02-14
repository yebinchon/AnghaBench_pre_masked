
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_ino_t ;
struct xfs_owner_info {int oi_flags; scalar_t__ oi_offset; int oi_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void
FUNC_0(
 struct xfs_owner_info *VAR_3,
 xfs_ino_t VAR_4,
 int VAR_5)
{
 VAR_3->oi_owner = VAR_4;
 VAR_3->oi_offset = 0;
 VAR_3->oi_flags = VAR_2;
 if (VAR_5 == VAR_0)
  VAR_3->oi_flags |= VAR_1;
}
