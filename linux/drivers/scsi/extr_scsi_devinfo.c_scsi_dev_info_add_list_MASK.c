
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_dev_info_list_table {char const* name; int key; int node; int scsi_dev_info_list; } ;
typedef enum scsi_devinfo_key { ____Placeholder_scsi_devinfo_key } scsi_devinfo_key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_dev_info_list_table*) ;
 struct scsi_dev_info_list_table* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_3 ;
 struct scsi_dev_info_list_table* FUNC_4 (int) ;

int FUNC_5(enum scsi_devinfo_key VAR_4, const char *VAR_5)
{
 struct scsi_dev_info_list_table *VAR_6 =
  FUNC_4(VAR_4);

 if (!FUNC_1(VAR_6))

  return -VAR_0;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);

 if (!VAR_6)
  return -VAR_1;

 FUNC_0(&VAR_6->node);
 FUNC_0(&VAR_6->scsi_dev_info_list);
 VAR_6->name = VAR_5;
 VAR_6->key = VAR_4;
 FUNC_3(&VAR_6->node, &VAR_3);

 return 0;
}
