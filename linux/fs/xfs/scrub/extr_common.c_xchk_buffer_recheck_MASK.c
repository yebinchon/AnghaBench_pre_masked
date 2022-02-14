
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_failaddr_t ;
struct xfs_scrub {TYPE_2__* sm; } ;
struct xfs_buf {int b_bn; TYPE_1__* b_ops; } ;
struct TYPE_4__ {int sm_flags; } ;
struct TYPE_3__ {int (* verify_struct ) (struct xfs_buf*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (struct xfs_scrub*,int ,int ) ;
 int FUNC_2 (struct xfs_scrub*,struct xfs_buf*) ;
 int FUNC_3 (struct xfs_scrub*) ;

void
FUNC_4(
 struct xfs_scrub *VAR_1,
 struct xfs_buf *VAR_2)
{
 xfs_failaddr_t VAR_3;

 if (VAR_2->b_ops == ((void*)0)) {
  FUNC_2(VAR_1, VAR_2);
  return;
 }
 if (VAR_2->b_ops->verify_struct == ((void*)0)) {
  FUNC_3(VAR_1);
  return;
 }
 VAR_3 = VAR_2->b_ops->verify_struct(VAR_2);
 if (!VAR_3)
  return;
 VAR_1->sm->sm_flags |= VAR_0;
 FUNC_1(VAR_1, VAR_2->b_bn, VAR_3);
}
