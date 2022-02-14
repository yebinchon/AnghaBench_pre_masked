
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_fileoff_t ;
struct xfs_mount {TYPE_1__* m_super; } ;
struct TYPE_4__ {int if_flags; } ;
struct xfs_inode {TYPE_2__* i_cowfp; TYPE_2__ i_df; struct xfs_mount* i_mount; } ;
struct xfs_iext_cursor {int dummy; } ;
struct xfs_bmbt_irec {scalar_t__ br_startoff; scalar_t__ br_blockcount; int br_state; int br_startblock; } ;
struct iomap {int type; } ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {scalar_t__ s_maxbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct xfs_mount*) ;
 struct xfs_inode* FUNC_3 (struct inode*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct xfs_inode*,struct iomap*,struct xfs_bmbt_irec*,int) ;
 scalar_t__ FUNC_6 (struct xfs_inode*,TYPE_2__*,scalar_t__,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 unsigned int FUNC_7 (struct xfs_inode*) ;
 scalar_t__ FUNC_8 (struct xfs_inode*) ;
 int FUNC_9 (int *,struct xfs_inode*,int ) ;
 int FUNC_10 (struct xfs_inode*,unsigned int) ;
 int FUNC_11 (struct xfs_bmbt_irec*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_12(
 struct inode *VAR_7,
 loff_t VAR_8,
 loff_t VAR_9,
 unsigned VAR_10,
 struct iomap *VAR_11)
{
 struct xfs_inode *VAR_12 = FUNC_3(VAR_7);
 struct xfs_mount *VAR_13 = VAR_12->i_mount;
 xfs_fileoff_t VAR_14 = FUNC_1(VAR_13, VAR_8);
 xfs_fileoff_t VAR_15 = FUNC_0(VAR_13, VAR_8 + VAR_9);
 xfs_fileoff_t VAR_16 = VAR_3, VAR_17 = VAR_3;
 struct xfs_iext_cursor VAR_18;
 struct xfs_bmbt_irec VAR_19, VAR_20;
 int VAR_21 = 0;
 unsigned VAR_22;

 if (FUNC_2(VAR_13))
  return -VAR_0;

 VAR_22 = FUNC_7(VAR_12);
 if (!(VAR_12->i_df.if_flags & VAR_6)) {
  VAR_21 = FUNC_9(((void*)0), VAR_12, VAR_4);
  if (VAR_21)
   goto out_unlock;
 }

 if (FUNC_6(VAR_12, &VAR_12->i_df, VAR_14, &VAR_18, &VAR_19)) {



  if (VAR_19.br_startoff <= VAR_14)
   goto done;
  VAR_17 = VAR_19.br_startoff;
 } else {



  VAR_17 = FUNC_4(FUNC_0(VAR_13, VAR_8 + VAR_9),
          FUNC_0(VAR_13, VAR_13->m_super->s_maxbytes));
 }





 if (FUNC_8(VAR_12) &&
     FUNC_6(VAR_12, VAR_12->i_cowfp, VAR_14, &VAR_18, &VAR_20))
  VAR_16 = VAR_20.br_startoff;
 if (VAR_16 != VAR_3 && VAR_16 <= VAR_14) {
  if (VAR_17 < VAR_16 + VAR_20.br_blockcount)
   VAR_15 = FUNC_4(VAR_15, VAR_17);
  FUNC_11(&VAR_20, VAR_14, VAR_15);
  VAR_21 = FUNC_5(VAR_12, VAR_11, &VAR_20, 1);





  VAR_11->type = VAR_2;
  goto out_unlock;
 }




 if (VAR_16 != VAR_3 && VAR_16 < VAR_17)
  VAR_19.br_blockcount = VAR_16 - VAR_14;
 else
  VAR_19.br_blockcount = VAR_17 - VAR_14;
 VAR_19.br_startoff = VAR_14;
 VAR_19.br_startblock = VAR_1;
 VAR_19.br_state = VAR_5;
done:
 FUNC_11(&VAR_19, VAR_14, VAR_15);
 VAR_21 = FUNC_5(VAR_12, VAR_11, &VAR_19, 0);
out_unlock:
 FUNC_10(VAR_12, VAR_22);
 return VAR_21;
}
