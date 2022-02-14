
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_ino_t ;
typedef int xfs_daddr_t ;
typedef int xfs_agnumber_t ;
typedef int xfs_agblock_t ;
typedef scalar_t__ uint ;
struct xfs_trans {int dummy; } ;
struct TYPE_3__ {int sb_inodelog; int sb_meta_uuid; int sb_inodesize; } ;
struct xfs_mount {int m_bsize; TYPE_1__ m_sb; int m_ddev_targp; } ;
struct xfs_dinode {int di_version; int di_uuid; int di_ino; void* di_next_unlinked; void* di_gen; int di_magic; } ;
struct xfs_buf {int b_flags; int b_length; int * b_ops; } ;
struct list_head {int dummy; } ;
struct TYPE_4__ {int blocks_per_cluster; int inodes_per_cluster; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct xfs_mount*) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct xfs_mount*,int) ;
 int FUNC_3 (struct xfs_mount*,int ,int) ;
 scalar_t__ FUNC_4 (struct xfs_mount*,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (unsigned int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct xfs_buf*,struct list_head*) ;
 int FUNC_10 (struct xfs_buf*) ;
 int FUNC_11 (struct xfs_buf*,int ,int ) ;
 int FUNC_12 (struct xfs_mount*,struct xfs_dinode*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct xfs_trans*,int ,int,int,int ,int,unsigned int) ;
 int VAR_5 ;
 struct xfs_dinode* FUNC_15 (struct xfs_mount*,struct xfs_buf*,int) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 struct xfs_buf* FUNC_17 (struct xfs_trans*,int ,int ,int,int ) ;
 int FUNC_18 (struct xfs_trans*,struct xfs_buf*) ;
 int FUNC_19 (struct xfs_trans*,struct xfs_buf*,int,scalar_t__) ;
 int FUNC_20 (struct xfs_trans*,struct xfs_buf*) ;

int
FUNC_21(
 struct xfs_mount *VAR_6,
 struct xfs_trans *VAR_7,
 struct list_head *VAR_8,
 int VAR_9,
 xfs_agnumber_t VAR_10,
 xfs_agblock_t VAR_11,
 xfs_agblock_t VAR_12,
 unsigned int VAR_13)
{
 struct xfs_buf *VAR_14;
 struct xfs_dinode *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;
 xfs_daddr_t VAR_20;
 xfs_ino_t VAR_21 = 0;






 VAR_16 = VAR_12 / FUNC_1(VAR_6)->blocks_per_cluster;
 if (FUNC_16(&VAR_6->m_sb)) {
  VAR_17 = 3;
  VAR_21 = FUNC_4(VAR_6, VAR_10, FUNC_2(VAR_6, VAR_11));
  if (VAR_7)
   FUNC_14(VAR_7, VAR_10, VAR_11, VAR_9,
     VAR_6->m_sb.sb_inodesize, VAR_12, VAR_13);
 } else
  VAR_17 = 2;

 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {



  VAR_20 = FUNC_3(VAR_6, VAR_10, VAR_11 +
    (VAR_19 * FUNC_1(VAR_6)->blocks_per_cluster));
  VAR_14 = FUNC_17(VAR_7, VAR_6->m_ddev_targp, VAR_20,
      VAR_6->m_bsize *
      FUNC_1(VAR_6)->blocks_per_cluster,
      VAR_3);
  if (!VAR_14)
   return -VAR_0;


  VAR_14->b_ops = &VAR_5;
  FUNC_11(VAR_14, 0, FUNC_0(VAR_14->b_length));
  for (VAR_18 = 0; VAR_18 < FUNC_1(VAR_6)->inodes_per_cluster; VAR_18++) {
   int VAR_22 = VAR_18 << VAR_6->m_sb.sb_inodelog;
   uint VAR_23 = FUNC_13(VAR_17);

   VAR_15 = FUNC_15(VAR_6, VAR_14, VAR_18);
   VAR_15->di_magic = FUNC_5(VAR_4);
   VAR_15->di_version = VAR_17;
   VAR_15->di_gen = FUNC_6(VAR_13);
   VAR_15->di_next_unlinked = FUNC_6(VAR_1);

   if (VAR_17 == 3) {
    VAR_15->di_ino = FUNC_7(VAR_21);
    VAR_21++;
    FUNC_8(&VAR_15->di_uuid,
       &VAR_6->m_sb.sb_meta_uuid);
    FUNC_12(VAR_6, VAR_15);
   } else if (VAR_7) {

    FUNC_19(VAR_7, VAR_14, VAR_22,
        VAR_22 + VAR_23 - 1);
   }
  }

  if (VAR_7) {
   FUNC_18(VAR_7, VAR_14);
   if (VAR_17 == 3) {






    FUNC_20(VAR_7, VAR_14);
   }
  } else {
   VAR_14->b_flags |= VAR_2;
   FUNC_9(VAR_14, VAR_8);
   FUNC_10(VAR_14);
  }
 }
 return 0;
}
