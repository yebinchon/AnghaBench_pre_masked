
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfs_da_state_t ;
struct TYPE_5__ {int op_flags; } ;
typedef TYPE_1__ xfs_da_args_t ;
struct xfs_buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_buf*,TYPE_1__*,int*,int *) ;
 int FUNC_1 (struct xfs_buf*,TYPE_1__*,int*,int *) ;

int
FUNC_2(
 struct xfs_buf *VAR_1,
 xfs_da_args_t *VAR_2,
 int *VAR_3,
 xfs_da_state_t *VAR_4)
{
 if (VAR_2->op_flags & VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3,
       VAR_4);
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
