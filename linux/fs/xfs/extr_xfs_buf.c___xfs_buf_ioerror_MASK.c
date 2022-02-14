
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_failaddr_t ;
struct TYPE_4__ {int b_error; } ;
typedef TYPE_1__ xfs_buf_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

void
FUNC_2(
 xfs_buf_t *VAR_0,
 int VAR_1,
 xfs_failaddr_t VAR_2)
{
 FUNC_0(VAR_1 <= 0 && VAR_1 >= -1000);
 VAR_0->b_error = VAR_1;
 FUNC_1(VAR_0, VAR_1, VAR_2);
}
