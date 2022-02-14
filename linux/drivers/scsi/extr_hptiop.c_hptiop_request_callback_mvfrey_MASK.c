
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hptiop_hba {int msg_done; TYPE_1__* reqs; } ;
struct TYPE_4__ {int result; } ;
struct hpt_iop_request_scsi_command {TYPE_2__ header; } ;
struct TYPE_3__ {struct hpt_iop_request_scsi_command* req_virt; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct hptiop_hba*,int,struct hpt_iop_request_scsi_command*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct hptiop_hba *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_3 & 0xf;
 struct hpt_iop_request_scsi_command *VAR_5;

 switch (VAR_4) {
 case 130:
 case 128:
  VAR_2->msg_done = 1;
  break;

 case 129:
  VAR_5 = VAR_2->reqs[(VAR_3 >> 4) & 0xff].req_virt;
  if (FUNC_1(VAR_3 & VAR_0))
   VAR_5->header.result = VAR_1;
  FUNC_0(VAR_2, (VAR_3 >> 4) & 0xff, VAR_5);
  break;

 default:
  break;
 }
}
