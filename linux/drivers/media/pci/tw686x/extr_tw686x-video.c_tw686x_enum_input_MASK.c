
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {scalar_t__ index; int status; int capabilities; int std; int type; int name; } ;
struct tw686x_video_channel {size_t ch; int dev; TYPE_1__* device; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int tvnorms; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,char*,scalar_t__) ;
 struct tw686x_video_channel* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_9, void *VAR_10,
        struct v4l2_input *VAR_11)
{
 struct tw686x_video_channel *VAR_12 = FUNC_2(VAR_9);
 unsigned int VAR_13;

 if (VAR_11->index >= VAR_1)
  return -VAR_0;

 FUNC_1(VAR_11->name, sizeof(VAR_11->name), "Composite%d", VAR_11->index);
 VAR_11->type = VAR_4;
 VAR_11->std = VAR_12->device->tvnorms;
 VAR_11->capabilities = VAR_5;

 VAR_13 = FUNC_0(VAR_12->dev, VAR_8[VAR_12->ch]);
 VAR_11->status = 0;
 if (VAR_13 & VAR_3)
  VAR_11->status |= VAR_7;
 if (!(VAR_13 & VAR_2))
  VAR_11->status |= VAR_6;

 return 0;
}
