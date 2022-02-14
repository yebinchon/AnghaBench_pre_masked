
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_ino_t ;
struct xfs_scrub {int ip; int tp; struct xfs_mount* mp; } ;
struct xfs_mount {int m_sb; } ;


 int FUNC_0 (struct xfs_mount*,int ) ;
 int FUNC_1 (struct xfs_mount*,int ) ;
 int FUNC_2 (struct xfs_scrub*,int ) ;
 int FUNC_3 (struct xfs_scrub*,int ) ;
 int FUNC_4 (struct xfs_scrub*,int ,int ,int*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(
 struct xfs_scrub *VAR_0,
 xfs_ino_t VAR_1)
{
 struct xfs_mount *VAR_2 = VAR_0->mp;
 bool VAR_3;
 int VAR_4;

 if (!FUNC_7(&VAR_2->m_sb))
  return;

 VAR_4 = FUNC_6(VAR_0->tp, VAR_0->ip,
   &VAR_3);
 if (!FUNC_4(VAR_0, FUNC_1(VAR_2, VAR_1),
   FUNC_0(VAR_2, VAR_1), &VAR_4))
  return;
 if (FUNC_5(VAR_0->ip) && !VAR_3)
  FUNC_3(VAR_0, VAR_1);
 else if (!FUNC_5(VAR_0->ip) && VAR_3)
  FUNC_2(VAR_0, VAR_1);
}
