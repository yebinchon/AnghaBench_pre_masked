
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int dummy; } ;
struct xfs_buf {int dummy; } ;
struct aghdr_init_data {int agno; int type; } ;


 int FUNC_0 (struct xfs_mount*,struct xfs_buf*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(
 struct xfs_mount *VAR_0,
 struct xfs_buf *VAR_1,
 struct aghdr_init_data *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2->type, 0, 0, VAR_2->agno);
}
