
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {scalar_t__ top; scalar_t__ left; int height; int width; int member_3; int member_2; scalar_t__ member_1; scalar_t__ member_0; } ;
struct TYPE_2__ {scalar_t__ top; scalar_t__ left; } ;
struct vivid_dev {struct v4l2_rect loop_vid_overlay_cap; struct v4l2_rect loop_vid_overlay; struct v4l2_rect loop_fb_copy; TYPE_1__ compose_cap; struct v4l2_rect crop_cap; scalar_t__ overlay_out_top; struct v4l2_rect compose_out; scalar_t__ overlay_out_left; struct v4l2_rect loop_vid_copy; struct v4l2_rect loop_vid_cap; struct v4l2_rect loop_vid_out; TYPE_1__ crop_out; int display_height; int display_width; } ;


 int FUNC_0 (struct vivid_dev*,int,char*,int ,int ,scalar_t__,scalar_t__,int ,int ,scalar_t__,scalar_t__,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct v4l2_rect*,struct v4l2_rect*,struct v4l2_rect*) ;
 int FUNC_2 (struct v4l2_rect*,struct v4l2_rect*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct vivid_dev *VAR_0)
{

 struct v4l2_rect VAR_1 = {
  0, 0, VAR_0->display_width, VAR_0->display_height
 };

 struct v4l2_rect VAR_2 = {
  VAR_0->overlay_out_left, VAR_0->overlay_out_top,
  VAR_0->compose_out.width, VAR_0->compose_out.height
 };

 FUNC_1(&VAR_0->loop_vid_copy, &VAR_0->crop_cap, &VAR_0->compose_out);

 VAR_0->loop_vid_out = VAR_0->loop_vid_copy;
 FUNC_2(&VAR_0->loop_vid_out, &VAR_0->compose_out, &VAR_0->crop_out);
 VAR_0->loop_vid_out.left += VAR_0->crop_out.left;
 VAR_0->loop_vid_out.top += VAR_0->crop_out.top;

 VAR_0->loop_vid_cap = VAR_0->loop_vid_copy;
 FUNC_2(&VAR_0->loop_vid_cap, &VAR_0->crop_cap, &VAR_0->compose_cap);

 FUNC_0(VAR_0, 1,
  "loop_vid_copy: %dx%d@%dx%d loop_vid_out: %dx%d@%dx%d loop_vid_cap: %dx%d@%dx%d\n",
  VAR_0->loop_vid_copy.width, VAR_0->loop_vid_copy.height,
  VAR_0->loop_vid_copy.left, VAR_0->loop_vid_copy.top,
  VAR_0->loop_vid_out.width, VAR_0->loop_vid_out.height,
  VAR_0->loop_vid_out.left, VAR_0->loop_vid_out.top,
  VAR_0->loop_vid_cap.width, VAR_0->loop_vid_cap.height,
  VAR_0->loop_vid_cap.left, VAR_0->loop_vid_cap.top);

 FUNC_1(&VAR_2, &VAR_1, &VAR_2);


 VAR_2.left += VAR_0->compose_out.left - VAR_0->overlay_out_left;
 VAR_2.top += VAR_0->compose_out.top - VAR_0->overlay_out_top;

 FUNC_1(&VAR_0->loop_vid_overlay, &VAR_2, &VAR_0->loop_vid_copy);
 VAR_0->loop_fb_copy = VAR_0->loop_vid_overlay;


 VAR_0->loop_fb_copy.left -= VAR_0->compose_out.left - VAR_0->overlay_out_left;
 VAR_0->loop_fb_copy.top -= VAR_0->compose_out.top - VAR_0->overlay_out_top;

 VAR_0->loop_vid_overlay_cap = VAR_0->loop_vid_overlay;
 FUNC_2(&VAR_0->loop_vid_overlay_cap, &VAR_0->crop_cap, &VAR_0->compose_cap);

 FUNC_0(VAR_0, 1,
  "loop_fb_copy: %dx%d@%dx%d loop_vid_overlay: %dx%d@%dx%d loop_vid_overlay_cap: %dx%d@%dx%d\n",
  VAR_0->loop_fb_copy.width, VAR_0->loop_fb_copy.height,
  VAR_0->loop_fb_copy.left, VAR_0->loop_fb_copy.top,
  VAR_0->loop_vid_overlay.width, VAR_0->loop_vid_overlay.height,
  VAR_0->loop_vid_overlay.left, VAR_0->loop_vid_overlay.top,
  VAR_0->loop_vid_overlay_cap.width, VAR_0->loop_vid_overlay_cap.height,
  VAR_0->loop_vid_overlay_cap.left, VAR_0->loop_vid_overlay_cap.top);
}
