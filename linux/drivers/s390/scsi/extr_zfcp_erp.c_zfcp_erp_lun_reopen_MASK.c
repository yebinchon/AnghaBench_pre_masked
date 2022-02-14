
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_scsi_dev {struct zfcp_port* port; } ;
struct zfcp_port {struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int erp_lock; } ;
struct scsi_device {int dummy; } ;


 int FUNC_0 (struct scsi_device*,int,char*,int ) ;
 struct zfcp_scsi_dev* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct scsi_device *VAR_0, int VAR_1, char *VAR_2)
{
 unsigned long VAR_3;
 struct zfcp_scsi_dev *VAR_4 = FUNC_1(VAR_0);
 struct zfcp_port *VAR_5 = VAR_4->port;
 struct zfcp_adapter *VAR_6 = VAR_5->adapter;

 FUNC_2(&VAR_6->erp_lock, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2, 0);
 FUNC_3(&VAR_6->erp_lock, VAR_3);
}
