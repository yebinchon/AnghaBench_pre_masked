
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_sb {int sb_features2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct xfs_sb*) ;
 scalar_t__ FUNC_1 (struct xfs_sb*) ;

__attribute__((used)) static inline bool FUNC_2(struct xfs_sb *VAR_2)
{
 return (FUNC_0(VAR_2) == VAR_1) ||
        (FUNC_1(VAR_2) &&
  (VAR_2->sb_features2 & VAR_0));
}
