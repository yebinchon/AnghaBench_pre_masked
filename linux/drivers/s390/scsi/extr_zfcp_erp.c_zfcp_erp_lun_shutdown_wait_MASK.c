
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_scsi_dev {struct zfcp_port* port; } ;
struct zfcp_port {struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int erp_lock; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_device*,int,char*,int ) ;
 struct zfcp_scsi_dev* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct zfcp_adapter*) ;

void FUNC_5(struct scsi_device *VAR_3, char *VAR_4)
{
 unsigned long VAR_5;
 struct zfcp_scsi_dev *VAR_6 = FUNC_1(VAR_3);
 struct zfcp_port *VAR_7 = VAR_6->port;
 struct zfcp_adapter *VAR_8 = VAR_7->adapter;
 int VAR_9 = VAR_1 | VAR_0;

 FUNC_2(&VAR_8->erp_lock, VAR_5);
 FUNC_0(VAR_3, VAR_9, VAR_4, VAR_2);
 FUNC_3(&VAR_8->erp_lock, VAR_5);

 FUNC_4(VAR_8);
}
