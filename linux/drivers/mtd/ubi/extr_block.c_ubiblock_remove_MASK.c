
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubiblock {scalar_t__ refcnt; int dev_mutex; int list; } ;
struct ubi_volume_info {int vol_id; int ubi_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ubiblock* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ubiblock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubiblock*) ;

int FUNC_6(struct ubi_volume_info *VAR_3)
{
 struct ubiblock *VAR_4;
 int VAR_5;

 FUNC_3(&VAR_2);
 VAR_4 = FUNC_0(VAR_3->ubi_num, VAR_3->vol_id);
 if (!VAR_4) {
  VAR_5 = -VAR_1;
  goto out_unlock;
 }


 FUNC_3(&VAR_4->dev_mutex);
 if (VAR_4->refcnt > 0) {
  VAR_5 = -VAR_0;
  goto out_unlock_dev;
 }


 FUNC_2(&VAR_4->list);
 FUNC_5(VAR_4);
 FUNC_4(&VAR_4->dev_mutex);
 FUNC_4(&VAR_2);

 FUNC_1(VAR_4);
 return 0;

out_unlock_dev:
 FUNC_4(&VAR_4->dev_mutex);
out_unlock:
 FUNC_4(&VAR_2);
 return VAR_5;
}
