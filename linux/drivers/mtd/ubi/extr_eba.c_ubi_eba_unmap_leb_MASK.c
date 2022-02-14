
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubi_volume {int vol_id; TYPE_2__* eba_tbl; } ;
struct ubi_device {int fm_eba_sem; scalar_t__ ro_mode; } ;
struct TYPE_4__ {TYPE_1__* entries; } ;
struct TYPE_3__ {int pnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ubi_device*,int,int) ;
 int FUNC_3 (struct ubi_device*,int,int) ;
 int FUNC_4 (struct ubi_device*,int,int,int,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ubi_device *VAR_2, struct ubi_volume *VAR_3,
        int VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = VAR_3->vol_id;

 if (VAR_2->ro_mode)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_2, VAR_7, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_6 = VAR_3->eba_tbl->entries[VAR_4].pnum;
 if (VAR_6 < 0)

  goto out_unlock;

 FUNC_0("erase LEB %d:%d, PEB %d", VAR_7, VAR_4, VAR_6);

 FUNC_1(&VAR_2->fm_eba_sem);
 VAR_3->eba_tbl->entries[VAR_4].pnum = VAR_1;
 FUNC_5(&VAR_2->fm_eba_sem);
 VAR_5 = FUNC_4(VAR_2, VAR_7, VAR_4, VAR_6, 0);

out_unlock:
 FUNC_3(VAR_2, VAR_7, VAR_4);
 return VAR_5;
}
