
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_ino_t ;
struct xfs_sb {scalar_t__ sb_uquotino; scalar_t__ sb_gquotino; scalar_t__ sb_pquotino; } ;



__attribute__((used)) static inline bool
FUNC_0(struct xfs_sb *VAR_0, xfs_ino_t VAR_1)
{
 return (VAR_1 == VAR_0->sb_uquotino ||
  VAR_1 == VAR_0->sb_gquotino ||
  VAR_1 == VAR_0->sb_pquotino);
}
