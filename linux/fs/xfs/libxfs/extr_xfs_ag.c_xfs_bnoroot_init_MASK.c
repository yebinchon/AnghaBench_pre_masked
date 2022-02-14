
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct aghdr_init_data {int agno; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_mount*,struct xfs_buf*,int ,int ,int,int ) ;
 int FUNC_1 (struct xfs_mount*,struct xfs_buf*,struct aghdr_init_data*) ;

__attribute__((used)) static void
FUNC_2(
 struct xfs_mount *VAR_1,
 struct xfs_buf *VAR_2,
 struct aghdr_init_data *VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_0, 0, 1, VAR_3->agno);
 FUNC_1(VAR_1, VAR_2, VAR_3);
}
