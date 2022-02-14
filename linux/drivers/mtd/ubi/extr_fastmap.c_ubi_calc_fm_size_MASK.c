
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_fm_volhdr {int dummy; } ;
struct ubi_fm_scan_pool {int dummy; } ;
struct ubi_fm_sb {int dummy; } ;
struct ubi_fm_hdr {int dummy; } ;
struct ubi_fm_ec {int dummy; } ;
struct ubi_fm_eba {int dummy; } ;
struct ubi_device {int peb_count; int leb_size; } ;
typedef int __be32 ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;

size_t FUNC_1(struct ubi_device *VAR_1)
{
 size_t VAR_2;

 VAR_2 = sizeof(struct ubi_fm_sb) +
  sizeof(struct ubi_fm_hdr) +
  sizeof(struct ubi_fm_scan_pool) +
  sizeof(struct ubi_fm_scan_pool) +
  (VAR_1->peb_count * sizeof(struct ubi_fm_ec)) +
  (sizeof(struct ubi_fm_eba) +
  (VAR_1->peb_count * sizeof(__be32))) +
  sizeof(struct ubi_fm_volhdr) * VAR_0;
 return FUNC_0(VAR_2, VAR_1->leb_size);
}
