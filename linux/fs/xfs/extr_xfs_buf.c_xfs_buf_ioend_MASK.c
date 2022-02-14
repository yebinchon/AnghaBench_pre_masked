
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_buf {int b_flags; int b_iowait; int (* b_iodone ) (struct xfs_buf*) ;int b_error; TYPE_1__* b_ops; scalar_t__ b_io_error; } ;
struct TYPE_2__ {int (* verify_read ) (struct xfs_buf*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xfs_buf*) ;
 int FUNC_3 (struct xfs_buf*) ;
 int FUNC_4 (struct xfs_buf*,int ) ;
 int FUNC_5 (struct xfs_buf*,scalar_t__) ;
 int FUNC_6 (struct xfs_buf*) ;

void
FUNC_7(
 struct xfs_buf *VAR_6)
{
 bool VAR_7 = VAR_6->b_flags & VAR_2;

 FUNC_4(VAR_6, VAR_5);

 VAR_6->b_flags &= ~(VAR_2 | VAR_4 | VAR_3);





 if (!VAR_6->b_error && VAR_6->b_io_error)
  FUNC_5(VAR_6, VAR_6->b_io_error);


 if (VAR_7 && !VAR_6->b_error && VAR_6->b_ops) {
  FUNC_0(!VAR_6->b_iodone);
  VAR_6->b_ops->verify_read(VAR_6);
 }

 if (!VAR_6->b_error)
  VAR_6->b_flags |= VAR_1;

 if (VAR_6->b_iodone)
  (*(VAR_6->b_iodone))(VAR_6);
 else if (VAR_6->b_flags & VAR_0)
  FUNC_6(VAR_6);
 else
  FUNC_1(&VAR_6->b_iowait);
}
