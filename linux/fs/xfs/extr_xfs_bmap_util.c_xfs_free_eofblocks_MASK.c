
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_ufsize_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_filblks_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {TYPE_1__* m_super; } ;
struct xfs_inode {scalar_t__ i_delayed_blks; struct xfs_mount* i_mount; } ;
struct xfs_bmbt_irec {scalar_t__ br_startblock; } ;
struct TYPE_4__ {int tr_itruncate; } ;
struct TYPE_3__ {int s_maxbytes; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (struct xfs_inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct xfs_mount*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct xfs_mount*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct xfs_inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xfs_inode*,scalar_t__,scalar_t__,struct xfs_bmbt_irec*,int*,int ) ;
 int FUNC_8 (struct xfs_inode*,int ) ;
 int FUNC_9 (struct xfs_inode*) ;
 int FUNC_10 (struct xfs_trans**,struct xfs_inode*,int ,scalar_t__,int ) ;
 int FUNC_11 (struct xfs_inode*,int ) ;
 int FUNC_12 (struct xfs_inode*) ;
 int FUNC_13 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_14 (struct xfs_trans*) ;
 int FUNC_15 (struct xfs_trans*) ;
 int FUNC_16 (struct xfs_trans*,struct xfs_inode*,int ) ;

int
FUNC_17(
 struct xfs_inode *VAR_5)
{
 struct xfs_trans *VAR_6;
 int VAR_7;
 xfs_fileoff_t VAR_8;
 xfs_fileoff_t VAR_9;
 xfs_filblks_t VAR_10;
 int VAR_11;
 struct xfs_bmbt_irec VAR_12;
 struct xfs_mount *VAR_13 = VAR_5->i_mount;





 VAR_8 = FUNC_3(VAR_13, (xfs_ufsize_t)FUNC_5(VAR_5));
 VAR_9 = FUNC_3(VAR_13, VAR_13->m_super->s_maxbytes);
 if (VAR_9 <= VAR_8)
  return 0;
 VAR_10 = VAR_9 - VAR_8;

 VAR_11 = 1;
 FUNC_8(VAR_5, VAR_4);
 VAR_7 = FUNC_7(VAR_5, VAR_8, VAR_10, &VAR_12, &VAR_11, 0);
 FUNC_11(VAR_5, VAR_4);





 if (!VAR_7 && (VAR_11 != 0) &&
     (VAR_12.br_startblock != VAR_0 ||
      VAR_5->i_delayed_blks)) {



  VAR_7 = FUNC_12(VAR_5);
  if (VAR_7)
   return VAR_7;


  FUNC_6(FUNC_2(VAR_5));

  VAR_7 = FUNC_13(VAR_13, &FUNC_1(VAR_13)->tr_itruncate, 0, 0, 0,
    &VAR_6);
  if (VAR_7) {
   FUNC_0(FUNC_4(VAR_13));
   return VAR_7;
  }

  FUNC_8(VAR_5, VAR_3);
  FUNC_16(VAR_6, VAR_5, 0);







  VAR_7 = FUNC_10(&VAR_6, VAR_5, VAR_2,
     FUNC_5(VAR_5), VAR_1);
  if (VAR_7) {




   FUNC_14(VAR_6);
  } else {
   VAR_7 = FUNC_15(VAR_6);
   if (!VAR_7)
    FUNC_9(VAR_5);
  }

  FUNC_11(VAR_5, VAR_3);
 }
 return VAR_7;
}
