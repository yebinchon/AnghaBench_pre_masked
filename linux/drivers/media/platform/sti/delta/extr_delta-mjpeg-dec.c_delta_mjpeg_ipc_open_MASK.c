
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jpeg_video_decode_init_params_t {int circular_buffer_begin_addr_p; int circular_buffer_end_addr_p; } ;
struct jpeg_decode_return_params_t {int dummy; } ;
struct jpeg_decode_params_t {int dummy; } ;
struct delta_mjpeg_ctx {void* ipc_hdl; struct delta_buf* ipc_buf; int str; } ;
struct delta_ipc_param {int size; struct jpeg_video_decode_init_params_t* data; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int name; struct delta_dev* dev; } ;
struct delta_buf {int dummy; } ;


 int FUNC_0 (struct delta_ctx*,char*,struct delta_ipc_param*,int,struct delta_buf**,void**) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct jpeg_video_decode_init_params_t*,int ,int) ;
 int FUNC_4 (struct jpeg_video_decode_init_params_t*,int ,int) ;
 struct delta_mjpeg_ctx* FUNC_5 (struct delta_ctx*) ;

__attribute__((used)) static int FUNC_6(struct delta_ctx *VAR_0)
{
 struct delta_dev *VAR_1 = VAR_0->dev;
 struct delta_mjpeg_ctx *VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = 0;
 struct jpeg_video_decode_init_params_t VAR_4;
 struct jpeg_video_decode_init_params_t *VAR_5 = &VAR_4;
 struct delta_buf *VAR_6;
 u32 VAR_7;
 struct delta_ipc_param VAR_8;
 void *VAR_9;

 FUNC_4(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->circular_buffer_begin_addr_p = 0x00000000;
 VAR_5->circular_buffer_end_addr_p = 0xffffffff;

 FUNC_2(VAR_1->dev,
   "%s  %s\n", VAR_0->name,
   FUNC_3(VAR_5, VAR_2->str, sizeof(VAR_2->str)));

 VAR_8.size = sizeof(*VAR_5);
 VAR_8.data = VAR_5;
 VAR_7 = sizeof(struct jpeg_decode_params_t) +
     sizeof(struct jpeg_decode_return_params_t);
 VAR_3 = FUNC_0(VAR_0, "JPEG_DECODER_HW0", &VAR_8,
        VAR_7, &VAR_6, &VAR_9);
 if (VAR_3) {
  FUNC_1(VAR_1->dev,
   "%s  dumping command %s\n", VAR_0->name,
   FUNC_3(VAR_5, VAR_2->str, sizeof(VAR_2->str)));
  return VAR_3;
 }

 VAR_2->ipc_buf = VAR_6;
 VAR_2->ipc_hdl = VAR_9;

 return 0;
}
