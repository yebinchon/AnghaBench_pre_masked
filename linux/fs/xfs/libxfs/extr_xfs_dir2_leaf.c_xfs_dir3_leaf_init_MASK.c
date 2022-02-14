
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_ino_t ;
typedef scalar_t__ uint16_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_10__ {int sb_meta_uuid; } ;
struct xfs_mount {int m_dir_geo; TYPE_5__ m_sb; } ;
struct TYPE_8__ {void* magic; } ;
struct TYPE_9__ {TYPE_3__ info; } ;
struct TYPE_6__ {void* magic; } ;
struct TYPE_7__ {int uuid; void* owner; void* blkno; TYPE_1__ hdr; } ;
struct xfs_dir3_leaf_hdr {TYPE_4__ hdr; TYPE_2__ info; } ;
struct xfs_dir2_leaf_tail {scalar_t__ bestcount; } ;
struct xfs_dir2_leaf {TYPE_4__ hdr; TYPE_2__ info; } ;
struct xfs_buf {int * b_ops; int b_bn; struct xfs_dir3_leaf_hdr* b_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_dir3_leaf_hdr*,int ,int) ;
 int FUNC_4 (int *,int *) ;
 struct xfs_dir2_leaf_tail* FUNC_5 (int ,struct xfs_dir3_leaf_hdr*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (struct xfs_trans*,struct xfs_buf*,int ) ;

__attribute__((used)) static void
FUNC_8(
 struct xfs_mount *VAR_8,
 struct xfs_trans *VAR_9,
 struct xfs_buf *VAR_10,
 xfs_ino_t VAR_11,
 uint16_t VAR_12)
{
 struct xfs_dir2_leaf *VAR_13 = VAR_10->b_addr;

 FUNC_0(VAR_12 == VAR_2 || VAR_12 == VAR_3);

 if (FUNC_6(&VAR_8->m_sb)) {
  struct xfs_dir3_leaf_hdr *VAR_14 = VAR_10->b_addr;

  FUNC_3(VAR_14, 0, sizeof(*VAR_14));

  VAR_14->info.hdr.magic = (VAR_12 == VAR_2)
      ? FUNC_1(VAR_4)
      : FUNC_1(VAR_5);
  VAR_14->info.blkno = FUNC_2(VAR_10->b_bn);
  VAR_14->info.owner = FUNC_2(VAR_11);
  FUNC_4(&VAR_14->info.uuid, &VAR_8->m_sb.sb_meta_uuid);
 } else {
  FUNC_3(VAR_13, 0, sizeof(*VAR_13));
  VAR_13->hdr.info.magic = FUNC_1(VAR_12);
 }





 if (VAR_12 == VAR_2) {
  struct xfs_dir2_leaf_tail *VAR_15;

  VAR_15 = FUNC_5(VAR_8->m_dir_geo, VAR_13);
  VAR_15->bestcount = 0;
  VAR_10->b_ops = &VAR_6;
  FUNC_7(VAR_9, VAR_10, VAR_0);
 } else {
  VAR_10->b_ops = &VAR_7;
  FUNC_7(VAR_9, VAR_10, VAR_1);
 }
}
