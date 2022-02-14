
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct xfs_ifork {int if_bytes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct xfs_inode*,int) ;
 struct xfs_ifork* FUNC_1 (struct xfs_inode*,int) ;
 int FUNC_2 (struct xfs_inode*,int ,int) ;

__attribute__((used)) static inline void
FUNC_3(
 struct xfs_inode *VAR_1,
 int VAR_2)
{
 struct xfs_ifork *VAR_3;

 if (FUNC_0(VAR_1, VAR_2) != VAR_0)
  return;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_2(VAR_1, -VAR_3->if_bytes, VAR_2);
}
