
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_fs_info {TYPE_1__* fs_devices; } ;
struct TYPE_2__ {int rw_devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_fs_info*,int) ;

__attribute__((used)) static u64 FUNC_2(struct btrfs_fs_info *VAR_6, u64 VAR_7)
{
 u64 VAR_8;
 u64 VAR_9;





 VAR_9 = FUNC_1(VAR_6, VAR_7);
 if (VAR_9)
  return FUNC_0(VAR_9);

 VAR_8 = VAR_6->fs_devices->rw_devices;

 VAR_9 = VAR_1 | VAR_5 |
  VAR_4 | VAR_3;

 if (VAR_8 == 1) {
  VAR_9 |= VAR_0;
  VAR_9 = VAR_7 & ~VAR_9;


  if (VAR_7 & VAR_1)
   return VAR_9;


  if (VAR_7 & (VAR_4 |
        VAR_3))
   return VAR_9 | VAR_0;
 } else {

  if (VAR_7 & VAR_9)
   return VAR_7;

  VAR_9 |= VAR_0;
  VAR_9 = VAR_7 & ~VAR_9;


  if (VAR_7 & VAR_0)
   return VAR_9 | VAR_2;


 }

 return VAR_7;
}
