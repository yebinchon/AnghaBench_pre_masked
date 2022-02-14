
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_fs_info {int balance_lock; TYPE_1__* fs_devices; } ;
struct TYPE_4__ {int devs_min; int bg_flag; } ;
struct TYPE_3__ {int rw_devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_fs_info*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u64 FUNC_4(struct btrfs_fs_info *VAR_9, u64 VAR_10)
{
 u64 VAR_11 = VAR_9->fs_devices->rw_devices;
 u64 VAR_12;
 u64 VAR_13;
 u64 VAR_14 = 0;





 FUNC_2(&VAR_9->balance_lock);
 VAR_12 = FUNC_1(VAR_9, VAR_10);
 if (VAR_12) {

  if ((VAR_10 & VAR_12) & VAR_6) {
   FUNC_3(&VAR_9->balance_lock);
   return FUNC_0(VAR_12);
  }
 }
 FUNC_3(&VAR_9->balance_lock);


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  if (VAR_11 >= VAR_8[VAR_13].devs_min)
   VAR_14 |= VAR_8[VAR_13].bg_flag;
 }
 VAR_14 &= VAR_10;

 if (VAR_14 & VAR_5)
  VAR_14 = VAR_5;
 else if (VAR_14 & VAR_4)
  VAR_14 = VAR_4;
 else if (VAR_14 & VAR_3)
  VAR_14 = VAR_3;
 else if (VAR_14 & VAR_2)
  VAR_14 = VAR_2;
 else if (VAR_14 & VAR_1)
  VAR_14 = VAR_1;

 VAR_10 &= ~VAR_0;

 return FUNC_0(VAR_10 | VAR_14);
}
