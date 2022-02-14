
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct synthvid_msg_hdr {int dummy; } ;
struct TYPE_7__ {int dirt_count; TYPE_2__* rect; scalar_t__ video_output; } ;
struct TYPE_5__ {int size; int type; } ;
struct synthvid_msg {TYPE_3__ dirt; TYPE_1__ vid_hdr; } ;
struct synthvid_dirt {int dummy; } ;
struct hv_device {int dummy; } ;
struct TYPE_8__ {int yres; int xres; } ;
struct fb_info {TYPE_4__ var; int device; } ;
struct TYPE_6__ {int y2; int x2; scalar_t__ y1; scalar_t__ x1; } ;


 int VAR_0 ;
 struct hv_device* FUNC_0 (int ) ;
 int FUNC_1 (struct synthvid_msg*,int ,int) ;
 int FUNC_2 (struct hv_device*,struct synthvid_msg*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_1)
{
 struct hv_device *VAR_2 = FUNC_0(VAR_1->device);
 struct synthvid_msg VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(struct synthvid_msg));

 VAR_3.vid_hdr.type = VAR_0;
 VAR_3.vid_hdr.size = sizeof(struct synthvid_msg_hdr) +
  sizeof(struct synthvid_dirt);
 VAR_3.dirt.video_output = 0;
 VAR_3.dirt.dirt_count = 1;
 VAR_3.dirt.rect[0].x1 = 0;
 VAR_3.dirt.rect[0].y1 = 0;
 VAR_3.dirt.rect[0].x2 = VAR_1->var.xres;
 VAR_3.dirt.rect[0].y2 = VAR_1->var.yres;

 FUNC_2(VAR_2, &VAR_3);

 return 0;
}
