
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_failaddr_t ;
struct xfs_inode {int dummy; } ;
struct TYPE_2__ {int * if_data; } ;
struct xfs_ifork {int if_bytes; TYPE_1__ if_u1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xfs_ifork* FUNC_0 (struct xfs_inode*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct xfs_inode*,int *) ;
 scalar_t__ FUNC_2 (struct xfs_inode*,int *) ;
 int FUNC_3 (struct xfs_inode*,int ,char*,int *,int ,scalar_t__) ;

bool
FUNC_4(
 struct xfs_inode *VAR_4)
{
 struct xfs_ifork *VAR_5;
 xfs_failaddr_t VAR_6;

 VAR_6 = FUNC_2(VAR_4, &VAR_3);
 if (VAR_6) {
  VAR_5 = FUNC_0(VAR_4, VAR_2);
  FUNC_3(VAR_4, -VAR_0, "data fork",
    VAR_5->if_u1.if_data, VAR_5->if_bytes, VAR_6);
  return 0;
 }

 VAR_6 = FUNC_1(VAR_4, &VAR_3);
 if (VAR_6) {
  VAR_5 = FUNC_0(VAR_4, VAR_1);
  FUNC_3(VAR_4, -VAR_0, "attr fork",
    VAR_5 ? VAR_5->if_u1.if_data : ((void*)0),
    VAR_5 ? VAR_5->if_bytes : 0, VAR_6);
  return 0;
 }
 return 1;
}
