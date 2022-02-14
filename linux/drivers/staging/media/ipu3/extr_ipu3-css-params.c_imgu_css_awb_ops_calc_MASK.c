
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct process_lines {int block_height; int acc_enable; int max_tr; int max_op; int grid_height_per_slice; int y_start; int grid_height; int image_height; } ;
struct TYPE_18__ {int awb_acc; } ;
struct TYPE_19__ {TYPE_7__ enable; } ;
struct TYPE_20__ {TYPE_8__ sp; } ;
struct TYPE_11__ {TYPE_9__ isp; } ;
struct imgu_fw_info {TYPE_10__ info; } ;
struct imgu_css_pipe {size_t bindex; TYPE_2__* rect; } ;
struct imgu_css {TYPE_1__* fwp; struct imgu_css_pipe* pipes; } ;
struct imgu_abi_awb_intra_frame_operations_data {int transfer_data; int process_lines_data; int ops; } ;
struct TYPE_14__ {int block_height_log2; int y_start; int height; } ;
struct TYPE_15__ {TYPE_3__ grid; } ;
struct imgu_abi_awb_config {TYPE_6__* stripes; TYPE_4__ config; struct imgu_abi_awb_intra_frame_operations_data operations_data; } ;
struct TYPE_16__ {int height_per_slice; } ;
struct TYPE_17__ {TYPE_5__ grid; } ;
struct TYPE_13__ {int height; } ;
struct TYPE_12__ {struct imgu_fw_info* binary_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct process_lines*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct imgu_css *VAR_3, unsigned int VAR_4,
     struct imgu_abi_awb_config *VAR_5)
{
 struct imgu_abi_awb_intra_frame_operations_data *VAR_6 =
  &VAR_5->operations_data;
 struct imgu_css_pipe *VAR_7 = &VAR_3->pipes[VAR_4];
 struct imgu_fw_info *VAR_8 =
  &VAR_3->fwp->binary_header[VAR_7->bindex];

 struct process_lines VAR_9 = {
  .image_height = VAR_7->rect[VAR_2].height,
  .grid_height = VAR_5->config.grid.height,
  .block_height =
   1 << VAR_5->config.grid.block_height_log2,
  .y_start = VAR_5->config.grid.y_start,
  .grid_height_per_slice =
   VAR_5->stripes[0].grid.height_per_slice,
  .max_op = VAR_0,
  .max_tr = VAR_1,
  .acc_enable = VAR_8->info.isp.sp.enable.awb_acc,
 };

 return FUNC_0(&VAR_9, VAR_6->ops, VAR_6->process_lines_data,
       VAR_6->transfer_data);
}
