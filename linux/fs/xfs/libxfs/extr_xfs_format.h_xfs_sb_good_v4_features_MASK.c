
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_sb {int sb_versionnum; int sb_features2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline bool FUNC_0(struct xfs_sb *VAR_5)
{
 if (!(VAR_5->sb_versionnum & VAR_1))
  return 0;
 if (!(VAR_5->sb_versionnum & VAR_2))
  return 0;


 if ((VAR_5->sb_versionnum & ~VAR_4) ||
     ((VAR_5->sb_versionnum & VAR_3) &&
      (VAR_5->sb_features2 & ~VAR_0)))
  return 0;

 return 1;
}
