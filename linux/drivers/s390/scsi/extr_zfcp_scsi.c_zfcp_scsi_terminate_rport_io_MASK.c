
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {int dev; } ;
struct zfcp_adapter {int dummy; } ;
struct fc_rport {int port_id; int port_name; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;


 int FUNC_0 (int *) ;
 struct Scsi_Host* FUNC_1 (struct fc_rport*) ;
 int FUNC_2 (char*,struct zfcp_adapter*,int ,int ) ;
 int FUNC_3 (struct zfcp_port*,int ,char*) ;
 struct zfcp_port* FUNC_4 (struct zfcp_adapter*,int ) ;

__attribute__((used)) static void FUNC_5(struct fc_rport *VAR_0)
{
 struct zfcp_port *VAR_1;
 struct Scsi_Host *VAR_2 = FUNC_1(VAR_0);
 struct zfcp_adapter *VAR_3 =
  (struct zfcp_adapter *)VAR_2->hostdata[0];

 VAR_1 = FUNC_4(VAR_3, VAR_0->port_name);

 if (VAR_1) {
  FUNC_3(VAR_1, 0, "sctrpi1");
  FUNC_0(&VAR_1->dev);
 } else {
  FUNC_2(
   "sctrpin", VAR_3,
   VAR_0->port_name ,
   VAR_0->port_id );
 }
}
