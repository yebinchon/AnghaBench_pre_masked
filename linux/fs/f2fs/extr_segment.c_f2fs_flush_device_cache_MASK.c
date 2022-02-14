
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int s_ndevs; int dev_lock; int dirty_device; } ;
struct TYPE_2__ {int bdev; } ;


 TYPE_1__ FUNC_0 (int) ;
 int FUNC_1 (struct f2fs_sb_info*,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct f2fs_sb_info *VAR_0)
{
 int VAR_1 = 0, VAR_2;

 if (!FUNC_3(VAR_0))
  return 0;

 for (VAR_2 = 1; VAR_2 < VAR_0->s_ndevs; VAR_2++) {
  if (!FUNC_4(VAR_2, (char *)&VAR_0->dirty_device))
   continue;
  VAR_1 = FUNC_1(VAR_0, FUNC_0(VAR_2).bdev);
  if (VAR_1)
   break;

  FUNC_5(&VAR_0->dev_lock);
  FUNC_2(VAR_2, (char *)&VAR_0->dirty_device);
  FUNC_6(&VAR_0->dev_lock);
 }

 return VAR_1;
}
