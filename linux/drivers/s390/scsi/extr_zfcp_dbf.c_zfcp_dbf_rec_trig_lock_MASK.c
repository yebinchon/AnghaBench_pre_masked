
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zfcp_port {int dummy; } ;
struct zfcp_adapter {int erp_lock; } ;
struct scsi_device {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (char*,struct zfcp_adapter*,struct zfcp_port*,struct scsi_device*,int ,int ) ;

void FUNC_3(char *VAR_0, struct zfcp_adapter *VAR_1,
       struct zfcp_port *VAR_2, struct scsi_device *VAR_3,
       u8 VAR_4, u8 VAR_5)
{
 unsigned long VAR_6;

 FUNC_0(&VAR_1->erp_lock, VAR_6);
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_1->erp_lock, VAR_6);
}
