
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_ino_t ;
typedef scalar_t__ xfs_agnumber_t ;
typedef int xfs_agino_t ;
struct TYPE_2__ {scalar_t__ sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 scalar_t__ FUNC_0 (struct xfs_mount*,scalar_t__,int ) ;
 int FUNC_1 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_3(
 struct xfs_mount *VAR_0,
 xfs_ino_t VAR_1)
{
 xfs_agnumber_t VAR_2 = FUNC_2(VAR_0, VAR_1);
 xfs_agino_t VAR_3 = FUNC_1(VAR_0, VAR_1);

 return VAR_2 >= VAR_0->m_sb.sb_agcount ||
        VAR_1 != FUNC_0(VAR_0, VAR_2, VAR_3);
}
