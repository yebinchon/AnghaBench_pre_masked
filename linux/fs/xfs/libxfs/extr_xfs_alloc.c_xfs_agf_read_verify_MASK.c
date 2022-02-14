
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_failaddr_t ;
struct xfs_mount {int m_sb; } ;
struct xfs_buf {struct xfs_mount* b_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct xfs_mount*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_buf*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct xfs_buf*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(
 struct xfs_buf *VAR_5)
{
 struct xfs_mount *VAR_6 = VAR_5->b_mount;
 xfs_failaddr_t VAR_7;

 if (FUNC_3(&VAR_6->m_sb) &&
     !FUNC_2(VAR_5, VAR_2))
  FUNC_4(VAR_5, -VAR_0, VAR_4);
 else {
  VAR_7 = FUNC_1(VAR_5);
  if (FUNC_0(VAR_7, VAR_6, VAR_3))
   FUNC_4(VAR_5, -VAR_1, VAR_7);
 }
}
