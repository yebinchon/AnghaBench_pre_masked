
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ is_dirt_needed; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct synthvid_msg {TYPE_2__ feature_chg; TYPE_1__ vid_hdr; } ;
struct hvfb_par {int dwork; scalar_t__ update; scalar_t__ fb_ready; int wait; int init_buf; scalar_t__ recv_buf; } ;
struct hv_device {int dummy; } ;
struct fb_info {struct hvfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 struct fb_info* FUNC_1 (struct hv_device*) ;
 int FUNC_2 (int ,struct synthvid_msg*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct hv_device*) ;
 int FUNC_5 (struct hv_device*) ;

__attribute__((used)) static void FUNC_6(struct hv_device *VAR_5)
{
 struct fb_info *VAR_6 = FUNC_1(VAR_5);
 struct hvfb_par *VAR_7;
 struct synthvid_msg *VAR_8;

 if (!VAR_6)
  return;

 VAR_7 = VAR_6->par;
 VAR_8 = (struct synthvid_msg *)VAR_7->recv_buf;


 if (VAR_8->vid_hdr.type == VAR_3 ||
     VAR_8->vid_hdr.type == VAR_4) {
  FUNC_2(VAR_7->init_buf, VAR_8, VAR_1);
  FUNC_0(&VAR_7->wait);
  return;
 }


 if (VAR_8->vid_hdr.type == VAR_2) {
  if (VAR_7->fb_ready) {
   FUNC_4(VAR_5);
   FUNC_5(VAR_5);
  }

  VAR_7->update = VAR_8->feature_chg.is_dirt_needed;
  if (VAR_7->update)
   FUNC_3(&VAR_7->dwork, VAR_0);
 }
}
