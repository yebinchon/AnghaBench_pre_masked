
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef unsigned int u32 ;
typedef int u16 ;
struct v4l2_ctrl_vp8_frame_header {int dummy; } ;
struct v4l2_ctrl_type_ops {int (* init ) (struct v4l2_ctrl*,unsigned int,TYPE_2__) ;} ;
struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_mpeg2_slice_params {int dummy; } ;
struct v4l2_ctrl_mpeg2_quantization {int dummy; } ;
struct v4l2_ctrl_handler {int lock; int ctrls; scalar_t__ error; } ;
struct v4l2_ctrl_h264_sps {int dummy; } ;
struct v4l2_ctrl_h264_slice_params {int dummy; } ;
struct v4l2_ctrl_h264_scaling_matrix {int dummy; } ;
struct v4l2_ctrl_h264_pps {int dummy; } ;
struct v4l2_ctrl_h264_decode_params {int dummy; } ;
struct v4l2_ctrl_fwht_params {int dummy; } ;
struct TYPE_5__ {void** p; } ;
struct TYPE_4__ {void* val; } ;
struct v4l2_ctrl {unsigned int id; char const* name; int type; unsigned int flags; int is_string; int is_ptr; int is_int; int is_array; unsigned int elems; unsigned int nr_of_dims; unsigned int elem_size; char const* const* qmenu; void* const* qmenu_int; int node; TYPE_2__ p_new; struct v4l2_ctrl_type_ops const* type_ops; TYPE_2__ p_cur; TYPE_1__ cur; void* val; void* priv; int dims; void* default_value; int step; void* maximum; void* minimum; struct v4l2_ctrl_ops const* ops; struct v4l2_ctrl_handler* handler; int ev_subs; } ;
typedef void* s64 ;
typedef int s32 ;
typedef enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;
typedef int dims ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;







 int VAR_12 ;
 int VAR_13 ;







 int FUNC_1 (int,void*,void*,int ,void*) ;
 scalar_t__ FUNC_2 (struct v4l2_ctrl_handler*,struct v4l2_ctrl*,int *,int,int) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_4 (struct v4l2_ctrl*) ;
 struct v4l2_ctrl* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,unsigned int const*,unsigned int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct v4l2_ctrl_type_ops const VAR_14 ;
 int FUNC_10 (struct v4l2_ctrl*,unsigned int,TYPE_2__) ;
 int FUNC_11 (struct v4l2_ctrl*,unsigned int,TYPE_2__) ;

