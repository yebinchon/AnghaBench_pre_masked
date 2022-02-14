
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int bbCreditLsb; int bbCreditMsb; } ;
struct TYPE_8__ {TYPE_1__ cmn; } ;
struct lpfc_vport {TYPE_5__* phba; TYPE_2__ fc_sparam; } ;
struct TYPE_12__ {scalar_t__ rtt; void* attached_port_bbc; void* port_bbc; } ;
struct fc_rdp_bbc_desc {void* length; TYPE_6__ bbc_info; void* tag; } ;
struct TYPE_9__ {int bbCreditLsb; int bbCreditMsb; } ;
struct TYPE_10__ {TYPE_3__ cmn; } ;
struct TYPE_11__ {scalar_t__ fc_topology; TYPE_4__ fc_fabparam; } ;
typedef int READ_LNK_VAR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct fc_rdp_bbc_desc *VAR_2, READ_LNK_VAR *VAR_3,
        struct lpfc_vport *VAR_4)
{
 uint32_t VAR_5;

 VAR_2->tag = FUNC_0(VAR_1);

 VAR_5 = VAR_4->fc_sparam.cmn.bbCreditLsb |
   (VAR_4->fc_sparam.cmn.bbCreditMsb << 8);
 VAR_2->bbc_info.port_bbc = FUNC_0(VAR_5);
 if (VAR_4->phba->fc_topology != VAR_0) {
  VAR_5 = VAR_4->phba->fc_fabparam.cmn.bbCreditLsb |
   (VAR_4->phba->fc_fabparam.cmn.bbCreditMsb << 8);
  VAR_2->bbc_info.attached_port_bbc = FUNC_0(VAR_5);
 } else {
  VAR_2->bbc_info.attached_port_bbc = 0;
 }

 VAR_2->bbc_info.rtt = 0;
 VAR_2->length = FUNC_0(sizeof(VAR_2->bbc_info));

 return sizeof(struct fc_rdp_bbc_desc);
}
