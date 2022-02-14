
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_sb {int sb_blocklog; int sb_dirblklog; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct xfs_sb *VAR_0)
{
 return 1 << (VAR_0->sb_blocklog + VAR_0->sb_dirblklog);
}
