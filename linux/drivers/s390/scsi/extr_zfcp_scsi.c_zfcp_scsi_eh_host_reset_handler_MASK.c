
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_scsi_dev {TYPE_1__* port; } ;
struct zfcp_adapter {int connection_features; } ;
struct scsi_cmnd {int device; } ;
struct TYPE_2__ {struct zfcp_adapter* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 struct zfcp_scsi_dev* FUNC_1 (int ) ;
 int FUNC_2 (char*,struct zfcp_adapter*,int ,int) ;
 int FUNC_3 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_4 (struct zfcp_adapter*,int ,char*) ;
 int FUNC_5 (struct zfcp_adapter*) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_2)
{
 struct zfcp_scsi_dev *VAR_3 = FUNC_1(VAR_2->device);
 struct zfcp_adapter *VAR_4 = VAR_3->port->adapter;
 int VAR_5 = VAR_1, VAR_6;

 if (!(VAR_4->connection_features & VAR_0)) {
  FUNC_4(VAR_4, 0, "schrh_p");
  FUNC_5(VAR_4);
 }
 FUNC_3(VAR_4, 0, "schrh_1");
 FUNC_5(VAR_4);
 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6)
  VAR_5 = VAR_6;

 FUNC_2("schrh_r", VAR_4, ~0, VAR_5);
 return VAR_5;
}
