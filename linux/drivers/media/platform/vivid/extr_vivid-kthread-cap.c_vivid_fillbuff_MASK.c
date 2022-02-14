
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_74__ TYPE_9__ ;
typedef struct TYPE_73__ TYPE_8__ ;
typedef struct TYPE_72__ TYPE_7__ ;
typedef struct TYPE_71__ TYPE_6__ ;
typedef struct TYPE_70__ TYPE_5__ ;
typedef struct TYPE_69__ TYPE_4__ ;
typedef struct TYPE_68__ TYPE_3__ ;
typedef struct TYPE_67__ TYPE_37__ ;
typedef struct TYPE_66__ TYPE_36__ ;
typedef struct TYPE_65__ TYPE_35__ ;
typedef struct TYPE_64__ TYPE_34__ ;
typedef struct TYPE_63__ TYPE_33__ ;
typedef struct TYPE_62__ TYPE_32__ ;
typedef struct TYPE_61__ TYPE_31__ ;
typedef struct TYPE_60__ TYPE_30__ ;
typedef struct TYPE_59__ TYPE_2__ ;
typedef struct TYPE_58__ TYPE_29__ ;
typedef struct TYPE_57__ TYPE_28__ ;
typedef struct TYPE_56__ TYPE_27__ ;
typedef struct TYPE_55__ TYPE_26__ ;
typedef struct TYPE_54__ TYPE_25__ ;
typedef struct TYPE_53__ TYPE_24__ ;
typedef struct TYPE_52__ TYPE_23__ ;
typedef struct TYPE_51__ TYPE_22__ ;
typedef struct TYPE_50__ TYPE_21__ ;
typedef struct TYPE_49__ TYPE_20__ ;
typedef struct TYPE_48__ TYPE_1__ ;
typedef struct TYPE_47__ TYPE_19__ ;
typedef struct TYPE_46__ TYPE_18__ ;
typedef struct TYPE_45__ TYPE_17__ ;
typedef struct TYPE_44__ TYPE_16__ ;
typedef struct TYPE_43__ TYPE_15__ ;
typedef struct TYPE_42__ TYPE_14__ ;
typedef struct TYPE_41__ TYPE_13__ ;
typedef struct TYPE_40__ TYPE_12__ ;
typedef struct TYPE_39__ TYPE_11__ ;
typedef struct TYPE_38__ TYPE_10__ ;


typedef int u8 ;
struct TYPE_67__ {int lock; } ;
struct TYPE_51__ {int lock; } ;
struct TYPE_45__ {int lock; } ;
struct TYPE_69__ {int width; int height; } ;
struct tpg_data {int buf_height; int bytesperline; } ;
struct vivid_dev {scalar_t__ field_cap; int* std_cap; size_t input; int vid_cap_seq_count; int* must_blank; unsigned int ms_vid_cap; int osd_mode; char* osd; scalar_t__ osd_jiffies; scalar_t__ button_pressed; TYPE_37__ ctrl_hdl_user_gen; TYPE_36__* int_menu; TYPE_34__* string; TYPE_32__* menu; TYPE_30__* boolean; TYPE_28__* int32; TYPE_26__* bitmask; TYPE_24__* int64; TYPE_22__ ctrl_hdl_user_aud; TYPE_21__* mute; TYPE_19__* volume; TYPE_17__ ctrl_hdl_user_vid; TYPE_16__* alpha; TYPE_14__* autogain; TYPE_12__* hue; TYPE_10__* saturation; TYPE_8__* contrast; TYPE_6__* brightness; int gain; TYPE_4__ src_rect; scalar_t__ jiffies_vid_cap; TYPE_1__* fmt_cap; int * dv_timings_signal_mode; int * std_signal_mode; scalar_t__ can_loop_video; scalar_t__ loop_video; struct tpg_data tpg; } ;
struct TYPE_59__ {size_t index; } ;
struct TYPE_68__ {int sequence; scalar_t__ field; TYPE_2__ vb2_buf; } ;
struct vivid_buffer {TYPE_3__ vb; } ;
typedef int str ;
typedef int s32 ;
struct TYPE_74__ {int val; } ;
struct TYPE_72__ {int val; } ;
struct TYPE_73__ {TYPE_7__ cur; } ;
struct TYPE_70__ {int val; } ;
struct TYPE_71__ {TYPE_5__ cur; } ;
struct TYPE_65__ {size_t val; } ;
struct TYPE_66__ {TYPE_35__ cur; int * qmenu_int; } ;
struct TYPE_63__ {char* p_char; } ;
struct TYPE_64__ {TYPE_33__ p_cur; } ;
struct TYPE_61__ {size_t val; } ;
struct TYPE_62__ {char** qmenu; TYPE_31__ cur; } ;
struct TYPE_58__ {int val; } ;
struct TYPE_60__ {TYPE_29__ cur; } ;
struct TYPE_56__ {int val; } ;
struct TYPE_57__ {TYPE_27__ cur; } ;
struct TYPE_54__ {int val; } ;
struct TYPE_55__ {TYPE_25__ cur; } ;
struct TYPE_52__ {int * p_s64; } ;
struct TYPE_53__ {TYPE_23__ p_cur; } ;
struct TYPE_49__ {int val; } ;
struct TYPE_50__ {TYPE_20__ cur; } ;
struct TYPE_48__ {int* data_offset; } ;
struct TYPE_46__ {int val; } ;
struct TYPE_47__ {TYPE_18__ cur; } ;
struct TYPE_43__ {int val; } ;
struct TYPE_44__ {TYPE_15__ cur; } ;
struct TYPE_41__ {int val; } ;
struct TYPE_42__ {TYPE_13__ cur; } ;
struct TYPE_39__ {int val; } ;
struct TYPE_40__ {TYPE_11__ cur; } ;
struct TYPE_38__ {TYPE_9__ cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (void*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (struct tpg_data*,struct vivid_buffer*,unsigned int,int ,int ) ;
 int FUNC_7 (char*,int,char*,...) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct tpg_data*,int ***,unsigned int,void*) ;
 int FUNC_10 (struct tpg_data*,int ,unsigned int,void*) ;
 unsigned int FUNC_11 (struct tpg_data*) ;
 unsigned int FUNC_12 (struct tpg_data*) ;
 int FUNC_13 (struct tpg_data*,int ***,unsigned int,int,char*) ;
 int FUNC_14 (struct tpg_data*,scalar_t__,int) ;
 int FUNC_15 (struct tpg_data*,int) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct vivid_dev*,unsigned int,void*,struct vivid_buffer*) ;
 int FUNC_18 (struct vivid_dev*) ;
 scalar_t__ FUNC_19 (struct vivid_dev*) ;
 int FUNC_20 (struct vivid_dev*) ;
 scalar_t__ FUNC_21 (struct vivid_dev*) ;
 int FUNC_22 (struct vivid_dev*) ;

