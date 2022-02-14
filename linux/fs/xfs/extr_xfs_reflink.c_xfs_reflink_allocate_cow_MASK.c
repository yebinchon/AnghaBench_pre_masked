
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_fileoff_t ;
typedef int xfs_filblks_t ;
typedef scalar_t__ xfs_extlen_t ;
typedef int uint ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {int i_cowfp; struct xfs_mount* i_mount; } ;
struct xfs_bmbt_irec {scalar_t__ br_state; int br_blockcount; int br_startoff; } ;
struct TYPE_2__ {int tr_write; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct xfs_mount*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct xfs_mount*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct xfs_inode*,struct xfs_bmbt_irec*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct xfs_trans*,struct xfs_inode*,int ,int ,int,scalar_t__,struct xfs_bmbt_irec*,int*) ;
 int FUNC_6 (struct xfs_inode*,struct xfs_bmbt_irec*,int*,int*) ;
 int FUNC_7 (struct xfs_inode*) ;
 int FUNC_8 (struct xfs_inode*) ;
 int FUNC_9 (struct xfs_inode*,int ) ;
 int FUNC_10 (struct xfs_inode*) ;
 int FUNC_11 (struct xfs_inode*) ;
 int FUNC_12 (struct xfs_inode*,int ) ;
 int FUNC_13 (struct xfs_inode*,int ) ;
 int FUNC_14 (struct xfs_inode*,int) ;
 int FUNC_15 (struct xfs_inode*,int ,int ) ;
 int FUNC_16 (struct xfs_mount*,int *,scalar_t__,int ,int ,struct xfs_trans**) ;
 int FUNC_17 (struct xfs_trans*) ;
 int FUNC_18 (struct xfs_trans*) ;
 int FUNC_19 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_20 (struct xfs_trans*,struct xfs_inode*,scalar_t__,int ,int ) ;
 int FUNC_21 (struct xfs_trans*,struct xfs_inode*,long,int ,int ) ;
 int FUNC_22 (struct xfs_bmbt_irec*,int ,int ) ;

int
FUNC_23(
 struct xfs_inode *VAR_6,
 struct xfs_bmbt_irec *VAR_7,
 bool *VAR_8,
 uint *VAR_9,
 bool VAR_10)
{
 struct xfs_mount *VAR_11 = VAR_6->i_mount;
 xfs_fileoff_t VAR_12 = VAR_7->br_startoff;
 xfs_filblks_t VAR_13 = VAR_7->br_blockcount;
 struct xfs_trans *VAR_14;
 int VAR_15, VAR_16 = 0;
 bool VAR_17;
 xfs_filblks_t VAR_18;
 xfs_extlen_t VAR_19 = 0;

 FUNC_0(FUNC_12(VAR_6, VAR_4));
 if (!VAR_6->i_cowfp) {
  FUNC_0(!FUNC_11(VAR_6));
  FUNC_8(VAR_6);
 }

 VAR_16 = FUNC_6(VAR_6, VAR_7, VAR_8, &VAR_17);
 if (VAR_16 || !*VAR_8)
  return VAR_16;
 if (VAR_17)
  goto convert;

 VAR_18 = FUNC_4(VAR_7->br_startoff,
  VAR_7->br_blockcount, FUNC_7(VAR_6));
 VAR_19 = FUNC_2(VAR_11, VAR_18);

 FUNC_13(VAR_6, *VAR_9);
 VAR_16 = FUNC_16(VAR_11, &FUNC_1(VAR_11)->tr_write, VAR_19, 0, 0, &VAR_14);
 *VAR_9 = VAR_4;
 FUNC_9(VAR_6, *VAR_9);

 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_14(VAR_6, 0);
 if (VAR_16)
  goto out_trans_cancel;




 VAR_16 = FUNC_6(VAR_6, VAR_7, VAR_8, &VAR_17);
 if (VAR_16 || !*VAR_8)
  goto out_trans_cancel;
 if (VAR_17) {
  FUNC_17(VAR_14);
  goto convert;
 }

 VAR_16 = FUNC_20(VAR_14, VAR_6, VAR_19, 0,
   VAR_5);
 if (VAR_16)
  goto out_trans_cancel;

 FUNC_19(VAR_14, VAR_6, 0);


 VAR_15 = 1;
 VAR_16 = FUNC_5(VAR_14, VAR_6, VAR_7->br_startoff, VAR_7->br_blockcount,
   VAR_1 | VAR_2,
   VAR_19, VAR_7, &VAR_15);
 if (VAR_16)
  goto out_unreserve;

 FUNC_10(VAR_6);
 VAR_16 = FUNC_18(VAR_14);
 if (VAR_16)
  return VAR_16;





 if (VAR_15 == 0)
  return -VAR_0;
convert:
 FUNC_22(VAR_7, VAR_12, VAR_13);





 if (!VAR_10 || VAR_7->br_state == VAR_3)
  return 0;
 FUNC_3(VAR_6, VAR_7);
 return FUNC_15(VAR_6, VAR_12, VAR_13);

out_unreserve:
 FUNC_21(VAR_14, VAR_6, (long)VAR_19, 0,
   VAR_5);
out_trans_cancel:
 FUNC_17(VAR_14);
 return VAR_16;
}
