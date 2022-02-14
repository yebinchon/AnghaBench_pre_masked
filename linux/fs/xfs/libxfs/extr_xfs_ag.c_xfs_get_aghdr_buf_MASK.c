
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* xfs_daddr_t ;
struct xfs_mount {int m_ddev_targp; } ;
struct xfs_buf_ops {int dummy; } ;
struct xfs_buf {struct xfs_buf_ops const* b_ops; TYPE_1__* b_maps; void* b_bn; int b_length; } ;
struct TYPE_2__ {void* bm_bn; } ;


 int FUNC_0 (int ) ;
 struct xfs_buf* FUNC_1 (int ,size_t,int ) ;
 int FUNC_2 (struct xfs_buf*,int ,int ) ;

__attribute__((used)) static struct xfs_buf *
FUNC_3(
 struct xfs_mount *VAR_0,
 xfs_daddr_t VAR_1,
 size_t VAR_2,
 const struct xfs_buf_ops *VAR_3)
{
 struct xfs_buf *VAR_4;

 VAR_4 = FUNC_1(VAR_0->m_ddev_targp, VAR_2, 0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_2(VAR_4, 0, FUNC_0(VAR_4->b_length));
 VAR_4->b_bn = VAR_1;
 VAR_4->b_maps[0].bm_bn = VAR_1;
 VAR_4->b_ops = VAR_3;

 return VAR_4;
}
