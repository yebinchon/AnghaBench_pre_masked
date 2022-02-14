
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {struct ubi_volume* vol; } ;
struct ubi_volume {int vol_id; int used_ebs; int usable_leb_size; scalar_t__ vol_type; int last_eb_bytes; scalar_t__ upd_marker; struct ubi_device* ubi; } ;
struct ubi_device {int vtbl_slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ubi_volume_desc *VAR_3, int VAR_4,
     int VAR_5, int VAR_6)
{
 struct ubi_volume *VAR_7 = VAR_3->vol;
 struct ubi_device *VAR_8 = VAR_7->ubi;
 int VAR_9 = VAR_7->vol_id;

 if (VAR_9 < 0 || VAR_9 >= VAR_8->vtbl_slots || VAR_4 < 0 ||
     VAR_4 >= VAR_7->used_ebs || VAR_5 < 0 || VAR_6 < 0 ||
     VAR_5 + VAR_6 > VAR_7->usable_leb_size)
  return -VAR_1;

 if (VAR_7->vol_type == VAR_2) {
  if (VAR_7->used_ebs == 0)

   return 0;
  if (VAR_4 == VAR_7->used_ebs - 1 &&
      VAR_5 + VAR_6 > VAR_7->last_eb_bytes)
   return -VAR_1;
 }

 if (VAR_7->upd_marker)
  return -VAR_0;

 return 0;
}
