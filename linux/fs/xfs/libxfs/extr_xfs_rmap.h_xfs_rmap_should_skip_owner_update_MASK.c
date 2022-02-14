
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_owner_info {scalar_t__ oi_owner; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(
 const struct xfs_owner_info *VAR_1)
{
 return VAR_1->oi_owner == VAR_0;
}
