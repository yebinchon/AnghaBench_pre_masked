
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct xfs_mount* i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
typedef int xfs_fsblock_t ;
typedef int xfs_bmbt_rec_t ;
typedef int uint ;
struct xfs_mount {int dummy; } ;
struct xfs_ifork {int if_broot_bytes; char* if_broot; int if_flags; } ;
typedef char xfs_btree_block ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,char*,int,int) ;
 size_t FUNC_3 (struct xfs_mount*,int) ;
 int FUNC_4 (struct xfs_mount*) ;
 scalar_t__ FUNC_5 (struct xfs_mount*,char*,int) ;
 int VAR_1 ;
 struct xfs_ifork* FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 void* FUNC_8 (size_t,int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,size_t,int ) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (struct xfs_mount*,int,int ) ;

void
FUNC_14(
 xfs_inode_t *VAR_2,
 int VAR_3,
 int VAR_4)
{
 struct xfs_mount *VAR_5 = VAR_2->i_mount;
 int VAR_6;
 struct xfs_ifork *VAR_7;
 struct xfs_btree_block *VAR_8;
 int VAR_9;
 size_t VAR_10;
 char *VAR_11;
 char *VAR_12;




 if (VAR_3 == 0) {
  return;
 }

 VAR_7 = FUNC_6(VAR_2, VAR_4);
 if (VAR_3 > 0) {




  if (VAR_7->if_broot_bytes == 0) {
   VAR_10 = FUNC_3(VAR_5, VAR_3);
   VAR_7->if_broot = FUNC_8(VAR_10, VAR_0);
   VAR_7->if_broot_bytes = (int)VAR_10;
   return;
  }







  VAR_6 = FUNC_13(VAR_5, VAR_7->if_broot_bytes, 0);
  VAR_9 = VAR_6 + VAR_3;
  VAR_10 = FUNC_3(VAR_5, VAR_9);
  VAR_7->if_broot = FUNC_10(VAR_7->if_broot, VAR_10,
    VAR_0);
  VAR_12 = (char *)FUNC_2(VAR_5, VAR_7->if_broot, 1,
           VAR_7->if_broot_bytes);
  VAR_11 = (char *)FUNC_2(VAR_5, VAR_7->if_broot, 1,
           (int)VAR_10);
  VAR_7->if_broot_bytes = (int)VAR_10;
  FUNC_0(FUNC_1(VAR_7->if_broot) <=
   FUNC_7(VAR_2, VAR_4));
  FUNC_12(VAR_11, VAR_12, VAR_6 * (uint)sizeof(xfs_fsblock_t));
  return;
 }






 FUNC_0((VAR_7->if_broot != ((void*)0)) && (VAR_7->if_broot_bytes > 0));
 VAR_6 = FUNC_13(VAR_5, VAR_7->if_broot_bytes, 0);
 VAR_9 = VAR_6 + VAR_3;
 FUNC_0(VAR_9 >= 0);
 if (VAR_9 > 0)
  VAR_10 = FUNC_3(VAR_5, VAR_9);
 else
  VAR_10 = 0;
 if (VAR_10 > 0) {
  VAR_8 = FUNC_8(VAR_10, VAR_0);



  FUNC_11(VAR_8, VAR_7->if_broot,
   FUNC_4(VAR_2->i_mount));
 } else {
  VAR_8 = ((void*)0);
  VAR_7->if_flags &= ~VAR_1;
 }




 if (VAR_9 > 0) {



  VAR_12 = (char *)FUNC_5(VAR_5, VAR_7->if_broot, 1);
  VAR_11 = (char *)FUNC_5(VAR_5, VAR_8, 1);
  FUNC_11(VAR_11, VAR_12, VAR_9 * (uint)sizeof(xfs_bmbt_rec_t));




  VAR_12 = (char *)FUNC_2(VAR_5, VAR_7->if_broot, 1,
           VAR_7->if_broot_bytes);
  VAR_11 = (char *)FUNC_2(VAR_5, VAR_8, 1,
           (int)VAR_10);
  FUNC_11(VAR_11, VAR_12, VAR_9 * (uint)sizeof(xfs_fsblock_t));
 }
 FUNC_9(VAR_7->if_broot);
 VAR_7->if_broot = VAR_8;
 VAR_7->if_broot_bytes = (int)VAR_10;
 if (VAR_7->if_broot)
  FUNC_0(FUNC_1(VAR_7->if_broot) <=
   FUNC_7(VAR_2, VAR_4));
 return;
}
