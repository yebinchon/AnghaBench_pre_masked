
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
struct xfs_perag {int dummy; } ;
struct xfs_mount {int m_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct xfs_perag*,int ) ;
 struct xfs_perag* FUNC_1 (struct xfs_mount*,int ) ;
 int FUNC_2 (struct xfs_perag*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_mount *VAR_3,
 xfs_agnumber_t VAR_4)
{
 struct xfs_perag *VAR_5;
 int VAR_6 = 0;

 if (!FUNC_3(&VAR_3->m_sb))
  return 0;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (FUNC_0(VAR_5, VAR_2) ||
     FUNC_0(VAR_5, VAR_1))
  VAR_6 = -VAR_0;
 FUNC_2(VAR_5);
 return VAR_6;
}