__attribute__((used)) static struct v4l2_ctrl *FUNC_12(struct v4l2_ctrl_handler *VAR_15,
   const struct v4l2_ctrl_ops *VAR_16,
   const struct v4l2_ctrl_type_ops *VAR_17,
   u32 VAR_18, const char *VAR_19, enum v4l2_ctrl_type VAR_20,
   s64 VAR_21, s64 VAR_22, u64 VAR_23, s64 VAR_24,
   const u32 VAR_25[VAR_9], u32 VAR_26,
   u32 VAR_27, const char * const *VAR_28,
   const s64 *VAR_29, void *VAR_30)
{
 struct v4l2_ctrl *VAR_31;
 unsigned VAR_32;
 unsigned VAR_33 = 0;
 unsigned VAR_34 = 1;
 bool VAR_35;
 unsigned VAR_36;
 unsigned VAR_37;
 void *VAR_38;
 int VAR_39;

 if (VAR_15->error)
  return ((void*)0);

 while (VAR_25 && VAR_25[VAR_33]) {
  VAR_34 *= VAR_25[VAR_33];
  VAR_33++;
  if (VAR_33 == VAR_9)
   break;
 }
 VAR_35 = VAR_33 > 0;


 switch ((u32)VAR_20) {
 case 135:
  VAR_26 = sizeof(s64);
  break;
 case 132:
  VAR_26 = VAR_22 + 1;
  break;
 case 129:
  VAR_26 = sizeof(u8);
  break;
 case 131:
  VAR_26 = sizeof(u16);
  break;
 case 130:
  VAR_26 = sizeof(u32);
  break;
 case 133:
  VAR_26 = sizeof(struct v4l2_ctrl_mpeg2_slice_params);
  break;
 case 134:
  VAR_26 = sizeof(struct v4l2_ctrl_mpeg2_quantization);
  break;
 case 141:
  VAR_26 = sizeof(struct v4l2_ctrl_fwht_params);
  break;
 case 136:
  VAR_26 = sizeof(struct v4l2_ctrl_h264_sps);
  break;
 case 139:
  VAR_26 = sizeof(struct v4l2_ctrl_h264_pps);
  break;
 case 138:
  VAR_26 = sizeof(struct v4l2_ctrl_h264_scaling_matrix);
  break;
 case 137:
  VAR_26 = sizeof(struct v4l2_ctrl_h264_slice_params);
  break;
 case 140:
  VAR_26 = sizeof(struct v4l2_ctrl_h264_decode_params);
  break;
 case 128:
  VAR_26 = sizeof(struct v4l2_ctrl_vp8_frame_header);
  break;
 default:
  if (VAR_20 < VAR_5)
   VAR_26 = sizeof(s32);
  break;
 }
 VAR_36 = VAR_26 * VAR_34;


 if (VAR_18 == 0 || VAR_19 == ((void*)0) || !VAR_26 ||
     VAR_18 >= VAR_4 ||
     (VAR_20 == VAR_13 && VAR_28 == ((void*)0)) ||
     (VAR_20 == VAR_12 && VAR_29 == ((void*)0))) {
  FUNC_3(VAR_15, -VAR_2);
  return ((void*)0);
 }
 VAR_39 = FUNC_1(VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);
 if (VAR_39) {
  FUNC_3(VAR_15, VAR_39);
  return ((void*)0);
 }
 if (VAR_35 &&
     (VAR_20 == VAR_10 ||
      VAR_20 == VAR_11)) {
  FUNC_3(VAR_15, -VAR_0);
  return ((void*)0);
 }

 VAR_32 = 0;
 if (VAR_20 == VAR_10)
  VAR_27 |= VAR_8 |
   VAR_6;
 else if (VAR_20 == VAR_11)
  VAR_27 |= VAR_7;
 else if (VAR_20 == 135 ||
   VAR_20 == 132 ||
   VAR_20 >= VAR_5 ||
   VAR_35)
  VAR_32 += 2 * VAR_36;

 VAR_31 = FUNC_5(sizeof(*VAR_31) + VAR_32, VAR_3);
 if (VAR_31 == ((void*)0)) {
  FUNC_3(VAR_15, -VAR_1);
  return ((void*)0);
 }

 FUNC_0(&VAR_31->node);
 FUNC_0(&VAR_31->ev_subs);
 VAR_31->handler = VAR_15;
 VAR_31->ops = VAR_16;
 VAR_31->type_ops = VAR_17 ? VAR_17 : &VAR_14;
 VAR_31->id = VAR_18;
 VAR_31->name = VAR_19;
 VAR_31->type = VAR_20;
 VAR_31->flags = VAR_27;
 VAR_31->minimum = VAR_21;
 VAR_31->maximum = VAR_22;
 VAR_31->step = VAR_23;
 VAR_31->default_value = VAR_24;
 VAR_31->is_string = !VAR_35 && VAR_20 == 132;
 VAR_31->is_ptr = VAR_35 || VAR_20 >= VAR_5 || VAR_31->is_string;
 VAR_31->is_int = !VAR_31->is_ptr && VAR_20 != 135;
 VAR_31->is_array = VAR_35;
 VAR_31->elems = VAR_34;
 VAR_31->nr_of_dims = VAR_33;
 if (VAR_33)
  FUNC_7(VAR_31->dims, VAR_25, VAR_33 * sizeof(VAR_25[0]));
 VAR_31->elem_size = VAR_26;
 if (VAR_20 == VAR_13)
  VAR_31->qmenu = VAR_28;
 else if (VAR_20 == VAR_12)
  VAR_31->qmenu_int = VAR_29;
 VAR_31->priv = VAR_30;
 VAR_31->cur.val = VAR_31->val = VAR_24;
 VAR_38 = &VAR_31[1];

 if (!VAR_31->is_int) {
  VAR_31->p_new.p = VAR_38;
  VAR_31->p_cur.p = VAR_38 + VAR_36;
 } else {
  VAR_31->p_new.p = &VAR_31->val;
  VAR_31->p_cur.p = &VAR_31->cur.val;
 }
 for (VAR_37 = 0; VAR_37 < VAR_34; VAR_37++) {
  VAR_31->type_ops->init(VAR_31, VAR_37, VAR_31->p_cur);
  VAR_31->type_ops->init(VAR_31, VAR_37, VAR_31->p_new);
 }

 if (FUNC_2(VAR_15, VAR_31, ((void*)0), 0, 0)) {
  FUNC_4(VAR_31);
  return ((void*)0);
 }
 FUNC_8(VAR_15->lock);
 FUNC_6(&VAR_31->node, &VAR_15->ctrls);
 FUNC_9(VAR_15->lock);
 return VAR_31;
}
