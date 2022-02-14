
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zfcp_scsi_dev {TYPE_1__* port; } ;
struct zfcp_adapter {int dummy; } ;
struct scsi_device {int dummy; } ;
struct TYPE_2__ {struct zfcp_adapter* adapter; } ;


 int VAR_0 ;
 struct zfcp_scsi_dev* FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (int ,struct zfcp_adapter*,TYPE_1__*,struct scsi_device*,char*,int ) ;
 int FUNC_2 (struct scsi_device*,int) ;

__attribute__((used)) static void FUNC_3(struct scsi_device *VAR_1, int VAR_2,
     char *VAR_3, u32 VAR_4)
{
 struct zfcp_scsi_dev *VAR_5 = FUNC_0(VAR_1);
 struct zfcp_adapter *VAR_6 = VAR_5->port->adapter;

 FUNC_2(VAR_1, VAR_2);

 FUNC_1(VAR_0, VAR_6,
    VAR_5->port, VAR_1, VAR_3, VAR_4);
}
