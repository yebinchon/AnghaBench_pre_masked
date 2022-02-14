
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_sb {scalar_t__ sb_bad_features2; scalar_t__ sb_features2; } ;



__attribute__((used)) static inline bool FUNC_0(struct xfs_sb *VAR_0)
{
 return VAR_0->sb_bad_features2 != VAR_0->sb_features2;
}
