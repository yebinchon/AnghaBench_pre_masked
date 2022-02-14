
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sb_features_ro_compat; } ;
typedef TYPE_1__ xfs_sb_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline bool FUNC_1(xfs_sb_t *VAR_2)
{
 return (FUNC_0(VAR_2) == VAR_1) &&
  (VAR_2->sb_features_ro_compat & VAR_0);
}
