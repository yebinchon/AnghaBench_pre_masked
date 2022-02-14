
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf_ops {int (* verify_read ) (struct xfs_buf*) ;} ;
struct xfs_buf {int b_flags; scalar_t__ b_error; struct xfs_buf_ops const* b_ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_buf*) ;

int
FUNC_2(
 struct xfs_buf *VAR_1,
 const struct xfs_buf_ops *VAR_2)
{
 FUNC_0(VAR_1->b_flags & VAR_0);
 FUNC_0(VAR_1->b_error == 0);

 if (!VAR_2 || VAR_1->b_ops)
  return 0;

 VAR_1->b_ops = VAR_2;
 VAR_1->b_ops->verify_read(VAR_1);
 if (VAR_1->b_error)
  VAR_1->b_flags &= ~VAR_0;
 return VAR_1->b_error;
}
