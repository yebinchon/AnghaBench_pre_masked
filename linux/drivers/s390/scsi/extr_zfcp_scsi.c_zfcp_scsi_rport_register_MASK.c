
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_port {int starget_id; struct fc_rport* rport; int supported_classes; int maxframe_size; scalar_t__ wwpn; TYPE_2__* adapter; int d_id; int wwnn; } ;
struct fc_rport_identifiers {int roles; int port_id; scalar_t__ port_name; int node_name; } ;
struct fc_rport {int scsi_target_id; int supported_classes; int maxframe_size; } ;
struct TYPE_4__ {TYPE_1__* ccw_device; int scsi_host; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned long long) ;
 struct fc_rport* FUNC_1 (int ,int ,struct fc_rport_identifiers*) ;
 int FUNC_2 (char*,TYPE_2__*,struct zfcp_port*,int *,int ,int ) ;
 int FUNC_3 (struct zfcp_port*) ;

__attribute__((used)) static void FUNC_4(struct zfcp_port *VAR_2)
{
 struct fc_rport_identifiers VAR_3;
 struct fc_rport *VAR_4;

 if (VAR_2->rport)
  return;

 VAR_3.node_name = VAR_2->wwnn;
 VAR_3.port_name = VAR_2->wwpn;
 VAR_3.port_id = VAR_2->d_id;
 VAR_3.roles = VAR_0;

 FUNC_2("scpaddy", VAR_2->adapter, VAR_2, ((void*)0),
          VAR_1,
          VAR_1);
 VAR_4 = FUNC_1(VAR_2->adapter->scsi_host, 0, &VAR_3);
 if (!VAR_4) {
  FUNC_0(&VAR_2->adapter->ccw_device->dev,
   "Registering port 0x%016Lx failed\n",
   (unsigned long long)VAR_2->wwpn);
  return;
 }

 VAR_4->maxframe_size = VAR_2->maxframe_size;
 VAR_4->supported_classes = VAR_2->supported_classes;
 VAR_2->rport = VAR_4;
 VAR_2->starget_id = VAR_4->scsi_target_id;

 FUNC_3(VAR_2);
}
