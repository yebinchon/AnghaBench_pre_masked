
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cont_reading_from_srcdev_mode; scalar_t__ srcdevid; char* srcdev_name; char* tgtdev_name; } ;
struct btrfs_ioctl_dev_replace_args {int result; TYPE_1__ start; } ;
struct btrfs_fs_info {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_fs_info*,char*,scalar_t__,char*,int) ;

int FUNC_1(struct btrfs_fs_info *VAR_3,
       struct btrfs_ioctl_dev_replace_args *VAR_4)
{
 int VAR_5;

 switch (VAR_4->start.cont_reading_from_srcdev_mode) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_2;
 }

 if ((VAR_4->start.srcdevid == 0 && VAR_4->start.srcdev_name[0] == '\0') ||
     VAR_4->start.tgtdev_name[0] == '\0')
  return -VAR_2;

 VAR_5 = FUNC_0(VAR_3, VAR_4->start.tgtdev_name,
     VAR_4->start.srcdevid,
     VAR_4->start.srcdev_name,
     VAR_4->start.cont_reading_from_srcdev_mode);
 VAR_4->result = VAR_5;

 if (VAR_5 == VAR_1 ||
     VAR_5 == VAR_0)
  return 0;

 return VAR_5;
}
