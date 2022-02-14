
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct v4l2_vp8_entropy_header {scalar_t__**** coeff_probs; scalar_t__** mv_probs; scalar_t__* uv_mode_probs; scalar_t__* y_mode_probs; } ;
struct TYPE_6__ {scalar_t__* segment_probs; } ;
struct v4l2_ctrl_vp8_frame_header {TYPE_3__ segment_header; scalar_t__ prob_gf; scalar_t__ prob_last; scalar_t__ prob_intra; scalar_t__ prob_skip_false; struct v4l2_vp8_entropy_header entropy_header; } ;
struct TYPE_4__ {scalar_t__* cpu; } ;
struct TYPE_5__ {TYPE_1__ prob_tbl; } ;
struct hantro_ctx {TYPE_2__ vp8_dec; } ;



void FUNC_0(struct hantro_ctx *VAR_0,
       const struct v4l2_ctrl_vp8_frame_header *VAR_1)
{
 const struct v4l2_vp8_entropy_header *VAR_2 = &VAR_1->entropy_header;
 u32 VAR_3, VAR_4, VAR_5;
 u8 *VAR_6;


 VAR_6 = VAR_0->vp8_dec.prob_tbl.cpu;

 VAR_6[0] = VAR_1->prob_skip_false;
 VAR_6[1] = VAR_1->prob_intra;
 VAR_6[2] = VAR_1->prob_last;
 VAR_6[3] = VAR_1->prob_gf;
 VAR_6[4] = VAR_1->segment_header.segment_probs[0];
 VAR_6[5] = VAR_1->segment_header.segment_probs[1];
 VAR_6[6] = VAR_1->segment_header.segment_probs[2];
 VAR_6[7] = 0;

 VAR_6 += 8;
 VAR_6[0] = VAR_2->y_mode_probs[0];
 VAR_6[1] = VAR_2->y_mode_probs[1];
 VAR_6[2] = VAR_2->y_mode_probs[2];
 VAR_6[3] = VAR_2->y_mode_probs[3];
 VAR_6[4] = VAR_2->uv_mode_probs[0];
 VAR_6[5] = VAR_2->uv_mode_probs[1];
 VAR_6[6] = VAR_2->uv_mode_probs[2];
 VAR_6[7] = 0;


 VAR_6 += 8;
 VAR_6[0] = VAR_2->mv_probs[0][0];
 VAR_6[1] = VAR_2->mv_probs[1][0];
 VAR_6[2] = VAR_2->mv_probs[0][1];
 VAR_6[3] = VAR_2->mv_probs[1][1];
 VAR_6[4] = VAR_2->mv_probs[0][8 + 9];
 VAR_6[5] = VAR_2->mv_probs[0][9 + 9];
 VAR_6[6] = VAR_2->mv_probs[1][8 + 9];
 VAR_6[7] = VAR_2->mv_probs[1][9 + 9];
 VAR_6 += 8;
 for (VAR_3 = 0; VAR_3 < 2; ++VAR_3) {
  for (VAR_4 = 0; VAR_4 < 8; VAR_4 += 4) {
   VAR_6[0] = VAR_2->mv_probs[VAR_3][VAR_4 + 9 + 0];
   VAR_6[1] = VAR_2->mv_probs[VAR_3][VAR_4 + 9 + 1];
   VAR_6[2] = VAR_2->mv_probs[VAR_3][VAR_4 + 9 + 2];
   VAR_6[3] = VAR_2->mv_probs[VAR_3][VAR_4 + 9 + 3];
   VAR_6 += 4;
  }
 }
 for (VAR_3 = 0; VAR_3 < 2; ++VAR_3) {
  VAR_6[0] = VAR_2->mv_probs[VAR_3][0 + 2];
  VAR_6[1] = VAR_2->mv_probs[VAR_3][1 + 2];
  VAR_6[2] = VAR_2->mv_probs[VAR_3][2 + 2];
  VAR_6[3] = VAR_2->mv_probs[VAR_3][3 + 2];
  VAR_6[4] = VAR_2->mv_probs[VAR_3][4 + 2];
  VAR_6[5] = VAR_2->mv_probs[VAR_3][5 + 2];
  VAR_6[6] = VAR_2->mv_probs[VAR_3][6 + 2];
  VAR_6[7] = 0;
  VAR_6 += 8;
 }


 VAR_6 = VAR_0->vp8_dec.prob_tbl.cpu;
 VAR_6 += (8 * 7);
 for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
  for (VAR_4 = 0; VAR_4 < 8; ++VAR_4) {
   for (VAR_5 = 0; VAR_5 < 3; ++VAR_5) {
    VAR_6[0] = VAR_2->coeff_probs[VAR_3][VAR_4][VAR_5][0];
    VAR_6[1] = VAR_2->coeff_probs[VAR_3][VAR_4][VAR_5][1];
    VAR_6[2] = VAR_2->coeff_probs[VAR_3][VAR_4][VAR_5][2];
    VAR_6[3] = VAR_2->coeff_probs[VAR_3][VAR_4][VAR_5][3];
    VAR_6 += 4;
   }
  }
 }


 VAR_6 = VAR_0->vp8_dec.prob_tbl.cpu;
 VAR_6 += (8 * 55);
 for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
  for (VAR_4 = 0; VAR_4 < 8; ++VAR_4) {
   for (VAR_5 = 0; VAR_5 < 3; ++VAR_5) {
    VAR_6[0] = VAR_2->coeff_probs[VAR_3][VAR_4][VAR_5][4];
    VAR_6[1] = VAR_2->coeff_probs[VAR_3][VAR_4][VAR_5][5];
    VAR_6[2] = VAR_2->coeff_probs[VAR_3][VAR_4][VAR_5][6];
    VAR_6[3] = VAR_2->coeff_probs[VAR_3][VAR_4][VAR_5][7];
    VAR_6[4] = VAR_2->coeff_probs[VAR_3][VAR_4][VAR_5][8];
    VAR_6[5] = VAR_2->coeff_probs[VAR_3][VAR_4][VAR_5][9];
    VAR_6[6] = VAR_2->coeff_probs[VAR_3][VAR_4][VAR_5][10];
    VAR_6[7] = 0;
    VAR_6 += 8;
   }
  }
 }
}
