
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int fc_flag; int fabric_portname; int fabric_nodename; } ;
struct lpfc_nodelist {int nlp_portname; int nlp_nodename; } ;
struct TYPE_2__ {int wwpn; int wwnn; } ;
struct fc_rdp_port_name_desc {void* length; TYPE_1__ port_names; void* tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct fc_rdp_port_name_desc *VAR_2,
  struct lpfc_vport *VAR_3, struct lpfc_nodelist *VAR_4)
{

 VAR_2->tag = FUNC_0(VAR_1);
 if (VAR_3->fc_flag & VAR_0) {
  FUNC_1(VAR_2->port_names.wwnn, &VAR_3->fabric_nodename,
         sizeof(VAR_2->port_names.wwnn));

  FUNC_1(VAR_2->port_names.wwpn, &VAR_3->fabric_portname,
         sizeof(VAR_2->port_names.wwpn));
 } else {
  FUNC_1(VAR_2->port_names.wwnn, &VAR_4->nlp_nodename,
         sizeof(VAR_2->port_names.wwnn));

  FUNC_1(VAR_2->port_names.wwpn, &VAR_4->nlp_portname,
         sizeof(VAR_2->port_names.wwpn));
 }

 VAR_2->length = FUNC_0(sizeof(VAR_2->port_names));
 return sizeof(struct fc_rdp_port_name_desc);
}
