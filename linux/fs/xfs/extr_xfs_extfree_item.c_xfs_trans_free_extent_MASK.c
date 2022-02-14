
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
typedef int xfs_extlen_t ;
typedef int xfs_agnumber_t ;
typedef int xfs_agblock_t ;
typedef size_t uint ;
struct xfs_trans {int t_flags; struct xfs_mount* t_mountp; } ;
struct xfs_owner_info {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_extent {int ext_len; int ext_start; } ;
struct TYPE_4__ {size_t efd_nextents; struct xfs_extent* efd_extents; } ;
struct TYPE_3__ {int li_flags; } ;
struct xfs_efd_log_item {size_t efd_next_extent; TYPE_2__ efd_format; TYPE_1__ efd_item; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_mount*,int ) ;
 int FUNC_2 (struct xfs_mount*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct xfs_trans*,int ,int ,struct xfs_owner_info const*,int ,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct xfs_mount*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(
 struct xfs_trans *VAR_3,
 struct xfs_efd_log_item *VAR_4,
 xfs_fsblock_t VAR_5,
 xfs_extlen_t VAR_6,
 const struct xfs_owner_info *VAR_7,
 bool VAR_8)
{
 struct xfs_mount *VAR_9 = VAR_3->t_mountp;
 struct xfs_extent *VAR_10;
 uint VAR_11;
 xfs_agnumber_t VAR_12 = FUNC_2(VAR_9, VAR_5);
 xfs_agblock_t VAR_13 = FUNC_1(VAR_9,
        VAR_5);
 int VAR_14;

 FUNC_5(VAR_3->t_mountp, VAR_12, 0, VAR_13, VAR_6);

 VAR_14 = FUNC_3(VAR_3, VAR_5, VAR_6,
      VAR_7, VAR_0, VAR_8);







 VAR_3->t_flags |= VAR_2;
 FUNC_4(VAR_1, &VAR_4->efd_item.li_flags);

 VAR_11 = VAR_4->efd_next_extent;
 FUNC_0(VAR_11 < VAR_4->efd_format.efd_nextents);
 VAR_10 = &(VAR_4->efd_format.efd_extents[VAR_11]);
 VAR_10->ext_start = VAR_5;
 VAR_10->ext_len = VAR_6;
 VAR_4->efd_next_extent++;

 return VAR_14;
}
