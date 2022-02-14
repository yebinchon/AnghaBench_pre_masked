
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int height; int width; } ;
struct TYPE_8__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_4__ fmt; } ;
struct TYPE_6__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct pvr2_ctrl {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_5__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct v4l2_format*,int *,int) ;
 int FUNC_1 (struct pvr2_ctrl*,int*) ;
 int FUNC_2 (struct pvr2_ctrl*) ;
 int FUNC_3 (struct pvr2_ctrl*) ;
 struct pvr2_ctrl* FUNC_4 (struct pvr2_hdw*,int ) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5, struct v4l2_format *VAR_6)
{
 struct pvr2_v4l2_fh *VAR_7 = VAR_4->private_data;
 struct pvr2_hdw *VAR_8 = VAR_7->channel.mc_head->hdw;
 int VAR_9, VAR_10, VAR_11;
 struct pvr2_ctrl *VAR_12, *VAR_13;
 int VAR_14 = VAR_6->fmt.pix.height;
 int VAR_15 = VAR_6->fmt.pix.width;

 VAR_12 = FUNC_4(VAR_8, VAR_0);
 VAR_13 = FUNC_4(VAR_8, VAR_1);

 VAR_9 = FUNC_3(VAR_12);
 VAR_10 = FUNC_2(VAR_12);
 FUNC_1(VAR_12, &VAR_11);
 if (VAR_15 == -1)
  VAR_15 = VAR_11;
 else if (VAR_15 < VAR_9)
  VAR_15 = VAR_9;
 else if (VAR_15 > VAR_10)
  VAR_15 = VAR_10;
 VAR_9 = FUNC_3(VAR_13);
 VAR_10 = FUNC_2(VAR_13);
 FUNC_1(VAR_13, &VAR_11);
 if (VAR_14 == -1)
  VAR_14 = VAR_11;
 else if (VAR_14 < VAR_9)
  VAR_14 = VAR_9;
 else if (VAR_14 > VAR_10)
  VAR_14 = VAR_10;

 FUNC_0(VAR_6, &VAR_3[VAR_2],
   sizeof(struct v4l2_format));
 VAR_6->fmt.pix.width = VAR_15;
 VAR_6->fmt.pix.height = VAR_14;
 return 0;
}
