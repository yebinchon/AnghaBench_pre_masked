
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {int mode; struct ubi_volume* vol; } ;
struct ubi_volume {int exclusive; int readers; int writers; int metaonly; int ref_count; int checked; int corrupted; int skip_check; int dev; } ;
struct ubi_device {int vtbl_slots; int volumes_lock; int ckvol_mutex; int ubi_num; struct ubi_volume** volumes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ubi_volume_desc* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;



 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ubi_volume_desc*) ;
 struct ubi_volume_desc* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ubi_device*,int) ;
 int FUNC_12 (struct ubi_volume_desc*) ;
 int FUNC_13 (struct ubi_device*,char*,int,int,int) ;
 struct ubi_device* FUNC_14 (int) ;
 int FUNC_15 (struct ubi_device*) ;
 int FUNC_16 (struct ubi_device*,char*,int,int ) ;

struct ubi_volume_desc *FUNC_17(int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 struct ubi_volume_desc *VAR_11;
 struct ubi_device *VAR_12;
 struct ubi_volume *VAR_13;

 FUNC_1("open device %d, volume %d, mode %d", VAR_7, VAR_8, VAR_9);

 if (VAR_7 < 0 || VAR_7 >= VAR_6)
  return FUNC_0(-VAR_1);

 if (VAR_9 != 129 && VAR_9 != 128 &&
     VAR_9 != 131 && VAR_9 != 130)
  return FUNC_0(-VAR_1);




 VAR_12 = FUNC_14(VAR_7);
 if (!VAR_12)
  return FUNC_0(-VAR_2);

 if (VAR_8 < 0 || VAR_8 >= VAR_12->vtbl_slots) {
  VAR_10 = -VAR_1;
  goto out_put_ubi;
 }

 VAR_11 = FUNC_4(sizeof(struct ubi_volume_desc), VAR_4);
 if (!VAR_11) {
  VAR_10 = -VAR_3;
  goto out_put_ubi;
 }

 VAR_10 = -VAR_2;
 if (!FUNC_10(VAR_5))
  goto out_free;

 FUNC_8(&VAR_12->volumes_lock);
 VAR_13 = VAR_12->volumes[VAR_8];
 if (!VAR_13)
  goto out_unlock;

 VAR_10 = -VAR_0;
 switch (VAR_9) {
 case 129:
  if (VAR_13->exclusive)
   goto out_unlock;
  VAR_13->readers += 1;
  break;

 case 128:
  if (VAR_13->exclusive || VAR_13->writers > 0)
   goto out_unlock;
  VAR_13->writers += 1;
  break;

 case 131:
  if (VAR_13->exclusive || VAR_13->writers || VAR_13->readers ||
      VAR_13->metaonly)
   goto out_unlock;
  VAR_13->exclusive = 1;
  break;

 case 130:
  if (VAR_13->metaonly || VAR_13->exclusive)
   goto out_unlock;
  VAR_13->metaonly = 1;
  break;
 }
 FUNC_2(&VAR_13->dev);
 VAR_13->ref_count += 1;
 FUNC_9(&VAR_12->volumes_lock);

 VAR_11->vol = VAR_13;
 VAR_11->mode = VAR_9;

 FUNC_6(&VAR_12->ckvol_mutex);
 if (!VAR_13->checked && !VAR_13->skip_check) {

  VAR_10 = FUNC_11(VAR_12, VAR_8);
  if (VAR_10 < 0) {
   FUNC_7(&VAR_12->ckvol_mutex);
   FUNC_12(VAR_11);
   return FUNC_0(VAR_10);
  }
  if (VAR_10 == 1) {
   FUNC_16(VAR_12, "volume %d on UBI device %d is corrupted",
     VAR_8, VAR_12->ubi_num);
   VAR_13->corrupted = 1;
  }
  VAR_13->checked = 1;
 }
 FUNC_7(&VAR_12->ckvol_mutex);

 return VAR_11;

out_unlock:
 FUNC_9(&VAR_12->volumes_lock);
 FUNC_5(VAR_5);
out_free:
 FUNC_3(VAR_11);
out_put_ubi:
 FUNC_13(VAR_12, "cannot open device %d, volume %d, error %d",
  VAR_7, VAR_8, VAR_10);
 FUNC_15(VAR_12);
 return FUNC_0(VAR_10);
}
