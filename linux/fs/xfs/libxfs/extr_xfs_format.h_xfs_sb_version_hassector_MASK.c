
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_sb {int sb_versionnum; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct xfs_sb *VAR_1)
{
 return (VAR_1->sb_versionnum & VAR_0);
}
