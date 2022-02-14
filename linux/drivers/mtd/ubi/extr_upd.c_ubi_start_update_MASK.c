
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume {int updating; int reserved_pebs; long long upd_bytes; scalar_t__ upd_received; scalar_t__ usable_leb_size; int upd_ebs; int upd_buf; int changing_leb; int vol_id; } ;
struct ubi_device {int leb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubi_device*,struct ubi_volume*,int ) ;
 int FUNC_1 (char*,int ,long long) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ubi_device*,struct ubi_volume*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ubi_device*,struct ubi_volume*,int) ;
 int FUNC_6 (struct ubi_device*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct ubi_device *VAR_2, struct ubi_volume *VAR_3,
       long long VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_1("start update of volume %d, %llu bytes", VAR_3->vol_id, VAR_4);
 FUNC_4(!VAR_3->updating && !VAR_3->changing_leb);
 VAR_3->updating = 1;

 VAR_3->upd_buf = FUNC_8(VAR_2->leb_size);
 if (!VAR_3->upd_buf)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;


 for (VAR_5 = 0; VAR_5 < VAR_3->reserved_pebs; VAR_5++) {
  VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_2, VAR_1, VAR_1);
 if (VAR_6)
  return VAR_6;

 if (VAR_4 == 0) {
  VAR_6 = FUNC_0(VAR_2, VAR_3, 0);
  if (VAR_6)
   return VAR_6;

  FUNC_7(VAR_3->upd_buf);
  VAR_3->updating = 0;
  return 0;
 }

 VAR_3->upd_ebs = FUNC_2(VAR_4 + VAR_3->usable_leb_size - 1,
          VAR_3->usable_leb_size);
 VAR_3->upd_bytes = VAR_4;
 VAR_3->upd_received = 0;
 return 0;
}
