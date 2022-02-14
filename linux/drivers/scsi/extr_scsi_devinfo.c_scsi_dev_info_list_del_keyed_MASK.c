
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_dev_info_list {int dev_info_list; } ;
typedef enum scsi_devinfo_key { ____Placeholder_scsi_devinfo_key } scsi_devinfo_key ;


 scalar_t__ FUNC_0 (struct scsi_dev_info_list*) ;
 int FUNC_1 (struct scsi_dev_info_list*) ;
 int FUNC_2 (struct scsi_dev_info_list*) ;
 int FUNC_3 (int *) ;
 struct scsi_dev_info_list* FUNC_4 (char*,char*,int) ;

int FUNC_5(char *VAR_0, char *VAR_1,
     enum scsi_devinfo_key VAR_2)
{
 struct scsi_dev_info_list *VAR_3;

 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_3(&VAR_3->dev_info_list);
 FUNC_2(VAR_3);
 return 0;
}
