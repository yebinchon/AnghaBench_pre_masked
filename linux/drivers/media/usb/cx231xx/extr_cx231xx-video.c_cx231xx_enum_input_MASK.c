
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_input {unsigned int index; int status; int std; int type; int name; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct TYPE_3__ {int tvnorms; } ;
struct cx231xx {unsigned int video_input; TYPE_1__ vdev; } ;
struct TYPE_4__ {size_t type; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (unsigned int) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct cx231xx*,int ,int ,int,int*,int) ;
 int * VAR_12 ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(struct file *VAR_13, void *VAR_14,
        struct v4l2_input *VAR_15)
{
 struct cx231xx_fh *VAR_16 = VAR_14;
 struct cx231xx *VAR_17 = VAR_16->dev;
 u32 VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 VAR_19 = VAR_15->index;
 if (VAR_19 >= VAR_6)
  return -VAR_2;
 if (0 == FUNC_0(VAR_19)->type)
  return -VAR_2;

 VAR_15->index = VAR_19;
 VAR_15->type = VAR_7;

 FUNC_2(VAR_15->name, VAR_12[FUNC_0(VAR_19)->type], sizeof(VAR_15->name));

 if ((VAR_1 == FUNC_0(VAR_19)->type) ||
     (VAR_0 == FUNC_0(VAR_19)->type))
  VAR_15->type = VAR_8;

 VAR_15->std = VAR_17->vdev.tvnorms;


 if (VAR_19 == VAR_17->video_input) {
  VAR_20 = FUNC_1(VAR_17, VAR_11,
         VAR_5, 2, &VAR_18, 4);
  if (VAR_20 > 0) {
   if ((VAR_18 & VAR_4) == 0x00)
    VAR_15->status |= VAR_10;
   if ((VAR_18 & VAR_3) == 0x00)
    VAR_15->status |= VAR_9;
  }
 }

 return 0;
}
