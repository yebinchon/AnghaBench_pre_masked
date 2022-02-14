
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_ufsize_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef int uint ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct xfs_mount {int m_generation; TYPE_1__* m_super; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct xfs_bmbt_irec {scalar_t__ br_startblock; } ;
struct iomap {int dummy; } ;
struct inode {int i_mapping; TYPE_2__* i_sb; } ;
typedef scalar_t__ loff_t ;
typedef enum xfs_prealloc_flags { ____Placeholder_xfs_prealloc_flags } xfs_prealloc_flags ;
struct TYPE_4__ {int s_blocksize; } ;
struct TYPE_3__ {scalar_t__ s_maxbytes; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct xfs_mount*) ;
 struct xfs_inode* FUNC_5 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct xfs_inode*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct xfs_inode*,scalar_t__,scalar_t__,struct xfs_bmbt_irec*,int*,int) ;
 int FUNC_13 (struct xfs_inode*,struct iomap*,struct xfs_bmbt_irec*,int) ;
 int FUNC_14 (struct xfs_inode*,int ) ;
 int FUNC_15 (struct xfs_inode*) ;
 int FUNC_16 (struct xfs_inode*,scalar_t__,scalar_t__,struct xfs_bmbt_irec*,int) ;
 scalar_t__ FUNC_17 (struct xfs_inode*) ;
 int FUNC_18 (struct xfs_inode*,int ) ;
 int FUNC_19 (struct xfs_inode*,int) ;

int
FUNC_20(
 struct inode *VAR_10,
 loff_t VAR_11,
 u64 VAR_12,
 struct iomap *VAR_13,
 bool VAR_14,
 u32 *VAR_15)
{
 struct xfs_inode *VAR_16 = FUNC_5(VAR_10);
 struct xfs_mount *VAR_17 = VAR_16->i_mount;
 struct xfs_bmbt_irec VAR_18;
 xfs_fileoff_t VAR_19, VAR_20;
 loff_t VAR_21;
 int VAR_22 = VAR_5;
 int VAR_23 = 1;
 uint VAR_24;
 int VAR_25 = 0;

 if (FUNC_4(VAR_17))
  return -VAR_2;






 if (FUNC_6(VAR_16))
  return -VAR_3;





 if (FUNC_17(VAR_16))
  return -VAR_3;
 FUNC_14(VAR_16, VAR_7);

 VAR_25 = -VAR_1;
 VAR_21 = VAR_17->m_super->s_maxbytes;
 if (!VAR_14)
  VAR_21 = FUNC_10(VAR_21, FUNC_11(FUNC_8(VAR_10),
         VAR_10->i_sb->s_blocksize));
 if (VAR_11 > VAR_21)
  goto out_unlock;
 if (VAR_11 > VAR_21 - VAR_12)
  VAR_12 = VAR_21 - VAR_11;

 VAR_25 = FUNC_7(VAR_10->i_mapping);
 if (VAR_25)
  goto out_unlock;
 VAR_25 = FUNC_9(VAR_10->i_mapping);
 if (FUNC_1(VAR_25))
  return VAR_25;

 VAR_20 = FUNC_2(VAR_17, (xfs_ufsize_t)VAR_11 + VAR_12);
 VAR_19 = FUNC_3(VAR_17, VAR_11);

 VAR_24 = FUNC_15(VAR_16);
 VAR_25 = FUNC_12(VAR_16, VAR_19, VAR_20 - VAR_19,
    &VAR_18, &VAR_23, VAR_22);
 FUNC_18(VAR_16, VAR_24);

 if (VAR_25)
  goto out_unlock;

 if (VAR_14) {
  enum xfs_prealloc_flags VAR_26 = 0;

  FUNC_0(VAR_18.br_startblock != VAR_0);

  if (!VAR_23 || VAR_18.br_startblock == VAR_4) {




   FUNC_14(VAR_16, VAR_6);
   VAR_25 = FUNC_16(VAR_16, VAR_11, VAR_12,
             &VAR_18, VAR_23);
   if (VAR_25)
    goto out_unlock;







   VAR_26 |= VAR_8 | VAR_9;
  }

  VAR_25 = FUNC_19(VAR_16, VAR_26);
  if (VAR_25)
   goto out_unlock;
 }
 FUNC_18(VAR_16, VAR_7);

 VAR_25 = FUNC_13(VAR_16, VAR_13, &VAR_18, 0);
 *VAR_15 = VAR_17->m_generation;
 return VAR_25;
out_unlock:
 FUNC_18(VAR_16, VAR_7);
 return VAR_25;
}
