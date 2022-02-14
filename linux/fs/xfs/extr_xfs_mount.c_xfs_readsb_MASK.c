
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_sb {scalar_t__ sb_magicnum; unsigned int sb_sectsize; } ;
struct xfs_mount {struct xfs_buf* m_sb_bp; int * m_ddev_targp; struct xfs_sb m_sb; } ;
struct xfs_buf_ops {int dummy; } ;
struct xfs_buf {struct xfs_buf_ops* b_ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct xfs_buf*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *,int ,int ,int ,struct xfs_buf**,struct xfs_buf_ops const*) ;
 int FUNC_4 (struct xfs_buf*) ;
 int FUNC_5 (struct xfs_buf*) ;
 unsigned int FUNC_6 (int *) ;
 int FUNC_7 (struct xfs_mount*) ;
 struct xfs_buf_ops VAR_8 ;
 int FUNC_8 (struct xfs_sb*,int ) ;
 struct xfs_buf_ops VAR_9 ;
 int FUNC_9 (struct xfs_mount*,char*,...) ;

int
FUNC_10(
 struct xfs_mount *VAR_10,
 int VAR_11)
{
 unsigned int VAR_12;
 struct xfs_buf *VAR_13;
 struct xfs_sb *VAR_14 = &VAR_10->m_sb;
 int VAR_15;
 int VAR_16 = !(VAR_11 & VAR_5);
 const struct xfs_buf_ops *VAR_17;

 FUNC_0(VAR_10->m_sb_bp == ((void*)0));
 FUNC_0(VAR_10->m_ddev_targp != ((void*)0));
 VAR_12 = FUNC_6(VAR_10->m_ddev_targp);
 VAR_17 = ((void*)0);







reread:
 VAR_15 = FUNC_3(VAR_10->m_ddev_targp, VAR_6,
          FUNC_1(VAR_12), VAR_4, &VAR_13,
          VAR_17);
 if (VAR_15) {
  if (VAR_16)
   FUNC_9(VAR_10, "SB validate failed with error %d.", VAR_15);

  if (VAR_15 == -VAR_0)
   VAR_15 = -VAR_1;
  return VAR_15;
 }




 FUNC_8(VAR_14, FUNC_2(VAR_13));





 if (VAR_14->sb_magicnum != VAR_7) {
  if (VAR_16)
   FUNC_9(VAR_10, "Invalid superblock magic number");
  VAR_15 = -VAR_2;
  goto release_buf;
 }




 if (VAR_12 > VAR_14->sb_sectsize) {
  if (VAR_16)
   FUNC_9(VAR_10, "device supports %u byte sectors (not %u)",
    VAR_12, VAR_14->sb_sectsize);
  VAR_15 = -VAR_3;
  goto release_buf;
 }

 if (VAR_17 == ((void*)0)) {




  FUNC_4(VAR_13);
  VAR_12 = VAR_14->sb_sectsize;
  VAR_17 = VAR_16 ? &VAR_8 : &VAR_9;
  goto reread;
 }

 FUNC_7(VAR_10);


 VAR_13->b_ops = &VAR_8;

 VAR_10->m_sb_bp = VAR_13;
 FUNC_5(VAR_13);
 return 0;

release_buf:
 FUNC_4(VAR_13);
 return VAR_15;
}
