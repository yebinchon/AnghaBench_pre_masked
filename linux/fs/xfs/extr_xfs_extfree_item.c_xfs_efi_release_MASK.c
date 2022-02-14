
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_efi_log_item {int efi_item; int efi_refcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_efi_log_item*) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(
 struct xfs_efi_log_item *VAR_1)
{
 FUNC_0(FUNC_2(&VAR_1->efi_refcount) > 0);
 if (FUNC_1(&VAR_1->efi_refcount)) {
  FUNC_4(&VAR_1->efi_item, VAR_0);
  FUNC_3(VAR_1);
 }
}
