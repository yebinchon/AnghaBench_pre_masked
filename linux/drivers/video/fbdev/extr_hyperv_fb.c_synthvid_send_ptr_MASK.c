
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct synthvid_pointer_shape {int dummy; } ;
struct synthvid_pointer_position {int dummy; } ;
struct synthvid_msg_hdr {int dummy; } ;
struct TYPE_6__ {int is_argb; int width; int height; int* data; scalar_t__ hot_y; scalar_t__ hot_x; int part_idx; } ;
struct TYPE_5__ {int size; int type; } ;
struct TYPE_4__ {int is_visible; scalar_t__ image_y; scalar_t__ image_x; scalar_t__ video_output; } ;
struct synthvid_msg {TYPE_3__ ptr_shape; TYPE_2__ vid_hdr; TYPE_1__ ptr_pos; } ;
struct hv_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct synthvid_msg*,int ,int) ;
 int FUNC_1 (struct hv_device*,struct synthvid_msg*) ;

__attribute__((used)) static int FUNC_2(struct hv_device *VAR_3)
{
 struct synthvid_msg VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(struct synthvid_msg));
 VAR_4.vid_hdr.type = VAR_1;
 VAR_4.vid_hdr.size = sizeof(struct synthvid_msg_hdr) +
  sizeof(struct synthvid_pointer_position);
 VAR_4.ptr_pos.is_visible = 1;
 VAR_4.ptr_pos.video_output = 0;
 VAR_4.ptr_pos.image_x = 0;
 VAR_4.ptr_pos.image_y = 0;
 FUNC_1(VAR_3, &VAR_4);

 FUNC_0(&VAR_4, 0, sizeof(struct synthvid_msg));
 VAR_4.vid_hdr.type = VAR_2;
 VAR_4.vid_hdr.size = sizeof(struct synthvid_msg_hdr) +
  sizeof(struct synthvid_pointer_shape);
 VAR_4.ptr_shape.part_idx = VAR_0;
 VAR_4.ptr_shape.is_argb = 1;
 VAR_4.ptr_shape.width = 1;
 VAR_4.ptr_shape.height = 1;
 VAR_4.ptr_shape.hot_x = 0;
 VAR_4.ptr_shape.hot_y = 0;
 VAR_4.ptr_shape.data[0] = 0;
 VAR_4.ptr_shape.data[1] = 1;
 VAR_4.ptr_shape.data[2] = 1;
 VAR_4.ptr_shape.data[3] = 1;
 FUNC_1(VAR_3, &VAR_4);

 return 0;
}
