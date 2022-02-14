
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xfs_sb {int sb_features_ro_compat; } ;



__attribute__((used)) static inline bool
FUNC_0(
 struct xfs_sb *VAR_0,
 uint32_t VAR_1)
{
 return (VAR_0->sb_features_ro_compat & VAR_1) != 0;
}
