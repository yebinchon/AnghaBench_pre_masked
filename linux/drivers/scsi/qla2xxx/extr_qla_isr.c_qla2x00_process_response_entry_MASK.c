
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_7__ {int entry_type; int entry_status; } ;
typedef TYPE_1__ sts_entry_t ;
typedef int sts_cont_entry_t ;
struct TYPE_8__ {size_t handle_count; int * handle; } ;
typedef TYPE_2__ sts22_entry_t ;
struct TYPE_9__ {size_t handle_count; int * handle; } ;
typedef TYPE_3__ sts21_entry_t ;
struct scsi_qla_host {int dummy; } ;
struct rsp_que {int req; } ;
struct mbx_entry {int dummy; } ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct scsi_qla_host*,int ,TYPE_1__*,int const) ;
 int FUNC_2 (struct scsi_qla_host*,int ,struct mbx_entry*) ;
 int FUNC_3 (struct scsi_qla_host*,int ,int ) ;
 int FUNC_4 (struct rsp_que*,int *) ;
 int FUNC_5 (struct scsi_qla_host*,struct rsp_que*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct scsi_qla_host *VAR_1,
        struct rsp_que *VAR_2,
        sts_entry_t *VAR_3)
{
 sts21_entry_t *VAR_4;
 sts22_entry_t *VAR_5;
 uint16_t VAR_6;
 uint16_t VAR_7;

 switch (VAR_3->entry_type) {
 case 130:
  FUNC_5(VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  VAR_4 = (sts21_entry_t *)VAR_3;
  VAR_6 = VAR_4->handle_count;
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   FUNC_3(VAR_1, VAR_2->req,
      VAR_4->handle[VAR_7]);
  break;
 case 128:
  VAR_5 = (sts22_entry_t *)VAR_3;
  VAR_6 = VAR_5->handle_count;
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   FUNC_3(VAR_1, VAR_2->req,
      VAR_5->handle[VAR_7]);
  break;
 case 131:
  FUNC_4(VAR_2, (sts_cont_entry_t *)VAR_3);
  break;
 case 132:
  FUNC_2(VAR_1, VAR_2->req, (struct mbx_entry *)VAR_3);
  break;
 case 133:
  FUNC_1(VAR_1, VAR_2->req, VAR_3, 133);
  break;
 default:

  FUNC_0(VAR_0, VAR_1, 0x504a,
         "Received unknown response pkt type %x entry status=%x.\n",
         VAR_3->entry_type, VAR_3->entry_status);
  break;
 }
}
