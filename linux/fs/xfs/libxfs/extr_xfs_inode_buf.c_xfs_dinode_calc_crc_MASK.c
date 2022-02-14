
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int sb_inodesize; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_dinode {int di_version; int di_crc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ,int ) ;

void
FUNC_4(
 struct xfs_mount *VAR_1,
 struct xfs_dinode *VAR_2)
{
 uint32_t VAR_3;

 if (VAR_2->di_version < 3)
  return;

 FUNC_0(FUNC_2(&VAR_1->m_sb));
 VAR_3 = FUNC_3((char *)VAR_2, VAR_1->m_sb.sb_inodesize,
         VAR_0);
 VAR_2->di_crc = FUNC_1(VAR_3);
}
