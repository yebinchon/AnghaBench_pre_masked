
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ xfs_fsblock_t ;
struct TYPE_7__ {scalar_t__ ext_len; int ext_start; } ;
typedef TYPE_3__ xfs_extent_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_5__ {scalar_t__ sb_dblocks; scalar_t__ sb_agblocks; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct TYPE_6__ {int efi_nextents; TYPE_3__* efi_extents; } ;
struct xfs_efi_log_item {int efi_flags; TYPE_2__ efi_format; } ;
struct xfs_efd_log_item {int dummy; } ;
struct TYPE_8__ {int tr_itruncate; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (struct xfs_mount*) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct xfs_efi_log_item*) ;
 int FUNC_7 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_8 (struct xfs_trans*) ;
 int FUNC_9 (struct xfs_trans*) ;
 int FUNC_10 (struct xfs_trans*,struct xfs_efd_log_item*,int ,scalar_t__,int *,int) ;
 struct xfs_efd_log_item* FUNC_11 (struct xfs_trans*,struct xfs_efi_log_item*,int) ;

int
FUNC_12(
 struct xfs_mount *VAR_3,
 struct xfs_efi_log_item *VAR_4)
{
 struct xfs_efd_log_item *VAR_5;
 struct xfs_trans *VAR_6;
 int VAR_7;
 int VAR_8 = 0;
 xfs_extent_t *VAR_9;
 xfs_fsblock_t VAR_10;

 FUNC_0(!FUNC_5(VAR_1, &VAR_4->efi_flags));






 for (VAR_7 = 0; VAR_7 < VAR_4->efi_format.efi_nextents; VAR_7++) {
  VAR_9 = &VAR_4->efi_format.efi_extents[VAR_7];
  VAR_10 = FUNC_2(VAR_3,
       FUNC_3(VAR_3, VAR_9->ext_start));
  if (VAR_10 == 0 ||
      VAR_9->ext_len == 0 ||
      VAR_10 >= VAR_3->m_sb.sb_dblocks ||
      VAR_9->ext_len >= VAR_3->m_sb.sb_agblocks) {




   FUNC_4(VAR_1, &VAR_4->efi_flags);
   FUNC_6(VAR_4);
   return -VAR_0;
  }
 }

 VAR_8 = FUNC_7(VAR_3, &FUNC_1(VAR_3)->tr_itruncate, 0, 0, 0, &VAR_6);
 if (VAR_8)
  return VAR_8;
 VAR_5 = FUNC_11(VAR_6, VAR_4, VAR_4->efi_format.efi_nextents);

 for (VAR_7 = 0; VAR_7 < VAR_4->efi_format.efi_nextents; VAR_7++) {
  VAR_9 = &VAR_4->efi_format.efi_extents[VAR_7];
  VAR_8 = FUNC_10(VAR_6, VAR_5, VAR_9->ext_start,
           VAR_9->ext_len,
           &VAR_2, 0);
  if (VAR_8)
   goto abort_error;

 }

 FUNC_4(VAR_1, &VAR_4->efi_flags);
 VAR_8 = FUNC_9(VAR_6);
 return VAR_8;

abort_error:
 FUNC_8(VAR_6);
 return VAR_8;
}
