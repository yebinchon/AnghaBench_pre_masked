
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cpc_sja1000_params {int acc_code0; int acc_code1; int acc_code2; int acc_code3; int acc_mask0; int acc_mask1; int acc_mask2; int acc_mask3; int mode; int outp_contr; scalar_t__ btr1; scalar_t__ btr0; } ;
struct TYPE_4__ {struct cpc_sja1000_params sja1000; } ;
struct TYPE_5__ {int cc_type; TYPE_1__ cc_params; } ;
struct TYPE_6__ {TYPE_2__ can_params; } ;
struct ems_cpc_msg {int length; TYPE_3__ msg; scalar_t__ msgid; int type; } ;
struct cpc_can_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct ems_cpc_msg *VAR_4)
{
 struct cpc_sja1000_params *VAR_5 =
  &VAR_4->msg.can_params.cc_params.sja1000;

 VAR_4->type = VAR_1;
 VAR_4->length = sizeof(struct cpc_can_params);
 VAR_4->msgid = 0;

 VAR_4->msg.can_params.cc_type = VAR_0;


 VAR_5->acc_code0 = 0x00;
 VAR_5->acc_code1 = 0x00;
 VAR_5->acc_code2 = 0x00;
 VAR_5->acc_code3 = 0x00;


 VAR_5->acc_mask0 = 0xFF;
 VAR_5->acc_mask1 = 0xFF;
 VAR_5->acc_mask2 = 0xFF;
 VAR_5->acc_mask3 = 0xFF;

 VAR_5->btr0 = 0;
 VAR_5->btr1 = 0;

 VAR_5->outp_contr = VAR_2;
 VAR_5->mode = VAR_3;
}
