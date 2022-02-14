
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xfs_owner_info {int oi_flags; int oi_offset; int oi_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static inline void
FUNC_0(
 const struct xfs_owner_info *VAR_4,
 uint64_t *VAR_5,
 uint64_t *VAR_6,
 unsigned int *VAR_7)
{
 unsigned int VAR_8 = 0;

 *VAR_5 = VAR_4->oi_owner;
 *VAR_6 = VAR_4->oi_offset;
 if (VAR_4->oi_flags & VAR_0)
  VAR_8 |= VAR_2;
 if (VAR_4->oi_flags & VAR_1)
  VAR_8 |= VAR_3;
 *VAR_7 = VAR_8;
}
