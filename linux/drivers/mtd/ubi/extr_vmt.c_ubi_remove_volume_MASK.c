
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {scalar_t__ mode; struct ubi_volume* vol; } ;
struct ubi_volume {int vol_id; int reserved_pebs; int ref_count; int dev; int cdev; struct ubi_device* ubi; } ;
struct ubi_device {int rsvd_pebs; int avail_pebs; int vol_count; int volumes_lock; struct ubi_volume** volumes; scalar_t__ ro_mode; int ubi_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ubi_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ubi_device*,int,int *) ;
 int FUNC_8 (struct ubi_device*,struct ubi_volume*,int) ;
 int FUNC_9 (struct ubi_device*,char*,int,int) ;
 int FUNC_10 (struct ubi_device*) ;
 int FUNC_11 (struct ubi_device*,struct ubi_volume*,int ) ;

int FUNC_12(struct ubi_volume_desc *VAR_4, int VAR_5)
{
 struct ubi_volume *VAR_6 = VAR_4->vol;
 struct ubi_device *VAR_7 = VAR_6->ubi;
 int VAR_8, VAR_9, VAR_10 = VAR_6->vol_id, VAR_11 = VAR_6->reserved_pebs;

 FUNC_1("remove device %d, volume %d", VAR_7->ubi_num, VAR_10);
 FUNC_6(VAR_4->mode == VAR_2);
 FUNC_6(VAR_6 == VAR_7->volumes[VAR_10]);

 if (VAR_7->ro_mode)
  return -VAR_1;

 FUNC_4(&VAR_7->volumes_lock);
 if (VAR_6->ref_count > 1) {




  VAR_9 = -VAR_0;
  goto out_unlock;
 }
 VAR_7->volumes[VAR_10] = ((void*)0);
 FUNC_5(&VAR_7->volumes_lock);

 if (!VAR_5) {
  VAR_9 = FUNC_7(VAR_7, VAR_10, ((void*)0));
  if (VAR_9)
   goto out_err;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->reserved_pebs; VAR_8++) {
  VAR_9 = FUNC_8(VAR_7, VAR_6, VAR_8);
  if (VAR_9)
   goto out_err;
 }

 FUNC_0(&VAR_6->cdev, &VAR_6->dev);
 FUNC_2(&VAR_6->dev);

 FUNC_4(&VAR_7->volumes_lock);
 VAR_7->rsvd_pebs -= VAR_11;
 VAR_7->avail_pebs += VAR_11;
 FUNC_10(VAR_7);
 VAR_7->vol_count -= 1;
 FUNC_5(&VAR_7->volumes_lock);

 FUNC_11(VAR_7, VAR_6, VAR_3);
 if (!VAR_5)
  FUNC_3(VAR_7);

 return 0;

out_err:
 FUNC_9(VAR_7, "cannot remove volume %d, error %d", VAR_10, VAR_9);
 FUNC_4(&VAR_7->volumes_lock);
 VAR_7->volumes[VAR_10] = VAR_6;
out_unlock:
 FUNC_5(&VAR_7->volumes_lock);
 return VAR_9;
}
