
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int isp82xx_no_md_cap; } ;
struct qla_hw_data {int optrom_mutex; int optrom_state; int * optrom_buffer; int optrom_region_size; int optrom_region_start; TYPE_3__* isp_ops; TYPE_1__ flags; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; } ;
struct TYPE_9__ {int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_2__ request_payload; struct fc_bsg_reply* reply; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_11__ {struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
struct TYPE_10__ {int (* write_optrom ) (TYPE_4__*,int *,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bsg_job*,int ,int ) ;
 struct Scsi_Host* FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bsg_job*,TYPE_4__*,int) ;
 int FUNC_5 (int ,int ,int *,int ) ;
 TYPE_4__* FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (TYPE_4__*,int *,int ,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct bsg_job *VAR_2)
{
 struct fc_bsg_reply *VAR_3 = VAR_2->reply;
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_2);
 scsi_qla_host_t *VAR_5 = FUNC_6(VAR_4);
 struct qla_hw_data *VAR_6 = VAR_5->hw;
 int VAR_7 = 0;

 FUNC_2(&VAR_6->optrom_mutex);
 VAR_7 = FUNC_4(VAR_2, VAR_5, 1);
 if (VAR_7) {
  FUNC_3(&VAR_6->optrom_mutex);
  return VAR_7;
 }


 VAR_6->flags.isp82xx_no_md_cap = 1;

 FUNC_5(VAR_2->request_payload.sg_list,
     VAR_2->request_payload.sg_cnt, VAR_6->optrom_buffer,
     VAR_6->optrom_region_size);

 VAR_6->isp_ops->write_optrom(VAR_5, VAR_6->optrom_buffer,
     VAR_6->optrom_region_start, VAR_6->optrom_region_size);

 VAR_3->result = VAR_0;
 FUNC_8(VAR_6->optrom_buffer);
 VAR_6->optrom_buffer = ((void*)0);
 VAR_6->optrom_state = VAR_1;
 FUNC_3(&VAR_6->optrom_mutex);
 FUNC_0(VAR_2, VAR_3->result,
         VAR_3->reply_payload_rcv_len);
 return VAR_7;
}
