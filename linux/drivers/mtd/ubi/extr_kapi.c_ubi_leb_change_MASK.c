
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {scalar_t__ mode; struct ubi_volume* vol; } ;
struct ubi_volume {int vol_id; scalar_t__ vol_type; int usable_leb_size; scalar_t__ upd_marker; struct ubi_device* ubi; } ;
struct ubi_device {int vtbl_slots; int min_io_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (struct ubi_device*,struct ubi_volume*,int,void const*,int) ;
 int FUNC_2 (struct ubi_volume*,int) ;

int FUNC_3(struct ubi_volume_desc *VAR_5, int VAR_6, const void *VAR_7,
     int VAR_8)
{
 struct ubi_volume *VAR_9 = VAR_5->vol;
 struct ubi_device *VAR_10 = VAR_9->ubi;
 int VAR_11 = VAR_9->vol_id;

 FUNC_0("atomically write %d bytes to LEB %d:%d", VAR_8, VAR_11, VAR_6);

 if (VAR_11 < 0 || VAR_11 >= VAR_10->vtbl_slots)
  return -VAR_1;

 if (VAR_5->mode == VAR_3 || VAR_9->vol_type == VAR_4)
  return -VAR_2;

 if (!FUNC_2(VAR_9, VAR_6) || VAR_8 < 0 ||
     VAR_8 > VAR_9->usable_leb_size || VAR_8 & (VAR_10->min_io_size - 1))
  return -VAR_1;

 if (VAR_9->upd_marker)
  return -VAR_0;

 if (VAR_8 == 0)
  return 0;

 return FUNC_1(VAR_10, VAR_9, VAR_6, VAR_7, VAR_8);
}
