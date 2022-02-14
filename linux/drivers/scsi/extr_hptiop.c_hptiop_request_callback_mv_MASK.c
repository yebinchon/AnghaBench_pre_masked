
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hptiop_hba {int msg_done; TYPE_2__* reqs; } ;
struct TYPE_3__ {int result; } ;
struct hpt_iop_request_scsi_command {TYPE_1__ header; } ;
struct TYPE_4__ {struct hpt_iop_request_scsi_command* req_virt; } ;


 int FUNC_0 (int) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct hptiop_hba*,int,struct hpt_iop_request_scsi_command*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct hptiop_hba *VAR_3, u64 VAR_4)
{
 u32 VAR_5 = (VAR_4 >> 5) & 0x7;
 struct hpt_iop_request_scsi_command *VAR_6;

 FUNC_2("hptiop_request_callback_mv: tag=%llx\n", VAR_4);

 FUNC_0((VAR_4 & VAR_2) == 0);

 switch (VAR_5) {
 case 130:
 case 128:
  VAR_3->msg_done = 1;
  break;

 case 129:
  VAR_6 = VAR_3->reqs[VAR_4 >> 8].req_virt;
  if (FUNC_4(VAR_4 & VAR_1))
   VAR_6->header.result = FUNC_1(VAR_0);

  FUNC_3(VAR_3, VAR_4>>8, VAR_6);
  break;

 default:
  break;
 }
}
