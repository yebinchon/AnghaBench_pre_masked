
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ sdev_bflags; } ;
struct scsi_dev_info_list {scalar_t__ flags; } ;
typedef enum scsi_devinfo_key { ____Placeholder_scsi_devinfo_key } scsi_devinfo_key ;
typedef scalar_t__ blist_flags_t ;


 int FUNC_0 (struct scsi_dev_info_list*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct scsi_dev_info_list* FUNC_1 (unsigned char const*,unsigned char const*,int) ;

blist_flags_t FUNC_2(struct scsi_device *VAR_2,
    const unsigned char *VAR_3,
    const unsigned char *VAR_4,
    enum scsi_devinfo_key VAR_5)
{
 struct scsi_dev_info_list *VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (!FUNC_0(VAR_6))
  return VAR_6->flags;


 if (VAR_5 != VAR_0)
  return 0;


 if (VAR_2->sdev_bflags)
  return VAR_2->sdev_bflags;

 return VAR_1;
}
