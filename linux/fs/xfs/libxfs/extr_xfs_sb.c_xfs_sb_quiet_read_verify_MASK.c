
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dsb {scalar_t__ sb_magicnum; } ;
struct xfs_buf {int dummy; } ;


 int VAR_0 ;
 struct xfs_dsb* FUNC_0 (struct xfs_buf*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_buf*,int ) ;
 int FUNC_3 (struct xfs_buf*) ;

__attribute__((used)) static void
FUNC_4(
 struct xfs_buf *VAR_2)
{
 struct xfs_dsb *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->sb_magicnum == FUNC_1(VAR_1)) {

  FUNC_3(VAR_2);
  return;
 }

 FUNC_2(VAR_2, -VAR_0);
}
