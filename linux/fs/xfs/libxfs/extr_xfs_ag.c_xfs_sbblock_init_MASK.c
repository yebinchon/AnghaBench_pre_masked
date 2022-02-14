
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_sb; } ;
struct xfs_dsb {int sb_inprogress; } ;
struct xfs_buf {int dummy; } ;
struct aghdr_init_data {int dummy; } ;


 struct xfs_dsb* FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (struct xfs_dsb*,int *) ;

__attribute__((used)) static void
FUNC_2(
 struct xfs_mount *VAR_0,
 struct xfs_buf *VAR_1,
 struct aghdr_init_data *VAR_2)
{
 struct xfs_dsb *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3, &VAR_0->m_sb);
 VAR_3->sb_inprogress = 1;
}
