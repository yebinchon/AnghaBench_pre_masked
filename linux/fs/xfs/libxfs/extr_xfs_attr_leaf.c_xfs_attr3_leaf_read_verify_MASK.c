
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_failaddr_t ;
struct xfs_mount {int m_sb; } ;
struct xfs_buf {struct xfs_mount* b_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (struct xfs_buf*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_buf*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(
 struct xfs_buf *VAR_4)
{
 struct xfs_mount *VAR_5 = VAR_4->b_mount;
 xfs_failaddr_t VAR_6;

 if (FUNC_2(&VAR_5->m_sb) &&
      !FUNC_1(VAR_4, VAR_2))
  FUNC_3(VAR_4, -VAR_0, VAR_3);
 else {
  VAR_6 = FUNC_0(VAR_4);
  if (VAR_6)
   FUNC_3(VAR_4, -VAR_1, VAR_6);
 }
}
