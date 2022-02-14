
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct synthvid_vram_location {int dummy; } ;
struct synthvid_msg_hdr {int dummy; } ;
struct TYPE_7__ {scalar_t__ user_ctx; } ;
struct TYPE_6__ {scalar_t__ user_ctx; scalar_t__ vram_gpa; int is_vram_gpa_specified; } ;
struct TYPE_5__ {int size; int type; } ;
struct synthvid_msg {TYPE_3__ vram_ack; TYPE_2__ vram; TYPE_1__ vid_hdr; } ;
struct hvfb_par {int wait; scalar_t__ init_buf; } ;
struct hv_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ smem_start; } ;
struct fb_info {TYPE_4__ fix; struct hvfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fb_info* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct synthvid_msg*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct hv_device*,struct synthvid_msg*) ;
 int FUNC_4 (struct hv_device*) ;
 int FUNC_5 (struct hv_device*) ;
 unsigned long FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct hv_device *VAR_4)
{
 struct fb_info *VAR_5 = FUNC_0(VAR_4);
 struct hvfb_par *VAR_6 = VAR_5->par;
 struct synthvid_msg *VAR_7 = (struct synthvid_msg *)VAR_6->init_buf;
 int VAR_8 = 0;
 unsigned long VAR_9;


 FUNC_1(VAR_7, 0, sizeof(struct synthvid_msg));
 VAR_7->vid_hdr.type = VAR_2;
 VAR_7->vid_hdr.size = sizeof(struct synthvid_msg_hdr) +
  sizeof(struct synthvid_vram_location);
 VAR_7->vram.user_ctx = VAR_7->vram.vram_gpa = VAR_5->fix.smem_start;
 VAR_7->vram.is_vram_gpa_specified = 1;
 FUNC_3(VAR_4, VAR_7);

 VAR_9 = FUNC_6(&VAR_6->wait, VAR_3);
 if (!VAR_9) {
  FUNC_2("Time out on waiting vram location ack\n");
  VAR_8 = -VAR_1;
  goto out;
 }
 if (VAR_7->vram_ack.user_ctx != VAR_5->fix.smem_start) {
  FUNC_2("Unable to set VRAM location\n");
  VAR_8 = -VAR_0;
  goto out;
 }


 FUNC_4(VAR_4);
 FUNC_5(VAR_4);

out:
 return VAR_8;
}
