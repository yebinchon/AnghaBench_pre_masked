
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {scalar_t__ reserved_pebs; } ;
struct ubi_device {scalar_t__ vtbl_slots; struct ubi_volume** volumes; } ;
struct ubi_attach_info {scalar_t__ vols_found; scalar_t__ highest_vol_id; } ;
struct ubi_ainf_volume {int vol_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ubi_volume*,struct ubi_ainf_volume*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ubi_device const*,char*,scalar_t__,...) ;
 struct ubi_ainf_volume* FUNC_4 (struct ubi_attach_info*,int) ;
 int FUNC_5 (struct ubi_device const*,char*,int ) ;
 int FUNC_6 (struct ubi_attach_info*,struct ubi_ainf_volume*) ;

__attribute__((used)) static int FUNC_7(const struct ubi_device *VAR_3,
          struct ubi_attach_info *VAR_4)
{
 int VAR_5, VAR_6;
 struct ubi_ainf_volume *VAR_7;
 struct ubi_volume *VAR_8;

 if (VAR_4->vols_found > VAR_2 + VAR_3->vtbl_slots) {
  FUNC_3(VAR_3, "found %d volumes while attaching, maximum is %d + %d",
   VAR_4->vols_found, VAR_2, VAR_3->vtbl_slots);
  return -VAR_0;
 }

 if (VAR_4->highest_vol_id >= VAR_3->vtbl_slots + VAR_2 &&
     VAR_4->highest_vol_id < VAR_1) {
  FUNC_3(VAR_3, "too large volume ID %d found",
   VAR_4->highest_vol_id);
  return -VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->vtbl_slots + VAR_2; VAR_6++) {
  FUNC_1();

  VAR_7 = FUNC_4(VAR_4, VAR_6);
  VAR_8 = VAR_3->volumes[VAR_6];
  if (!VAR_8) {
   if (VAR_7)
    FUNC_6(VAR_4, VAR_7);
   continue;
  }

  if (VAR_8->reserved_pebs == 0) {
   FUNC_2(VAR_6 < VAR_3->vtbl_slots);

   if (!VAR_7)
    continue;
   FUNC_5(VAR_3, "finish volume %d removal", VAR_7->vol_id);
   FUNC_6(VAR_4, VAR_7);
  } else if (VAR_7) {
   VAR_5 = FUNC_0(VAR_8, VAR_7);
   if (VAR_5)
    return VAR_5;
  }
 }

 return 0;
}
