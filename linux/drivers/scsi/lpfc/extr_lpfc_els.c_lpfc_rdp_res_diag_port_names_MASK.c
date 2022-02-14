
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int fc_portname; int fc_nodename; } ;
struct TYPE_2__ {int wwpn; int wwnn; } ;
struct fc_rdp_port_name_desc {void* length; TYPE_1__ port_names; void* tag; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct fc_rdp_port_name_desc *VAR_1,
  struct lpfc_vport *VAR_2)
{

 VAR_1->tag = FUNC_0(VAR_0);

 FUNC_1(VAR_1->port_names.wwnn, &VAR_2->fc_nodename,
   sizeof(VAR_1->port_names.wwnn));

 FUNC_1(VAR_1->port_names.wwpn, &VAR_2->fc_portname,
   sizeof(VAR_1->port_names.wwpn));

 VAR_1->length = FUNC_0(sizeof(VAR_1->port_names));
 return sizeof(struct fc_rdp_port_name_desc);
}
