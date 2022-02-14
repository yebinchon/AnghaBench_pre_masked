
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int xfs_mount_t ;
struct TYPE_15__ {int * i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_16__ {short const ili_fields; } ;
typedef TYPE_3__ xfs_inode_log_item_t ;
typedef int xfs_dinode_t ;
typedef int xfs_bmdr_block_t ;
typedef int xfs_bmbt_rec_t ;
struct TYPE_14__ {int * if_data; } ;
struct xfs_ifork {int if_flags; int if_broot_bytes; int * if_broot; int if_bytes; TYPE_1__ if_u1; } ;
struct TYPE_13__ {int i_rdev; } ;


 int FUNC_0 (int) ;
 TYPE_11__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int) ;




 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 struct xfs_ifork* FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int) ;





 int VAR_3 ;

 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int *,int ) ;
 int FUNC_11 (int *,int *,int ,int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (TYPE_2__*,int *,int) ;

void
FUNC_14(
 xfs_inode_t *VAR_4,
 xfs_dinode_t *VAR_5,
 xfs_inode_log_item_t *VAR_6,
 int VAR_7)
{
 char *VAR_8;
 struct xfs_ifork *VAR_9;
 xfs_mount_t *VAR_10;
 static const short VAR_11[2] =
  { 130, 133 };
 static const short VAR_12[2] =
  { 129, 132 };
 static const short VAR_13[2] =
  { 128, 131 };

 if (!VAR_6)
  return;
 VAR_9 = FUNC_7(VAR_4, VAR_7);




 if (!VAR_9) {
  FUNC_0(VAR_7 == VAR_0);
  return;
 }
 VAR_8 = FUNC_3(VAR_5, VAR_7);
 VAR_10 = VAR_4->i_mount;
 switch (FUNC_5(VAR_4, VAR_7)) {
 case 134:
  if ((VAR_6->ili_fields & VAR_12[VAR_7]) &&
      (VAR_9->if_bytes > 0)) {
   FUNC_0(VAR_9->if_u1.if_data != ((void*)0));
   FUNC_0(VAR_9->if_bytes <= FUNC_8(VAR_4, VAR_7));
   FUNC_10(VAR_8, VAR_9->if_u1.if_data, VAR_9->if_bytes);
  }
  break;

 case 135:
  FUNC_0((VAR_9->if_flags & VAR_2) ||
         !(VAR_6->ili_fields & VAR_13[VAR_7]));
  if ((VAR_6->ili_fields & VAR_13[VAR_7]) &&
      (VAR_9->if_bytes > 0)) {
   FUNC_0(FUNC_6(VAR_4, VAR_7) > 0);
   (void)FUNC_13(VAR_4, (xfs_bmbt_rec_t *)VAR_8,
    VAR_7);
  }
  break;

 case 137:
  if ((VAR_6->ili_fields & VAR_11[VAR_7]) &&
      (VAR_9->if_broot_bytes > 0)) {
   FUNC_0(VAR_9->if_broot != ((void*)0));
   FUNC_0(FUNC_2(VAR_9->if_broot) <=
           FUNC_8(VAR_4, VAR_7));
   FUNC_11(VAR_10, VAR_9->if_broot, VAR_9->if_broot_bytes,
    (xfs_bmdr_block_t *)VAR_8,
    FUNC_4(VAR_5, VAR_10, VAR_7));
  }
  break;

 case 136:
  if (VAR_6->ili_fields & VAR_3) {
   FUNC_0(VAR_7 == VAR_1);
   FUNC_12(VAR_5,
     FUNC_9(FUNC_1(VAR_4)->i_rdev));
  }
  break;

 default:
  FUNC_0(0);
  break;
 }
}
