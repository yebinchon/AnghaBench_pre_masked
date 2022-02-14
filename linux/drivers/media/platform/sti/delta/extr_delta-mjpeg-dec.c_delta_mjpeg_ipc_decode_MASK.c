
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct jpeg_display_buffer_address_t {int dummy; } ;
struct TYPE_5__ {int struct_size; void* display_decimated_chroma_p; void* display_decimated_luma_p; } ;
struct jpeg_decode_return_params_t {int error_code; TYPE_2__ display_buffer_addr; int decoding_mode; int vertical_decimation_factor; int horizontal_decimation_factor; int additional_flags; int main_aux_enable; void* picture_end_addr_p; void* picture_start_addr_p; } ;
struct jpeg_decode_params_t {int error_code; TYPE_2__ display_buffer_addr; int decoding_mode; int vertical_decimation_factor; int horizontal_decimation_factor; int additional_flags; int main_aux_enable; void* picture_end_addr_p; void* picture_start_addr_p; } ;
struct delta_mjpeg_ctx {struct delta_frame* out_frame; int str; int ipc_hdl; TYPE_1__* ipc_buf; } ;
struct delta_ipc_param {int size; struct jpeg_decode_return_params_t* data; } ;
struct TYPE_6__ {int aligned_width; int aligned_height; } ;
struct delta_frame {int state; int flags; int field; TYPE_3__ info; scalar_t__ paddr; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int name; int decoded_frames; struct delta_dev* dev; } ;
struct delta_au {int paddr; int size; } ;
struct TYPE_4__ {struct jpeg_decode_return_params_t* vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct delta_ctx*,struct delta_frame**) ;
 int FUNC_1 (int ,struct delta_ipc_param*,struct delta_ipc_param*) ;
 scalar_t__ FUNC_2 (struct delta_ctx*,struct jpeg_decode_return_params_t*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (struct jpeg_decode_return_params_t*,int ,int) ;
 int FUNC_6 (struct jpeg_decode_return_params_t*,int ,int) ;
 struct delta_mjpeg_ctx* FUNC_7 (struct delta_ctx*) ;

__attribute__((used)) static int FUNC_8(struct delta_ctx *VAR_9, struct delta_au *VAR_10)
{
 struct delta_dev *VAR_11 = VAR_9->dev;
 struct delta_mjpeg_ctx *VAR_12 = FUNC_7(VAR_9);
 int VAR_13 = 0;
 struct jpeg_decode_params_t *VAR_14 = VAR_12->ipc_buf->vaddr;
 struct jpeg_decode_return_params_t *VAR_15 =
     VAR_12->ipc_buf->vaddr + sizeof(*VAR_14);
 struct delta_frame *VAR_16;
 struct delta_ipc_param VAR_17, VAR_18;

 VAR_13 = FUNC_0(VAR_9, &VAR_16);
 if (VAR_13)
  return VAR_13;

 FUNC_6(VAR_14, 0, sizeof(*VAR_14));

 VAR_14->picture_start_addr_p = (u32)(VAR_10->paddr);
 VAR_14->picture_end_addr_p = (u32)(VAR_10->paddr + VAR_10->size - 1);
 VAR_14->main_aux_enable = VAR_3;
 VAR_14->additional_flags = VAR_1;
 VAR_14->horizontal_decimation_factor = VAR_4;
 VAR_14->vertical_decimation_factor = VAR_6;
 VAR_14->decoding_mode = VAR_5;

 VAR_14->display_buffer_addr.struct_size =
     sizeof(struct jpeg_display_buffer_address_t);
 VAR_14->display_buffer_addr.display_decimated_luma_p =
     (u32)VAR_16->paddr;
 VAR_14->display_buffer_addr.display_decimated_chroma_p =
     (u32)(VAR_16->paddr
    + VAR_16->info.aligned_width * VAR_16->info.aligned_height);

 FUNC_4(VAR_11->dev,
   "%s  %s\n", VAR_9->name,
   FUNC_5(VAR_14, VAR_12->str, sizeof(VAR_12->str)));


 FUNC_6(VAR_15, 0, sizeof(*VAR_15));
 VAR_15->error_code = VAR_2;

 VAR_17.size = sizeof(*VAR_14);
 VAR_17.data = VAR_14;
 VAR_18.size = sizeof(*VAR_15);
 VAR_18.data = VAR_15;
 VAR_13 = FUNC_1(VAR_12->ipc_hdl, &VAR_17, &VAR_18);
 if (VAR_13) {
  FUNC_3(VAR_11->dev,
   "%s  dumping command %s\n", VAR_9->name,
   FUNC_5(VAR_14, VAR_12->str,
          sizeof(VAR_12->str)));
  return VAR_13;
 }

 VAR_9->decoded_frames++;


 if (FUNC_2(VAR_9, VAR_15)) {
  FUNC_3(VAR_11->dev,
   "%s  dumping command %s\n", VAR_9->name,
   FUNC_5(VAR_14, VAR_12->str,
          sizeof(VAR_12->str)));
 }

 VAR_16->field = VAR_8;
 VAR_16->flags = VAR_7;
 VAR_16->state |= VAR_0;

 VAR_12->out_frame = VAR_16;

 return 0;
}
