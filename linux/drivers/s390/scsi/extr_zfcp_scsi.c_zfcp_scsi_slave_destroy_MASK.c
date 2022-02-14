
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_scsi_dev {TYPE_1__* port; } ;
struct scsi_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 struct zfcp_scsi_dev* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*,char*) ;

__attribute__((used)) static void FUNC_3(struct scsi_device *VAR_0)
{
 struct zfcp_scsi_dev *VAR_1 = FUNC_1(VAR_0);


 if (!VAR_1->port)
  return;

 FUNC_2(VAR_0, "scssd_1");
 FUNC_0(&VAR_1->port->dev);
}
