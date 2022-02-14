
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int sb_dblocks; } ;
struct xfs_mount {int* m_low_space; TYPE_1__ m_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

void
FUNC_1(
 struct xfs_mount *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  uint64_t VAR_3 = VAR_1->m_sb.sb_dblocks;

  FUNC_0(VAR_3, 100);
  VAR_1->m_low_space[VAR_2] = VAR_3 * (VAR_2 + 1);
 }
}
