
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_trans {int t_mountp; } ;
struct xfs_extent {int dummy; } ;
struct TYPE_4__ {int efi_id; } ;
struct xfs_efi_log_item {TYPE_2__ efi_format; } ;
struct TYPE_3__ {unsigned int efd_nextents; int efd_efi_id; } ;
struct xfs_efd_log_item {int efd_item; TYPE_1__ efd_format; struct xfs_efi_log_item* efd_efip; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 struct xfs_efd_log_item* FUNC_1 (int,int ) ;
 struct xfs_efd_log_item* FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,int ,int *) ;
 int FUNC_4 (struct xfs_trans*,int *) ;

__attribute__((used)) static struct xfs_efd_log_item *
FUNC_5(
 struct xfs_trans *VAR_4,
 struct xfs_efi_log_item *VAR_5,
 unsigned int VAR_6)
{
 struct xfs_efd_log_item *VAR_7;

 FUNC_0(VAR_6 > 0);

 if (VAR_6 > VAR_0) {
  VAR_7 = FUNC_1(sizeof(struct xfs_efd_log_item) +
    (VAR_6 - 1) * sizeof(struct xfs_extent),
    0);
 } else {
  VAR_7 = FUNC_2(VAR_3, 0);
 }

 FUNC_3(VAR_4->t_mountp, &VAR_7->efd_item, VAR_1,
     &VAR_2);
 VAR_7->efd_efip = VAR_5;
 VAR_7->efd_format.efd_nextents = VAR_6;
 VAR_7->efd_format.efd_efi_id = VAR_5->efi_format.efi_id;

 FUNC_4(VAR_4, &VAR_7->efd_item);
 return VAR_7;
}
