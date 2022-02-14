
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
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(
 struct xfs_owner_info *VAR_4,
 uint64_t VAR_5,
 uint64_t VAR_6,
 unsigned int VAR_7)
{
 VAR_4->oi_owner = VAR_5;
 VAR_4->oi_offset = FUNC_0(VAR_6);
 VAR_4->oi_flags = 0;
 if (VAR_7 & VAR_2)
  VAR_4->oi_flags |= VAR_0;
 if (VAR_7 & VAR_3)
  VAR_4->oi_flags |= VAR_1;
}
