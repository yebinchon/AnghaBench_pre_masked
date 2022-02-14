
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_sgl_task_params {int total_buffer_size; } ;
struct iscsi_text_request_hdr {int dummy; } ;
struct iscsi_task_params {scalar_t__ tx_io_size; scalar_t__ rx_io_size; struct e4_iscsi_task_context* context; } ;
struct iscsi_common_hdr {int dummy; } ;
struct TYPE_6__ {int rem_task_size; int data_desc; int sgl_params; } ;
struct TYPE_4__ {int data_desc; int sgl_params; } ;
struct TYPE_5__ {TYPE_1__ state; } ;
struct e4_iscsi_task_context {int ustorm_ag_context; int ustorm_st_context; TYPE_3__ mstorm_st_context; TYPE_2__ ystorm_st_context; } ;
struct data_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_task_params*,struct data_hdr*,int ) ;
 int FUNC_2 (int *,int *,struct scsi_sgl_task_params*) ;
 int FUNC_3 (struct iscsi_task_params*,struct scsi_sgl_task_params*,int *,struct iscsi_common_hdr*,int *,int ,int) ;
 int FUNC_4 (int *,int *,int ,int ,int ,int ) ;

int FUNC_5(struct iscsi_task_params *VAR_1,
         struct iscsi_text_request_hdr *VAR_2,
         struct scsi_sgl_task_params *VAR_3,
         struct scsi_sgl_task_params *VAR_4)
{
 struct e4_iscsi_task_context *VAR_5;

 VAR_5 = VAR_1->context;

 FUNC_1(VAR_1,
    (struct data_hdr *)VAR_2,
    VAR_0);

 if (VAR_1->tx_io_size)
  FUNC_2(&VAR_5->ystorm_st_context.state.sgl_params,
          &VAR_5->ystorm_st_context.state.data_desc,
          VAR_3);

 if (VAR_1->rx_io_size)
  FUNC_2(&VAR_5->mstorm_st_context.sgl_params,
          &VAR_5->mstorm_st_context.data_desc,
          VAR_4);

 VAR_5->mstorm_st_context.rem_task_size =
    FUNC_0(VAR_1->rx_io_size ?
     VAR_4->total_buffer_size : 0);

 FUNC_4(&VAR_5->ustorm_st_context,
      &VAR_5->ustorm_ag_context,
      VAR_1->rx_io_size ?
      VAR_4->total_buffer_size : 0,
      VAR_1->tx_io_size ?
      VAR_3->total_buffer_size : 0, 0, 0);

 FUNC_3(VAR_1, VAR_3, ((void*)0),
   (struct iscsi_common_hdr *)VAR_2, ((void*)0),
   VAR_0, 0);

 return 0;
}
