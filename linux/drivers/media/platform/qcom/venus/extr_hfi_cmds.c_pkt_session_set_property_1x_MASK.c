
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hfi_vpe_color_space_conversion {int csc_limit; int csc_bias; int csc_matrix; } ;
struct hfi_vc1e_perf_cfg_type {int search_range_y_subsampled; int search_range_x_subsampled; } ;
struct hfi_uncompressed_format_select {int format; int buffer_type; } ;
struct TYPE_3__ {int size; int pkt_type; } ;
struct TYPE_4__ {TYPE_1__ hdr; int session_id; } ;
struct hfi_session_set_property_pkt {int* data; int num_properties; TYPE_2__ shdr; } ;
struct hfi_scs_threshold {int threshold_value; } ;
struct hfi_quantization_range {int min_qp; int max_qp; int layer_id; } ;
struct hfi_quantization {int layer_id; int qp_b; int qp_p; int qp_i; } ;
struct hfi_profile_level {int level; int profile; } ;
struct hfi_operations_type {int flip; int rotation; } ;
struct hfi_nal_stream_format_select {int format; } ;
struct hfi_mvc_buffer_layout_descp_type {int ngap; int bright_view_first; int layout_type; } ;
struct hfi_multi_stream {int height; int width; int enable; int buffer_type; } ;
struct hfi_multi_slice_control {int slice_size; int multi_slice; } ;
struct hfi_mpeg4_time_resolution {int time_increment_resolution; } ;
struct hfi_mpeg4_header_extension {int header_extension; } ;
struct hfi_max_num_b_frames {int max_num_b_frames; } ;
struct hfi_ltr_use {int use_constrnt; int ref_ltr; int frames; } ;
struct hfi_ltr_mode {int trust_mode; int ltr_count; int ltr_mode; } ;
struct hfi_ltr_mark {int mark_frame; } ;
struct hfi_intra_refresh {int cir_mbs; int air_ref; int air_mbs; int mode; } ;
struct hfi_intra_period {int bframes; int pframes; } ;
struct hfi_initial_quantization {int qp_b; int qp_p; int qp_i; int init_qp_enable; } ;
struct hfi_idr_period {int idr_period; } ;
struct hfi_hybrid_hierp {int layers; } ;
struct hfi_h264_vui_timing_info {int time_scale; int fixed_framerate; int enable; } ;
struct hfi_h264_entropy_control {int cabac_model; int entropy_mode; } ;
struct hfi_h264_db_control {int slice_beta_offset; int slice_alpha_offset; int mode; } ;
struct hfi_framesize {int width; int height; int buffer_type; } ;
struct hfi_framerate {int framerate; int buffer_type; } ;
struct hfi_enable_picture {int picture_type; } ;
struct hfi_enable {int enable; } ;
struct hfi_display_picture_buffer_count {int enable; int count; } ;
struct hfi_conceal_color {int conceal_color; } ;
struct hfi_buffer_size_actual {int type; int size; } ;
struct hfi_buffer_display_hold_count_actual {int type; int hold_count; } ;
struct hfi_buffer_count_actual {int type; int count_actual; } ;
struct hfi_buffer_alloc_mode {int mode; int type; } ;
struct hfi_bitrate {int layer_id; int bitrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct hfi_session_set_property_pkt *VAR_5,
           void *VAR_6, u32 VAR_7, void *VAR_8)
{
 void *VAR_9;
 int VAR_10 = 0;

 if (!VAR_5 || !VAR_6 || !VAR_8)
  return -VAR_0;

 VAR_9 = &VAR_5->data[1];

 VAR_5->shdr.hdr.size = sizeof(*VAR_5);
 VAR_5->shdr.hdr.pkt_type = VAR_2;
 VAR_5->shdr.session_id = FUNC_0(VAR_6);
 VAR_5->num_properties = 1;
 VAR_5->data[0] = VAR_7;

 switch (VAR_7) {
 case 217: {
  struct hfi_framerate *VAR_11 = VAR_8, *VAR_12 = VAR_9;

  VAR_12->buffer_type = VAR_11->buffer_type;
  VAR_12->framerate = VAR_11->framerate;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_12);
  break;
 }
 case 182: {
  struct hfi_uncompressed_format_select *VAR_13 = VAR_8;
  struct hfi_uncompressed_format_select *VAR_14 = VAR_9;

  VAR_14->buffer_type = VAR_13->buffer_type;
  VAR_14->format = VAR_13->format;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_14);
  break;
 }
 case 192: {
  struct hfi_framesize *VAR_15 = VAR_8, *VAR_16 = VAR_9;

  VAR_16->buffer_type = VAR_15->buffer_type;
  VAR_16->height = VAR_15->height;
  VAR_16->width = VAR_15->width;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_16);
  break;
 }
 case 215: {
  struct hfi_enable *VAR_17 = VAR_8, *VAR_18 = VAR_9;

  VAR_18->enable = VAR_17->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) * 2;
  break;
 }
 case 199: {
  struct hfi_buffer_count_actual *VAR_19 = VAR_8, *VAR_20 = VAR_9;

  VAR_20->count_actual = VAR_19->count_actual;
  VAR_20->type = VAR_19->type;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_20);
  break;
 }
 case 197: {
  struct hfi_buffer_size_actual *VAR_21 = VAR_8, *VAR_22 = VAR_9;

  VAR_22->size = VAR_21->size;
  VAR_22->type = VAR_21->type;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_22);
  break;
 }
 case 198: {
  struct hfi_buffer_display_hold_count_actual *VAR_23 = VAR_8;
  struct hfi_buffer_display_hold_count_actual *VAR_24 = VAR_9;

  VAR_24->hold_count = VAR_23->hold_count;
  VAR_24->type = VAR_23->type;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_24);
  break;
 }
 case 187: {
  struct hfi_nal_stream_format_select *VAR_25 = VAR_8;
  struct hfi_nal_stream_format_select *VAR_26 = VAR_9;

  VAR_26->format = VAR_25->format;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_26);
  break;
 }
 case 169: {
  u32 *VAR_27 = VAR_8;

  switch (*VAR_27) {
  case 221:
  case 220:
   break;
  default:
   VAR_10 = -VAR_0;
   break;
  }

  VAR_5->data[1] = *VAR_27;
  VAR_5->shdr.hdr.size += sizeof(u32) * 2;
  break;
 }
 case 168: {
  struct hfi_enable_picture *VAR_28 = VAR_8, *VAR_29 = VAR_9;

  VAR_29->picture_type = VAR_28->picture_type;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_29);
  break;
 }
 case 170: {
  struct hfi_enable *VAR_30 = VAR_8, *VAR_31 = VAR_9;

  VAR_31->enable = VAR_30->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_31);
  break;
 }
 case 213: {
  struct hfi_enable *VAR_32 = VAR_8;
  struct hfi_enable *VAR_33 = VAR_9;

  VAR_33->enable = VAR_32->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_33);
  break;
 }
 case 174: {
  struct hfi_multi_stream *VAR_34 = VAR_8, *VAR_35 = VAR_9;

  VAR_35->buffer_type = VAR_34->buffer_type;
  VAR_35->enable = VAR_34->enable;
  VAR_35->width = VAR_34->width;
  VAR_35->height = VAR_34->height;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_35);
  break;
 }
 case 178: {
  struct hfi_display_picture_buffer_count *VAR_36 = VAR_8;
  struct hfi_display_picture_buffer_count *VAR_37 = VAR_9;

  VAR_37->count = VAR_36->count;
  VAR_37->enable = VAR_36->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_37);
  break;
 }
 case 193: {
  u32 *VAR_38 = VAR_8;

  switch (*VAR_38) {
  case 244:
  case 243:
  case 242:
   break;
  default:
   VAR_10 = -VAR_0;
   break;
  }

  VAR_5->data[1] = *VAR_38;
  VAR_5->shdr.hdr.size += sizeof(u32) * 2;
  break;
 }
 case 214: {
  struct hfi_enable *VAR_39 = VAR_8, *VAR_40 = VAR_9;

  VAR_40->enable = VAR_39->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_40);
  break;
 }
 case 179: {
  struct hfi_enable *VAR_41 = VAR_8, *VAR_42 = VAR_9;

  VAR_42->enable = VAR_41->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_42);
  break;
 }
 case 166: {
  struct hfi_enable *VAR_43 = VAR_8, *VAR_44 = VAR_9;

  VAR_44->enable = VAR_43->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_44);
  break;
 }
 case 205: {
  struct hfi_enable *VAR_45 = VAR_8, *VAR_46 = VAR_9;

  VAR_46->enable = VAR_45->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_46);
  break;
 }
 case 206:
  VAR_5->shdr.hdr.size += sizeof(u32);
  break;
 case 149:
  break;
 case 151:
  break;
 case 204: {
  struct hfi_bitrate *VAR_47 = VAR_8, *VAR_48 = VAR_9;

  VAR_48->bitrate = VAR_47->bitrate;
  VAR_48->layer_id = VAR_47->layer_id;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_48);
  break;
 }
 case 208: {
  struct hfi_bitrate *VAR_49 = VAR_8, *VAR_50 = VAR_9;

  VAR_50->bitrate = VAR_49->bitrate;
  VAR_50->layer_id = VAR_49->layer_id;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_50);
  break;
 }
 case 185: {
  struct hfi_profile_level *VAR_51 = VAR_8, *VAR_52 = VAR_9;

  VAR_52->level = VAR_51->level;
  VAR_52->profile = VAR_51->profile;
  if (VAR_52->profile <= 0)

   VAR_52->profile = VAR_4;

  if (!VAR_52->level)

   VAR_52->level = 1;

  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_52);
  break;
 }
 case 163: {
  struct hfi_h264_entropy_control *VAR_53 = VAR_8, *VAR_54 = VAR_9;

  VAR_54->entropy_mode = VAR_53->entropy_mode;
  if (VAR_54->entropy_mode == VAR_3)
   VAR_54->cabac_model = VAR_53->cabac_model;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_54);
  break;
 }
 case 144: {
  u32 *VAR_55 = VAR_8;

  switch (*VAR_55) {
  case 134:
  case 136:
  case 135:
  case 133:
  case 132:
   break;
  default:
   VAR_10 = -VAR_0;
   break;
  }

  VAR_5->data[1] = *VAR_55;
  VAR_5->shdr.hdr.size += sizeof(u32) * 2;
  break;
 }
 case 148: {
  struct hfi_mpeg4_time_resolution *VAR_56 = VAR_8, *VAR_57 = VAR_9;

  VAR_57->time_increment_resolution = VAR_56->time_increment_resolution;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_57);
  break;
 }
 case 150: {
  struct hfi_mpeg4_header_extension *VAR_58 = VAR_8, *VAR_59 = VAR_9;

  VAR_59->header_extension = VAR_58->header_extension;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_59);
  break;
 }
 case 164: {
  struct hfi_h264_db_control *VAR_60 = VAR_8, *VAR_61 = VAR_9;

  switch (VAR_60->mode) {
  case 237:
  case 236:
  case 238:
   break;
  default:
   VAR_10 = -VAR_0;
   break;
  }

  VAR_61->mode = VAR_60->mode;
  VAR_61->slice_alpha_offset = VAR_60->slice_alpha_offset;
  VAR_61->slice_beta_offset = VAR_60->slice_beta_offset;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_61);
  break;
 }
 case 143: {
  struct hfi_quantization *VAR_62 = VAR_8, *VAR_63 = VAR_9;

  VAR_63->qp_i = VAR_62->qp_i;
  VAR_63->qp_p = VAR_62->qp_p;
  VAR_63->qp_b = VAR_62->qp_b;
  VAR_63->layer_id = VAR_62->layer_id;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_63);
  break;
 }
 case 142: {
  struct hfi_quantization_range *VAR_64 = VAR_8, *VAR_65 = VAR_9;
  u32 VAR_66, VAR_67;

  VAR_66 = VAR_64->min_qp;
  VAR_67 = VAR_64->max_qp;




  if (VAR_66 > 0xff || VAR_67 > 0xff) {
   VAR_10 = -VAR_1;
   break;
  }





  VAR_65->min_qp = VAR_66 | VAR_66 << 8 | VAR_66 << 16;
  VAR_65->max_qp = VAR_67 | VAR_67 << 8 | VAR_67 << 16;
  VAR_65->layer_id = VAR_64->layer_id;

  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_65);
  break;
 }
 case 140: {
  struct hfi_vc1e_perf_cfg_type *VAR_68 = VAR_8, *VAR_69 = VAR_9;

  FUNC_1(VAR_69->search_range_x_subsampled,
         VAR_68->search_range_x_subsampled,
         sizeof(VAR_69->search_range_x_subsampled));
  FUNC_1(VAR_69->search_range_y_subsampled,
         VAR_68->search_range_y_subsampled,
         sizeof(VAR_69->search_range_y_subsampled));

  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_69);
  break;
 }
 case 152: {
  struct hfi_max_num_b_frames *VAR_70 = VAR_9;
  u32 *VAR_71 = VAR_8;

  VAR_70->max_num_b_frames = *VAR_71;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_70);
  break;
 }
 case 210: {
  struct hfi_intra_period *VAR_72 = VAR_8, *VAR_73 = VAR_9;

  VAR_73->pframes = VAR_72->pframes;
  VAR_73->bframes = VAR_72->bframes;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_73);
  break;
 }
 case 211: {
  struct hfi_idr_period *VAR_74 = VAR_8, *VAR_75 = VAR_9;

  VAR_75->idr_period = VAR_74->idr_period;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_75);
  break;
 }
 case 180: {
  struct hfi_conceal_color *VAR_76 = VAR_9;
  u32 *VAR_77 = VAR_8;

  VAR_76->conceal_color = *VAR_77;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_76);
  break;
 }
 case 201: {
  struct hfi_operations_type *VAR_78 = VAR_8, *VAR_79 = VAR_9;

  switch (VAR_78->rotation) {
  case 128:
  case 129:
  case 131:
  case 130:
   break;
  default:
   VAR_10 = -VAR_0;
   break;
  }

  switch (VAR_78->flip) {
  case 240:
  case 241:
  case 239:
   break;
  default:
   VAR_10 = -VAR_0;
   break;
  }

  VAR_79->rotation = VAR_78->rotation;
  VAR_79->flip = VAR_78->flip;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_79);
  break;
 }
 case 154: {
  struct hfi_intra_refresh *VAR_80 = VAR_8, *VAR_81 = VAR_9;

  switch (VAR_80->mode) {
  case 232:
  case 235:
  case 234:
  case 233:
  case 231:
   break;
  default:
   VAR_10 = -VAR_0;
   break;
  }

  VAR_81->mode = VAR_80->mode;
  VAR_81->air_mbs = VAR_80->air_mbs;
  VAR_81->air_ref = VAR_80->air_ref;
  VAR_81->cir_mbs = VAR_80->cir_mbs;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_81);
  break;
 }
 case 147: {
  struct hfi_multi_slice_control *VAR_82 = VAR_8, *VAR_83 = VAR_9;

  switch (VAR_82->multi_slice) {
  case 224:
  case 225:
  case 226:
  case 227:
   break;
  default:
   VAR_10 = -VAR_0;
   break;
  }

  VAR_83->multi_slice = VAR_82->multi_slice;
  VAR_83->slice_size = VAR_82->slice_size;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_83);
  break;
 }
 case 141: {
  struct hfi_enable *VAR_84 = VAR_8, *VAR_85 = VAR_9;

  VAR_85->enable = VAR_84->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_85);
  break;
 }
 case 159: {
  struct hfi_h264_vui_timing_info *VAR_86 = VAR_8, *VAR_87 = VAR_9;

  VAR_87->enable = VAR_86->enable;
  VAR_87->fixed_framerate = VAR_86->fixed_framerate;
  VAR_87->time_scale = VAR_86->time_scale;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_87);
  break;
 }
 case 202: {
  struct hfi_enable *VAR_88 = VAR_8, *VAR_89 = VAR_9;

  VAR_89->enable = VAR_88->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_89);
  break;
 }
 case 162: {
  struct hfi_enable *VAR_90 = VAR_8, *VAR_91 = VAR_9;

  VAR_91->enable = VAR_90->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_91);
  break;
 }
 case 200: {
  struct hfi_buffer_alloc_mode *VAR_92 = VAR_8, *VAR_93 = VAR_9;

  VAR_93->type = VAR_92->type;
  VAR_93->mode = VAR_92->mode;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_93);
  break;
 }
 case 177: {
  struct hfi_enable *VAR_94 = VAR_8, *VAR_95 = VAR_9;

  VAR_95->enable = VAR_94->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_95);
  break;
 }
 case 160: {
  struct hfi_enable *VAR_96 = VAR_8, *VAR_97 = VAR_9;

  VAR_97->enable = VAR_96->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_97);
  break;
 }
 case 145: {
  struct hfi_enable *VAR_98 = VAR_8, *VAR_99 = VAR_9;

  VAR_99->enable = VAR_98->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_99);
  break;
 }
 case 167: {
  struct hfi_scs_threshold *VAR_100 = VAR_9;
  u32 *VAR_101 = VAR_8;

  VAR_100->threshold_value = *VAR_101;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_100);
  break;
 }
 case 188: {
  struct hfi_mvc_buffer_layout_descp_type *VAR_102 = VAR_8;
  struct hfi_mvc_buffer_layout_descp_type *VAR_103 = VAR_9;

  switch (VAR_102->layout_type) {
  case 222:
  case 223:
   break;
  default:
   VAR_10 = -VAR_0;
   break;
  }

  VAR_103->layout_type = VAR_102->layout_type;
  VAR_103->bright_view_first = VAR_102->bright_view_first;
  VAR_103->ngap = VAR_102->ngap;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_103);
  break;
 }
 case 153: {
  struct hfi_ltr_mode *VAR_104 = VAR_8, *VAR_105 = VAR_9;

  switch (VAR_104->ltr_mode) {
  case 230:
  case 229:
  case 228:
   break;
  default:
   VAR_10 = -VAR_0;
   break;
  }

  VAR_105->ltr_mode = VAR_104->ltr_mode;
  VAR_105->ltr_count = VAR_104->ltr_count;
  VAR_105->trust_mode = VAR_104->trust_mode;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_105);
  break;
 }
 case 203: {
  struct hfi_ltr_use *VAR_106 = VAR_8, *VAR_107 = VAR_9;

  VAR_107->frames = VAR_106->frames;
  VAR_107->ref_ltr = VAR_106->ref_ltr;
  VAR_107->use_constrnt = VAR_106->use_constrnt;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_107);
  break;
 }
 case 209: {
  struct hfi_ltr_mark *VAR_108 = VAR_8, *VAR_109 = VAR_9;

  VAR_109->mark_frame = VAR_108->mark_frame;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_109);
  break;
 }
 case 156: {
  u32 *VAR_110 = VAR_8;

  VAR_5->data[1] = *VAR_110;
  VAR_5->shdr.hdr.size += sizeof(u32) * 2;
  break;
 }
 case 212: {
  u32 *VAR_111 = VAR_8;

  VAR_5->data[1] = *VAR_111;
  VAR_5->shdr.hdr.size += sizeof(u32) * 2;
  break;
 }
 case 165: {
  struct hfi_enable *VAR_112 = VAR_8, *VAR_113 = VAR_9;

  VAR_113->enable = VAR_112->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_113);
  break;
 }
 case 155: {
  struct hfi_initial_quantization *VAR_114 = VAR_8, *VAR_115 = VAR_9;

  VAR_115->init_qp_enable = VAR_114->init_qp_enable;
  VAR_115->qp_i = VAR_114->qp_i;
  VAR_115->qp_p = VAR_114->qp_p;
  VAR_115->qp_b = VAR_114->qp_b;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_115);
  break;
 }
 case 138: {
  struct hfi_vpe_color_space_conversion *VAR_116 = VAR_8;
  struct hfi_vpe_color_space_conversion *VAR_117 = VAR_9;

  FUNC_1(VAR_117->csc_matrix, VAR_116->csc_matrix,
         sizeof(VAR_117->csc_matrix));
  FUNC_1(VAR_117->csc_bias, VAR_116->csc_bias, sizeof(VAR_117->csc_bias));
  FUNC_1(VAR_117->csc_limit, VAR_116->csc_limit, sizeof(VAR_117->csc_limit));
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_117);
  break;
 }
 case 139: {
  struct hfi_enable *VAR_118 = VAR_8, *VAR_119 = VAR_9;

  VAR_119->enable = VAR_118->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_119);
  break;
 }
 case 161: {
  struct hfi_enable *VAR_120 = VAR_8, *VAR_121 = VAR_9;

  VAR_121->enable = VAR_120->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_121);
  break;
 }
 case 207: {
  u32 *VAR_122 = VAR_8;

  VAR_5->data[1] = *VAR_122;
  VAR_5->shdr.hdr.size += sizeof(u32) * 2;
  break;
 }
 case 158: {
  u32 *VAR_123 = VAR_8;

  VAR_5->data[1] = *VAR_123;
  VAR_5->shdr.hdr.size += sizeof(u32) * 2;
  break;
 }
 case 172: {
  struct hfi_enable *VAR_124 = VAR_8, *VAR_125 = VAR_9;

  VAR_125->enable = VAR_124->enable;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_125);
  break;
 }
 case 157: {
  struct hfi_hybrid_hierp *VAR_126 = VAR_8, *VAR_127 = VAR_9;

  VAR_127->layers = VAR_126->layers;
  VAR_5->shdr.hdr.size += sizeof(u32) + sizeof(*VAR_127);
  break;
 }


 case 218:
 case 216:
 case 219:
 case 137:
 case 181:
 case 191:
 case 195:
 case 183:
 case 184:
 case 196:
 case 186:
 case 189:
 case 190:
 case 194:
 case 173:
 case 175:
 case 171:
 case 176:
 case 146:
 default:
  return -VAR_0;
 }

 return VAR_10;
}
