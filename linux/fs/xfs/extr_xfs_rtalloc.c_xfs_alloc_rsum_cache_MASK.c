
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m_rsum_cache; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef int xfs_extlen_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static void
FUNC_2(
 xfs_mount_t *VAR_0,
 xfs_extlen_t VAR_1)
{





 VAR_0->m_rsum_cache = FUNC_0(VAR_1, 0);
 if (!VAR_0->m_rsum_cache)
  FUNC_1(VAR_0, "could not allocate realtime summary cache");
}
