
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tgtaddr ;
struct TYPE_4__ {int port_role; int port_name; int node_name; } ;
struct nvme_fc_rport {TYPE_1__ remoteport; } ;
struct TYPE_5__ {int port_name; int node_name; } ;
struct nvme_fc_lport {TYPE_2__ localport; } ;
typedef int hostaddr ;
struct TYPE_6__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (char*,int,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct nvme_fc_lport *VAR_4,
  struct nvme_fc_rport *VAR_5)
{
 char VAR_6[VAR_0];
 char VAR_7[VAR_0];
 char *VAR_8[4] = { "FC_EVENT=nvmediscovery", VAR_6, VAR_7, ((void*)0) };

 if (!(VAR_5->remoteport.port_role & VAR_1))
  return;

 FUNC_1(VAR_6, sizeof(VAR_6),
  "NVMEFC_HOST_TRADDR=nn-0x%016llx:pn-0x%016llx",
  VAR_4->localport.node_name, VAR_4->localport.port_name);
 FUNC_1(VAR_7, sizeof(VAR_7),
  "NVMEFC_TRADDR=nn-0x%016llx:pn-0x%016llx",
  VAR_5->remoteport.node_name, VAR_5->remoteport.port_name);
 FUNC_0(&VAR_3->kobj, VAR_2, VAR_8);
}
