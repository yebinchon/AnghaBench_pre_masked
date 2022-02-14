
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pqi_raid_error_info {int data_in_transferred; int sense_data_length; int data; } ;
struct TYPE_3__ {unsigned int payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_1__ reply_payload; int reply; int reply_len; } ;
struct TYPE_4__ {int response_length; int response; } ;
struct bmic_csmi_smp_passthru_buffer {TYPE_2__ parameters; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int *,int ) ;

__attribute__((used)) static unsigned int FUNC_5(
 struct bmic_csmi_smp_passthru_buffer *VAR_0, struct bsg_job *VAR_1,
 struct pqi_raid_error_info *VAR_2)
{
 FUNC_4(VAR_1->reply_payload.sg_list,
  VAR_1->reply_payload.sg_cnt, &VAR_0->parameters.response,
  FUNC_2(VAR_0->parameters.response_length));

 VAR_1->reply_len = FUNC_1(VAR_2->sense_data_length);
 FUNC_3(VAR_1->reply, VAR_2->data,
   FUNC_1(VAR_2->sense_data_length));

 return VAR_1->reply_payload.payload_len -
  FUNC_0(&VAR_2->data_in_transferred);
}
