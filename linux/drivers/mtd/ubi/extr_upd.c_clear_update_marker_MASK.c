
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vtbl_record {scalar_t__ upd_marker; } ;
struct ubi_volume {size_t vol_id; scalar_t__ vol_type; long long used_bytes; int used_ebs; scalar_t__ upd_marker; scalar_t__ usable_leb_size; scalar_t__ last_eb_bytes; scalar_t__ corrupted; } ;
struct ubi_device {int device_mutex; struct ubi_vtbl_record* vtbl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (long long,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ubi_device*,size_t,struct ubi_vtbl_record*) ;

__attribute__((used)) static int FUNC_6(struct ubi_device *VAR_1, struct ubi_volume *VAR_2,
          long long VAR_3)
{
 int VAR_4;
 struct ubi_vtbl_record VAR_5;

 FUNC_0("clear update marker for volume %d", VAR_2->vol_id);

 VAR_5 = VAR_1->vtbl[VAR_2->vol_id];
 FUNC_4(VAR_2->upd_marker && VAR_5.upd_marker);
 VAR_5.upd_marker = 0;

 if (VAR_2->vol_type == VAR_0) {
  VAR_2->corrupted = 0;
  VAR_2->used_bytes = VAR_3;
  VAR_2->used_ebs = FUNC_1(VAR_3, VAR_2->usable_leb_size,
         &VAR_2->last_eb_bytes);
  if (VAR_2->last_eb_bytes)
   VAR_2->used_ebs += 1;
  else
   VAR_2->last_eb_bytes = VAR_2->usable_leb_size;
 }

 FUNC_2(&VAR_1->device_mutex);
 VAR_4 = FUNC_5(VAR_1, VAR_2->vol_id, &VAR_5);
 VAR_2->upd_marker = 0;
 FUNC_3(&VAR_1->device_mutex);
 return VAR_4;
}
