
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_failaddr_t ;
typedef int xfs_daddr_t ;
typedef int xfs_dablk_t ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {int dummy; } ;
struct xfs_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfs_trans*,struct xfs_inode*,int ,int ,struct xfs_buf**,int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct xfs_inode*,int ,struct xfs_buf*) ;
 int FUNC_2 (struct xfs_trans*,struct xfs_buf*) ;
 int FUNC_3 (struct xfs_trans*,struct xfs_buf*,int ) ;
 int FUNC_4 (struct xfs_buf*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(
 struct xfs_trans *VAR_4,
 struct xfs_inode *VAR_5,
 xfs_dablk_t VAR_6,
 xfs_daddr_t VAR_7,
 struct xfs_buf **VAR_8)
{
 xfs_failaddr_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
    VAR_2, &VAR_3);
 if (VAR_10 || !*VAR_8)
  return VAR_10;


 VAR_9 = FUNC_1(VAR_5, VAR_6, *VAR_8);
 if (VAR_9) {
  FUNC_4(*VAR_8, -VAR_0, VAR_9);
  FUNC_2(VAR_4, *VAR_8);
  return -VAR_0;
 }


 if (VAR_4)
  FUNC_3(VAR_4, *VAR_8, VAR_1);

 return 0;
}
