
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ubiblock {int dev_mutex; int gd; } ;
struct ubi_volume_info {int used_bytes; int size; int vol_id; int ubi_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubi_volume_info*,scalar_t__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 struct ubiblock* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct ubi_volume_info *VAR_3)
{
 struct ubiblock *VAR_4;
 u64 VAR_5;
 int VAR_6;






 FUNC_6(&VAR_2);
 VAR_4 = FUNC_4(VAR_3->ubi_num, VAR_3->vol_id);
 if (!VAR_4) {
  FUNC_7(&VAR_2);
  return -VAR_1;
 }

 VAR_6 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_6) {
  FUNC_7(&VAR_2);
  if (VAR_6 == -VAR_0) {
   FUNC_2(FUNC_3(VAR_4->gd),
     "the volume is too big (%d LEBs), cannot resize",
     VAR_3->size);
  }
  return VAR_6;
 }

 FUNC_6(&VAR_4->dev_mutex);

 if (FUNC_5(VAR_4->gd) != VAR_5) {
  FUNC_8(VAR_4->gd, VAR_5);
  FUNC_1(FUNC_3(VAR_4->gd), "resized to %lld bytes",
    VAR_3->used_bytes);
 }
 FUNC_7(&VAR_4->dev_mutex);
 FUNC_7(&VAR_2);
 return 0;
}
