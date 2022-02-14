
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_h264_dpb_entry {int bottom_field_order_cnt; int top_field_order_cnt; } ;
struct v4l2_ctrl_h264_decode_params {int bottom_field_order_cnt; int top_field_order_cnt; } ;
struct hantro_h264_dec_priv_tbl {int * poc; } ;
struct hantro_h264_dec_ctrls {struct v4l2_ctrl_h264_decode_params* decode; } ;
struct TYPE_3__ {struct hantro_h264_dec_priv_tbl* cpu; } ;
struct TYPE_4__ {struct v4l2_h264_dpb_entry* dpb; TYPE_1__ priv; struct hantro_h264_dec_ctrls ctrls; } ;
struct hantro_ctx {TYPE_2__ h264_dec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hantro_ctx*) ;

__attribute__((used)) static void FUNC_1(struct hantro_ctx *VAR_1)
{
 const struct hantro_h264_dec_ctrls *VAR_2 = &VAR_1->h264_dec.ctrls;
 const struct v4l2_ctrl_h264_decode_params *VAR_3 = VAR_2->decode;
 struct hantro_h264_dec_priv_tbl *VAR_4 = VAR_1->h264_dec.priv.cpu;
 const struct v4l2_h264_dpb_entry *VAR_5 = VAR_1->h264_dec.dpb;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  VAR_4->poc[VAR_6 * 2] = VAR_5[VAR_6].top_field_order_cnt;
  VAR_4->poc[VAR_6 * 2 + 1] = VAR_5[VAR_6].bottom_field_order_cnt;
 }

 VAR_4->poc[32] = VAR_3->top_field_order_cnt;
 VAR_4->poc[33] = VAR_3->bottom_field_order_cnt;

 FUNC_0(VAR_1);
}
