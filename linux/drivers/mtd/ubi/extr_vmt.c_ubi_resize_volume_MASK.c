
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vtbl_record {int reserved_pebs; } ;
struct ubi_volume_desc {struct ubi_volume* vol; } ;
struct ubi_volume {int vol_id; int reserved_pebs; scalar_t__ vol_type; int used_ebs; int ref_count; long long last_eb_bytes; long long usable_leb_size; long long used_bytes; struct ubi_device* ubi; } ;
struct ubi_eba_table {int dummy; } ;
struct ubi_device {int avail_pebs; int corr_peb_count; int rsvd_pebs; int volumes_lock; struct ubi_vtbl_record* vtbl; int ubi_num; scalar_t__ ro_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ubi_eba_table*) ;
 int FUNC_1 (struct ubi_eba_table*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int,int,int) ;
 int FUNC_4 (struct ubi_eba_table*) ;
 int FUNC_5 (struct ubi_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ubi_device*,int,struct ubi_vtbl_record*) ;
 int FUNC_9 (struct ubi_volume*,struct ubi_eba_table*,int) ;
 struct ubi_eba_table* FUNC_10 (struct ubi_volume*,int) ;
 int FUNC_11 (struct ubi_volume*,struct ubi_eba_table*) ;
 int FUNC_12 (struct ubi_device*,struct ubi_volume*,int) ;
 int FUNC_13 (struct ubi_device*,char*,int,...) ;
 int FUNC_14 (struct ubi_device*) ;
 int FUNC_15 (struct ubi_device*,struct ubi_volume*,int ) ;
 int FUNC_16 (struct ubi_device*,int,int ) ;

int FUNC_17(struct ubi_volume_desc *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 struct ubi_volume *VAR_13 = VAR_8->vol;
 struct ubi_device *VAR_14 = VAR_13->ubi;
 struct ubi_vtbl_record VAR_15;
 struct ubi_eba_table *VAR_16 = ((void*)0);
 int VAR_17 = VAR_13->vol_id;

 if (VAR_14->ro_mode)
  return -VAR_3;

 FUNC_3("re-size device %d, volume %d to from %d to %d PEBs",
  VAR_14->ubi_num, VAR_17, VAR_13->reserved_pebs, VAR_9);

 if (VAR_13->vol_type == VAR_6 &&
     VAR_9 < VAR_13->used_ebs) {
  FUNC_13(VAR_14, "too small size %d, %d LEBs contain data",
   VAR_9, VAR_13->used_ebs);
  return -VAR_1;
 }


 if (VAR_9 == VAR_13->reserved_pebs)
  return 0;

 VAR_16 = FUNC_10(VAR_13, VAR_9);
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);

 FUNC_6(&VAR_14->volumes_lock);
 if (VAR_13->ref_count > 1) {
  FUNC_7(&VAR_14->volumes_lock);
  VAR_11 = -VAR_0;
  goto out_free;
 }
 FUNC_7(&VAR_14->volumes_lock);


 VAR_12 = VAR_9 - VAR_13->reserved_pebs;
 if (VAR_12 > 0) {
  FUNC_6(&VAR_14->volumes_lock);
  if (VAR_12 > VAR_14->avail_pebs) {
   FUNC_13(VAR_14, "not enough PEBs: requested %d, available %d",
    VAR_12, VAR_14->avail_pebs);
   if (VAR_14->corr_peb_count)
    FUNC_13(VAR_14, "%d PEBs are corrupted and not used",
     VAR_14->corr_peb_count);
   FUNC_7(&VAR_14->volumes_lock);
   VAR_11 = -VAR_2;
   goto out_free;
  }
  VAR_14->avail_pebs -= VAR_12;
  VAR_14->rsvd_pebs += VAR_12;
  FUNC_9(VAR_13, VAR_16, VAR_13->reserved_pebs);
  FUNC_11(VAR_13, VAR_16);
  FUNC_7(&VAR_14->volumes_lock);
 }

 if (VAR_12 < 0) {
  for (VAR_10 = 0; VAR_10 < -VAR_12; VAR_10++) {
   VAR_11 = FUNC_12(VAR_14, VAR_13, VAR_9 + VAR_10);
   if (VAR_11)
    goto out_acc;
  }
  FUNC_6(&VAR_14->volumes_lock);
  VAR_14->rsvd_pebs += VAR_12;
  VAR_14->avail_pebs -= VAR_12;
  FUNC_14(VAR_14);
  FUNC_9(VAR_13, VAR_16, VAR_9);
  FUNC_11(VAR_13, VAR_16);
  FUNC_7(&VAR_14->volumes_lock);
 }






 if (VAR_12 < 0) {
  VAR_11 = FUNC_16(VAR_14, VAR_17, VAR_4);
  if (VAR_11)
   goto out_acc;
 }


 VAR_15 = VAR_14->vtbl[VAR_17];
 VAR_15.reserved_pebs = FUNC_2(VAR_9);
 VAR_11 = FUNC_8(VAR_14, VAR_17, &VAR_15);
 if (VAR_11)
  goto out_acc;

 VAR_13->reserved_pebs = VAR_9;
 if (VAR_13->vol_type == VAR_5) {
  VAR_13->used_ebs = VAR_9;
  VAR_13->last_eb_bytes = VAR_13->usable_leb_size;
  VAR_13->used_bytes =
   (long long)VAR_13->used_ebs * VAR_13->usable_leb_size;
 }

 FUNC_15(VAR_14, VAR_13, VAR_7);
 FUNC_5(VAR_14);
 return VAR_11;

out_acc:
 if (VAR_12 > 0) {
  FUNC_6(&VAR_14->volumes_lock);
  VAR_14->rsvd_pebs -= VAR_12;
  VAR_14->avail_pebs += VAR_12;
  FUNC_7(&VAR_14->volumes_lock);
 }
out_free:
 FUNC_4(VAR_16);
 return VAR_11;
}
