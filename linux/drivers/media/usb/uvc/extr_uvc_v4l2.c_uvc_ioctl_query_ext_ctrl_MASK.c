
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int flags; int default_value; int step; int maximum; int minimum; int name; int type; int id; int member_0; } ;
struct v4l2_query_ext_ctrl {int elem_size; int elems; int reserved; int dims; scalar_t__ nr_of_dims; int flags; int default_value; int step; int maximum; int minimum; int name; int type; int id; } ;
struct uvc_video_chain {int dummy; } ;
struct uvc_fh {struct uvc_video_chain* chain; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct uvc_video_chain*,struct v4l2_queryctrl*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
        struct v4l2_query_ext_ctrl *VAR_2)
{
 struct uvc_fh *VAR_3 = VAR_1;
 struct uvc_video_chain *VAR_4 = VAR_3->chain;
 struct v4l2_queryctrl VAR_5 = { VAR_2->id };
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_2->id = VAR_5.id;
 VAR_2->type = VAR_5.type;
 FUNC_1(VAR_2->name, VAR_5.name, sizeof(VAR_2->name));
 VAR_2->minimum = VAR_5.minimum;
 VAR_2->maximum = VAR_5.maximum;
 VAR_2->step = VAR_5.step;
 VAR_2->default_value = VAR_5.default_value;
 VAR_2->flags = VAR_5.flags;
 VAR_2->elem_size = 4;
 VAR_2->elems = 1;
 VAR_2->nr_of_dims = 0;
 FUNC_0(VAR_2->dims, 0, sizeof(VAR_2->dims));
 FUNC_0(VAR_2->reserved, 0, sizeof(VAR_2->reserved));

 return 0;
}
