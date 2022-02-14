
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_failaddr_t ;
struct xfs_da_blkinfo {int magic; } ;
struct xfs_buf {TYPE_1__* b_ops; struct xfs_da_blkinfo* b_addr; } ;
struct TYPE_3__ {int (* verify_struct ) (struct xfs_buf*) ;} ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_buf*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (struct xfs_buf*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static xfs_failaddr_t
FUNC_4(
 struct xfs_buf *VAR_3)
{
 struct xfs_da_blkinfo *VAR_4 = VAR_3->b_addr;

 switch (FUNC_0(VAR_4->magic)) {
 case 131:
 case 130:
  return FUNC_3(VAR_3);
 case 132:
 case 133:
  VAR_3->b_ops = &VAR_1;
  return VAR_3->b_ops->verify_struct(VAR_3);
 case 129:
 case 128:
  VAR_3->b_ops = &VAR_2;
  return VAR_3->b_ops->verify_struct(VAR_3);
 default:
  return VAR_0;
 }
}
