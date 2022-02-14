
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int type; } ;
struct mcu_msg_encode_frame {int pps_qp; int ep2; int ep2_v; int stride; void* src_uv; void* src_y; scalar_t__ src_handle; scalar_t__ user_param; int encoding_options; int channel_id; TYPE_1__ header; } ;
struct allegro_dev {int mbox_command; } ;
struct allegro_channel {int stride; int mcu_channel_id; } ;
typedef int msg ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct allegro_dev*,int *,struct mcu_msg_encode_frame*,int) ;
 int FUNC_1 (struct allegro_dev*) ;
 int FUNC_2 (struct mcu_msg_encode_frame*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct allegro_dev *VAR_3,
      struct allegro_channel *VAR_4,
      dma_addr_t VAR_5, dma_addr_t VAR_6)
{
 struct mcu_msg_encode_frame VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.header.type = VAR_2;
 VAR_7.header.length = sizeof(VAR_7) - sizeof(VAR_7.header);

 VAR_7.channel_id = VAR_4->mcu_channel_id;
 VAR_7.encoding_options = VAR_0;
 VAR_7.pps_qp = 26;
 VAR_7.user_param = 0;
 VAR_7.src_handle = 0;
 VAR_7.src_y = VAR_5;
 VAR_7.src_uv = VAR_6;
 VAR_7.stride = VAR_4->stride;
 VAR_7.ep2 = 0x0;
 VAR_7.ep2_v = VAR_7.ep2 | VAR_1;

 FUNC_0(VAR_3, &VAR_3->mbox_command, &VAR_7, sizeof(VAR_7));
 FUNC_1(VAR_3);

 return 0;
}
