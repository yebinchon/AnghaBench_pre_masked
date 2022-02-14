
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_input {scalar_t__ index; int std; int status; int name; scalar_t__ tuner; int type; scalar_t__ audioset; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct TYPE_3__ {size_t type; } ;
struct bttv {scalar_t__ tuner_type; scalar_t__ svhs; scalar_t__ input; TYPE_1__ c; } ;
typedef int __u32 ;
struct TYPE_4__ {scalar_t__ video_inputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_10 ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_11, void *VAR_12,
     struct v4l2_input *VAR_13)
{
 struct bttv_fh *VAR_14 = VAR_12;
 struct bttv *VAR_15 = VAR_14->btv;

 if (VAR_13->index >= VAR_10[VAR_15->c.type].video_inputs)
  return -VAR_4;

 VAR_13->type = VAR_6;
 VAR_13->audioset = 0;

 if (VAR_15->tuner_type != VAR_5 && VAR_13->index == 0) {
  FUNC_1(VAR_13->name, "Television");
  VAR_13->type = VAR_7;
  VAR_13->tuner = 0;
 } else if (VAR_13->index == VAR_15->svhs) {
  FUNC_1(VAR_13->name, "S-Video");
 } else {
  FUNC_1(VAR_13->name, "Composite%d", VAR_13->index);
 }

 if (VAR_13->index == VAR_15->input) {
  __u32 VAR_16 = FUNC_0(VAR_0);
  if (0 == (VAR_16 & VAR_2))
   VAR_13->status |= VAR_9;
  if (0 == (VAR_16 & VAR_1))
   VAR_13->status |= VAR_8;
 }

 VAR_13->std = VAR_3;
 return 0;
}
