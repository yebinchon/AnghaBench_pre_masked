
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_sgl_task_params {int total_buffer_size; } ;
struct iscsi_task_params {scalar_t__ rx_io_size; scalar_t__ tx_io_size; struct e4_iscsi_task_context* context; } ;
struct iscsi_nop_out_hdr {scalar_t__ itt; } ;
struct iscsi_common_hdr {int dummy; } ;
struct TYPE_6__ {int rem_task_size; int data_desc; int sgl_params; } ;
struct TYPE_4__ {int data_desc; int sgl_params; } ;
struct TYPE_5__ {TYPE_1__ state; } ;
struct e4_iscsi_task_context {TYPE_3__ mstorm_st_context; int ustorm_ag_context; int ustorm_st_context; TYPE_2__ ystorm_st_context; } ;
struct data_hdr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_task_params*,struct data_hdr*,int ) ;
 int FUNC_2 (int *,int *,struct scsi_sgl_task_params*) ;
 int FUNC_3 (struct iscsi_task_params*,struct scsi_sgl_task_params*,int *,struct iscsi_common_hdr*,int *,int ,int) ;
 int FUNC_4 (int *,int *,int ,int ,int ,int ) ;
 int FUNC_5 (struct e4_iscsi_task_context*) ;

int FUNC_6(struct iscsi_task_params *VAR_2,
    struct iscsi_nop_out_hdr *VAR_3,
    struct scsi_sgl_task_params *VAR_4,
    struct scsi_sgl_task_params *VAR_5)
{
 struct e4_iscsi_task_context *VAR_6;

 VAR_6 = VAR_2->context;

 FUNC_1(VAR_2,
    (struct data_hdr *)VAR_3,
    VAR_1);

 if (VAR_3->itt == VAR_0)
  FUNC_5(VAR_2->context);

 if (VAR_2->tx_io_size)
  FUNC_2(&VAR_6->ystorm_st_context.state.sgl_params,
          &VAR_6->ystorm_st_context.state.data_desc,
          VAR_4);

 if (VAR_2->rx_io_size)
  FUNC_2(&VAR_6->mstorm_st_context.sgl_params,
          &VAR_6->mstorm_st_context.data_desc,
          VAR_5);

 FUNC_4(&VAR_6->ustorm_st_context,
      &VAR_6->ustorm_ag_context,
      VAR_2->rx_io_size ?
      VAR_5->total_buffer_size : 0,
      VAR_2->tx_io_size ?
      VAR_4->total_buffer_size : 0,
      0, 0);

 VAR_6->mstorm_st_context.rem_task_size =
    FUNC_0(VAR_2->rx_io_size ?
     VAR_5->total_buffer_size :
     0);

 FUNC_3(VAR_2, VAR_4, ((void*)0),
   (struct iscsi_common_hdr *)VAR_3, ((void*)0),
   VAR_1, 0);

 return 0;
}
