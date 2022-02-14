
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct TYPE_7__ {TYPE_4__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_3__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_8__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct v4l2_format*,int *,int) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (struct pvr2_hdw*,int ) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5, struct v4l2_format *VAR_6)
{
 struct pvr2_v4l2_fh *VAR_7 = VAR_4->private_data;
 struct pvr2_hdw *VAR_8 = VAR_7->channel.mc_head->hdw;
 int VAR_9;

 FUNC_0(VAR_6, &VAR_3[VAR_2], sizeof(struct v4l2_format));
 VAR_9 = 0;
 FUNC_1(
   FUNC_2(VAR_8, VAR_0),
   &VAR_9);
 VAR_6->fmt.pix.width = VAR_9;
 VAR_9 = 0;
 FUNC_1(
   FUNC_2(VAR_8, VAR_1),
   &VAR_9);
 VAR_6->fmt.pix.height = VAR_9;
 return 0;
}
