
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
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (struct ubi_device*,struct ubi_volume*,int,void const*,int,int) ;
 int FUNC_2 (struct ubi_volume*,int) ;

int FUNC_3(struct ubi_volume_desc *VAR_5, int VAR_6, const void *VAR_7,
    int VAR_8, int VAR_9)
{
 struct ubi_volume *VAR_10 = VAR_5->vol;
 struct ubi_device *VAR_11 = VAR_10->ubi;
 int VAR_12 = VAR_10->vol_id;

 FUNC_0("write %d bytes to LEB %d:%d:%d", VAR_9, VAR_12, VAR_6, VAR_8);

 if (VAR_12 < 0 || VAR_12 >= VAR_11->vtbl_slots)
  return -VAR_1;

 if (VAR_5->mode == VAR_3 || VAR_10->vol_type == VAR_4)
  return -VAR_2;

 if (!FUNC_2(VAR_10, VAR_6) || VAR_8 < 0 || VAR_9 < 0 ||
     VAR_8 + VAR_9 > VAR_10->usable_leb_size ||
     VAR_8 & (VAR_11->min_io_size - 1) || VAR_9 & (VAR_11->min_io_size - 1))
  return -VAR_1;

 if (VAR_10->upd_marker)
  return -VAR_0;

 if (VAR_9 == 0)
  return 0;

 return FUNC_1(VAR_11, VAR_10, VAR_6, VAR_7, VAR_8, VAR_9);
}
