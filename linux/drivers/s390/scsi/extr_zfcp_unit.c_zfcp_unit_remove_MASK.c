
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zfcp_unit {int dev; int list; } ;
struct zfcp_port {int unit_list_lock; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 struct zfcp_unit* FUNC_0 (struct zfcp_port*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct scsi_device*) ;
 int FUNC_5 (struct scsi_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct scsi_device* FUNC_8 (struct zfcp_unit*) ;

int FUNC_9(struct zfcp_port *VAR_1, u64 VAR_2)
{
 struct zfcp_unit *VAR_3;
 struct scsi_device *VAR_4;

 FUNC_6(&VAR_1->unit_list_lock);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_2(&VAR_3->list);
 FUNC_7(&VAR_1->unit_list_lock);

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4) {
  FUNC_5(VAR_4);
  FUNC_4(VAR_4);
 }

 FUNC_3(&VAR_3->dev);

 FUNC_1(&VAR_3->dev);

 return 0;
}
