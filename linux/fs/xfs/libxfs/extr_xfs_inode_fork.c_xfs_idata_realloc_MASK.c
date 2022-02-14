
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_inode {int dummy; } ;
struct TYPE_2__ {int * if_data; } ;
struct xfs_ifork {int if_bytes; TYPE_1__ if_u1; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct xfs_ifork* FUNC_1 (struct xfs_inode*,int) ;
 int FUNC_2 (struct xfs_inode*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int,int) ;

void
FUNC_6(
 struct xfs_inode *VAR_1,
 int VAR_2,
 int VAR_3)
{
 struct xfs_ifork *VAR_4 = FUNC_1(VAR_1, VAR_3);
 int VAR_5 = (int)VAR_4->if_bytes + VAR_2;

 FUNC_0(VAR_5 >= 0);
 FUNC_0(VAR_5 <= FUNC_2(VAR_1, VAR_3));

 if (VAR_2 == 0)
  return;

 if (VAR_5 == 0) {
  FUNC_3(VAR_4->if_u1.if_data);
  VAR_4->if_u1.if_data = ((void*)0);
  VAR_4->if_bytes = 0;
  return;
 }






 VAR_4->if_u1.if_data = FUNC_4(VAR_4->if_u1.if_data,
   FUNC_5(VAR_5, 4), VAR_0);
 VAR_4->if_bytes = VAR_5;
}
