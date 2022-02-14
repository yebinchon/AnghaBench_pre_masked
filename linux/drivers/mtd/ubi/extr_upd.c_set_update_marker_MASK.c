
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vtbl_record {int upd_marker; } ;
struct ubi_volume {size_t vol_id; int upd_marker; } ;
struct ubi_device {int device_mutex; struct ubi_vtbl_record* vtbl; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ubi_device*,size_t,struct ubi_vtbl_record*) ;

__attribute__((used)) static int FUNC_5(struct ubi_device *VAR_0, struct ubi_volume *VAR_1)
{
 int VAR_2;
 struct ubi_vtbl_record VAR_3;

 FUNC_0("set update marker for volume %d", VAR_1->vol_id);

 if (VAR_1->upd_marker) {
  FUNC_3(VAR_0->vtbl[VAR_1->vol_id].upd_marker);
  FUNC_0("already set");
  return 0;
 }

 VAR_3 = VAR_0->vtbl[VAR_1->vol_id];
 VAR_3.upd_marker = 1;

 FUNC_1(&VAR_0->device_mutex);
 VAR_2 = FUNC_4(VAR_0, VAR_1->vol_id, &VAR_3);
 VAR_1->upd_marker = 1;
 FUNC_2(&VAR_0->device_mutex);
 return VAR_2;
}
