
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct xfs_log_item {int li_flags; } ;
struct xfs_inode {scalar_t__ i_ino; TYPE_1__* i_itemp; } ;
struct TYPE_2__ {struct xfs_log_item ili_item; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct xfs_inode*,int ) ;
 int FUNC_5 (struct xfs_inode*,int ) ;
 int FUNC_6 (struct xfs_inode*,int) ;
 int FUNC_7 (int,int) ;

void
FUNC_8(
 struct xfs_inode *VAR_7,
 uint VAR_8,
 struct xfs_inode *VAR_9,
 uint VAR_10)
{
 struct xfs_inode *VAR_11;
 uint VAR_12;
 int VAR_13 = 0;
 struct xfs_log_item *VAR_14;

 FUNC_0(FUNC_2(VAR_8) == 1);
 FUNC_0(FUNC_2(VAR_10) == 1);
 FUNC_0(!(VAR_8 & (VAR_3|VAR_2)));
 FUNC_0(!(VAR_10 & (VAR_3|VAR_2)));
 FUNC_0(!(VAR_8 & (VAR_6|VAR_5)) ||
        !(VAR_8 & (VAR_1|VAR_0)));
 FUNC_0(!(VAR_10 & (VAR_6|VAR_5)) ||
        !(VAR_10 & (VAR_1|VAR_0)));
 FUNC_0(!(VAR_10 & (VAR_6|VAR_5)) ||
        !(VAR_8 & (VAR_1|VAR_0)));
 FUNC_0(!(VAR_8 & (VAR_6|VAR_5)) ||
        !(VAR_10 & (VAR_1|VAR_0)));

 FUNC_0(VAR_7->i_ino != VAR_9->i_ino);

 if (VAR_7->i_ino > VAR_9->i_ino) {
  VAR_11 = VAR_7;
  VAR_7 = VAR_9;
  VAR_9 = VAR_11;
  VAR_12 = VAR_8;
  VAR_8 = VAR_10;
  VAR_10 = VAR_12;
 }

 again:
 FUNC_4(VAR_7, FUNC_7(VAR_8, 0));






 VAR_14 = &VAR_7->i_itemp->ili_item;
 if (VAR_14 && FUNC_3(VAR_4, &VAR_14->li_flags)) {
  if (!FUNC_5(VAR_9, FUNC_7(VAR_10, 1))) {
   FUNC_6(VAR_7, VAR_8);
   if ((++VAR_13 % 5) == 0)
    FUNC_1(1);
   goto again;
  }
 } else {
  FUNC_4(VAR_9, FUNC_7(VAR_10, 1));
 }
}
