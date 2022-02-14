
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_failaddr_t ;
struct xfs_da_blkinfo {int magic; } ;
struct xfs_buf {TYPE_1__* b_ops; struct xfs_da_blkinfo* b_addr; } ;
struct TYPE_3__ {int (* verify_read ) (struct xfs_buf*) ;} ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_buf*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (struct xfs_buf*,int ) ;
 int FUNC_4 (struct xfs_buf*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (struct xfs_buf*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(
 struct xfs_buf *VAR_6)
{
 struct xfs_da_blkinfo *VAR_7 = VAR_6->b_addr;
 xfs_failaddr_t VAR_8;

 switch (FUNC_0(VAR_7->magic)) {
  case 131:
   if (!FUNC_3(VAR_6, VAR_2)) {
    FUNC_5(VAR_6, -VAR_0,
      VAR_3);
    break;
   }

  case 130:
   VAR_8 = FUNC_4(VAR_6);
   if (VAR_8)
    FUNC_5(VAR_6, -VAR_1, VAR_8);
   return;
  case 132:
  case 133:
   VAR_6->b_ops = &VAR_4;
   VAR_6->b_ops->verify_read(VAR_6);
   return;
  case 129:
  case 128:
   VAR_6->b_ops = &VAR_5;
   VAR_6->b_ops->verify_read(VAR_6);
   return;
  default:
   FUNC_5(VAR_6, -VAR_1, VAR_3);
   break;
 }
}
