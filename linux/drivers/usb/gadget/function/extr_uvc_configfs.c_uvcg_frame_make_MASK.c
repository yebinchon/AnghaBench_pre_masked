
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct config_item {int dummy; } ;
struct TYPE_7__ {int b_frame_index; int w_width; int w_height; int dw_min_bit_rate; int dw_max_bit_rate; int dw_max_video_frame_buffer_size; int dw_default_frame_interval; int b_descriptor_subtype; int b_descriptor_type; } ;
struct uvcg_frame {struct config_item item; scalar_t__ fmt_type; TYPE_3__ frame; } ;
struct uvcg_format {scalar_t__ type; int num_frames; } ;
struct f_uvc_opts {int lock; } ;
struct TYPE_8__ {TYPE_2__* ci_parent; } ;
struct config_group {TYPE_4__ cg_item; } ;
struct TYPE_6__ {TYPE_1__* ci_parent; } ;
struct TYPE_5__ {struct config_item* ci_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct config_item* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct config_item*,char const*,int *) ;
 int FUNC_2 (struct uvcg_frame*) ;
 struct uvcg_frame* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct f_uvc_opts* FUNC_6 (struct config_item*) ;
 struct uvcg_format* FUNC_7 (TYPE_4__*) ;
 int VAR_8 ;

__attribute__((used)) static struct config_item *FUNC_8(struct config_group *VAR_9,
        const char *VAR_10)
{
 struct uvcg_frame *VAR_11;
 struct uvcg_format *VAR_12;
 struct f_uvc_opts *VAR_13;
 struct config_item *VAR_14;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_11->frame.b_descriptor_type = VAR_3;
 VAR_11->frame.b_frame_index = 1;
 VAR_11->frame.w_width = 640;
 VAR_11->frame.w_height = 360;
 VAR_11->frame.dw_min_bit_rate = 18432000;
 VAR_11->frame.dw_max_bit_rate = 55296000;
 VAR_11->frame.dw_max_video_frame_buffer_size = 460800;
 VAR_11->frame.dw_default_frame_interval = 666666;

 VAR_14 = VAR_9->cg_item.ci_parent->ci_parent->ci_parent;
 VAR_13 = FUNC_6(VAR_14);

 FUNC_4(&VAR_13->lock);
 VAR_12 = FUNC_7(&VAR_9->cg_item);
 if (VAR_12->type == VAR_5) {
  VAR_11->frame.b_descriptor_subtype = VAR_7;
  VAR_11->fmt_type = VAR_5;
 } else if (VAR_12->type == VAR_4) {
  VAR_11->frame.b_descriptor_subtype = VAR_6;
  VAR_11->fmt_type = VAR_4;
 } else {
  FUNC_5(&VAR_13->lock);
  FUNC_2(VAR_11);
  return FUNC_0(-VAR_0);
 }
 ++VAR_12->num_frames;
 FUNC_5(&VAR_13->lock);

 FUNC_1(&VAR_11->item, VAR_10, &VAR_8);

 return &VAR_11->item;
}
