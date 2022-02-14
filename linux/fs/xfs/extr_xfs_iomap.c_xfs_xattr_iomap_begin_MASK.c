
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_fileoff_t ;
struct xfs_mount {int dummy; } ;
struct TYPE_2__ {scalar_t__ di_aformat; int di_anextents; } ;
struct xfs_inode {TYPE_1__ i_d; struct xfs_mount* i_mount; } ;
struct xfs_bmbt_irec {int dummy; } ;
struct iomap {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct xfs_mount*) ;
 struct xfs_inode* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct xfs_inode*) ;
 int FUNC_6 (struct xfs_inode*,scalar_t__,scalar_t__,struct xfs_bmbt_irec*,int*,int ) ;
 int FUNC_7 (struct xfs_inode*,struct iomap*,struct xfs_bmbt_irec*,int) ;
 unsigned int FUNC_8 (struct xfs_inode*) ;
 int FUNC_9 (struct xfs_inode*,unsigned int) ;

__attribute__((used)) static int
FUNC_10(
 struct inode *VAR_4,
 loff_t VAR_5,
 loff_t VAR_6,
 unsigned VAR_7,
 struct iomap *VAR_8)
{
 struct xfs_inode *VAR_9 = FUNC_4(VAR_4);
 struct xfs_mount *VAR_10 = VAR_9->i_mount;
 xfs_fileoff_t VAR_11 = FUNC_2(VAR_10, VAR_5);
 xfs_fileoff_t VAR_12 = FUNC_1(VAR_10, VAR_5 + VAR_6);
 struct xfs_bmbt_irec VAR_13;
 int VAR_14 = 1, VAR_15 = 0;
 unsigned VAR_16;

 if (FUNC_3(VAR_10))
  return -VAR_0;

 VAR_16 = FUNC_8(VAR_9);


 if (!FUNC_5(VAR_9) || !VAR_9->i_d.di_anextents) {
  VAR_15 = -VAR_1;
  goto out_unlock;
 }

 FUNC_0(VAR_9->i_d.di_aformat != VAR_3);
 VAR_15 = FUNC_6(VAR_9, VAR_11, VAR_12 - VAR_11, &VAR_13,
          &VAR_14, VAR_2);
out_unlock:
 FUNC_9(VAR_9, VAR_16);

 if (VAR_15)
  return VAR_15;
 FUNC_0(VAR_14);
 return FUNC_7(VAR_9, VAR_8, &VAR_13, 0);
}