__attribute__((used)) static void FUNC_23(struct vivid_dev *VAR_7, struct vivid_buffer *VAR_8)
{
 struct tpg_data *VAR_9 = &VAR_7->tpg;
 unsigned VAR_10 = FUNC_0(VAR_7->field_cap) ? 2 : 1;
 unsigned VAR_11 = 16 / VAR_10;
 bool VAR_12 = FUNC_20(VAR_7);
 bool VAR_13 = VAR_12 && (VAR_7->std_cap[VAR_7->input] & VAR_5);
 unsigned VAR_14;
 int VAR_15 = 1;
 u8 *VAR_16[VAR_1][2];
 unsigned VAR_17;
 char VAR_18[100];
 s32 VAR_19;
 bool VAR_20 = 0;

 if (VAR_7->loop_video && VAR_7->can_loop_video &&
  ((FUNC_21(VAR_7) &&
  !FUNC_1(VAR_7->std_signal_mode[VAR_7->input])) ||
  (FUNC_19(VAR_7) &&
  !FUNC_1(VAR_7->dv_timings_signal_mode[VAR_7->input]))))
  VAR_20 = 1;

 VAR_8->vb.sequence = VAR_7->vid_cap_seq_count;
 if (VAR_7->field_cap == VAR_2) {






  VAR_8->vb.field = ((VAR_7->vid_cap_seq_count & 1) ^ VAR_13) ?
   VAR_3 : VAR_4;




  VAR_8->vb.sequence /= 2;
 } else {
  VAR_8->vb.field = VAR_7->field_cap;
 }
 FUNC_14(VAR_9, VAR_8->vb.field,
      VAR_7->field_cap == VAR_2);
 FUNC_15(VAR_9, VAR_7->must_blank[VAR_8->vb.vb2_buf.index]);

 FUNC_22(VAR_7);

 for (VAR_14 = 0; VAR_14 < FUNC_12(VAR_9); VAR_14++) {
  void *VAR_21 = FUNC_6(VAR_9, VAR_8, VAR_14,
      VAR_9->bytesperline, VAR_9->buf_height);






  if (VAR_14 < FUNC_11(VAR_9) && VAR_7->fmt_cap->data_offset[VAR_14]) {
   FUNC_3(VAR_21, VAR_7->fmt_cap->data_offset[VAR_14] & 0xff,
          VAR_7->fmt_cap->data_offset[VAR_14]);
   VAR_21 += VAR_7->fmt_cap->data_offset[VAR_14];
  }
  FUNC_9(VAR_9, VAR_16, VAR_14, VAR_21);
  if (!VAR_20 || FUNC_17(VAR_7, VAR_14, VAR_21, VAR_8))
   FUNC_10(VAR_9, FUNC_18(VAR_7),
     VAR_14, VAR_21);
 }
 VAR_7->must_blank[VAR_8->vb.vb2_buf.index] = 0;


 if (VAR_7->field_cap != VAR_2 ||
   (VAR_7->vid_cap_seq_count & 1) == 0)
  VAR_7->ms_vid_cap =
   FUNC_2(VAR_6 - VAR_7->jiffies_vid_cap);

 VAR_17 = VAR_7->ms_vid_cap;
 if (VAR_7->osd_mode <= 1) {
  FUNC_7(VAR_18, sizeof(VAR_18), " %02d:%02d:%02d:%03d %u%s",
    (VAR_17 / (60 * 60 * 1000)) % 24,
    (VAR_17 / (60 * 1000)) % 60,
    (VAR_17 / 1000) % 60,
    VAR_17 % 1000,
    VAR_8->vb.sequence,
    (VAR_7->field_cap == VAR_2) ?
     (VAR_8->vb.field == VAR_4 ?
      " top" : " bottom") : "");
  FUNC_13(VAR_9, VAR_16, VAR_15++ * VAR_11, 16, VAR_18);
 }
 if (VAR_7->osd_mode == 0) {
  FUNC_7(VAR_18, sizeof(VAR_18), " %dx%d, input %d ",
    VAR_7->src_rect.width, VAR_7->src_rect.height, VAR_7->input);
  FUNC_13(VAR_9, VAR_16, VAR_15++ * VAR_11, 16, VAR_18);

  VAR_19 = FUNC_16(VAR_7->gain);
  FUNC_4(VAR_7->ctrl_hdl_user_vid.lock);
  FUNC_7(VAR_18, sizeof(VAR_18),
   " brightness %3d, contrast %3d, saturation %3d, hue %d ",
   VAR_7->brightness->cur.val,
   VAR_7->contrast->cur.val,
   VAR_7->saturation->cur.val,
   VAR_7->hue->cur.val);
  FUNC_13(VAR_9, VAR_16, VAR_15++ * VAR_11, 16, VAR_18);
  FUNC_7(VAR_18, sizeof(VAR_18),
   " autogain %d, gain %3d, alpha 0x%02x ",
   VAR_7->autogain->cur.val, VAR_19, VAR_7->alpha->cur.val);
  FUNC_5(VAR_7->ctrl_hdl_user_vid.lock);
  FUNC_13(VAR_9, VAR_16, VAR_15++ * VAR_11, 16, VAR_18);
  FUNC_4(VAR_7->ctrl_hdl_user_aud.lock);
  FUNC_7(VAR_18, sizeof(VAR_18),
   " volume %3d, mute %d ",
   VAR_7->volume->cur.val, VAR_7->mute->cur.val);
  FUNC_5(VAR_7->ctrl_hdl_user_aud.lock);
  FUNC_13(VAR_9, VAR_16, VAR_15++ * VAR_11, 16, VAR_18);
  FUNC_4(VAR_7->ctrl_hdl_user_gen.lock);
  FUNC_7(VAR_18, sizeof(VAR_18), " int32 %d, int64 %lld, bitmask %08x ",
   VAR_7->int32->cur.val,
   *VAR_7->int64->p_cur.p_s64,
   VAR_7->bitmask->cur.val);
  FUNC_13(VAR_9, VAR_16, VAR_15++ * VAR_11, 16, VAR_18);
  FUNC_7(VAR_18, sizeof(VAR_18), " boolean %d, menu %s, string \"%s\" ",
   VAR_7->boolean->cur.val,
   VAR_7->menu->qmenu[VAR_7->menu->cur.val],
   VAR_7->string->p_cur.p_char);
  FUNC_13(VAR_9, VAR_16, VAR_15++ * VAR_11, 16, VAR_18);
  FUNC_7(VAR_18, sizeof(VAR_18), " integer_menu %lld, value %d ",
   VAR_7->int_menu->qmenu_int[VAR_7->int_menu->cur.val],
   VAR_7->int_menu->cur.val);
  FUNC_5(VAR_7->ctrl_hdl_user_gen.lock);
  FUNC_13(VAR_9, VAR_16, VAR_15++ * VAR_11, 16, VAR_18);
  if (VAR_7->button_pressed) {
   VAR_7->button_pressed--;
   FUNC_7(VAR_18, sizeof(VAR_18), " button pressed!");
   FUNC_13(VAR_9, VAR_16, VAR_15++ * VAR_11, 16, VAR_18);
  }
  if (VAR_7->osd[0]) {
   if (FUNC_19(VAR_7)) {
    FUNC_7(VAR_18, sizeof(VAR_18),
      " OSD \"%s\"", VAR_7->osd);
    FUNC_13(VAR_9, VAR_16, VAR_15++ * VAR_11,
          16, VAR_18);
   }
   if (VAR_7->osd_jiffies &&
       FUNC_8(VAR_7->osd_jiffies + 5 * VAR_0)) {
    VAR_7->osd[0] = 0;
    VAR_7->osd_jiffies = 0;
   }
  }
 }
}
