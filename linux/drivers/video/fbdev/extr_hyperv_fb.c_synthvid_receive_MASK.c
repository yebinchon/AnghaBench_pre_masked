
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct synthvid_msg {TYPE_1__ pipe_hdr; } ;
struct hvfb_par {scalar_t__ recv_buf; } ;
struct hv_device {int channel; } ;
struct fb_info {struct hvfb_par* par; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fb_info* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct hv_device*) ;
 int FUNC_2 (int ,struct synthvid_msg*,int ,scalar_t__*,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 struct hv_device *VAR_3 = VAR_2;
 struct fb_info *VAR_4 = FUNC_0(VAR_3);
 struct hvfb_par *VAR_5;
 struct synthvid_msg *VAR_6;
 u32 VAR_7;
 u64 VAR_8;
 int VAR_9;

 if (!VAR_4)
  return;

 VAR_5 = VAR_4->par;
 VAR_6 = (struct synthvid_msg *)VAR_5->recv_buf;

 do {
  VAR_9 = FUNC_2(VAR_3->channel, VAR_6,
           VAR_0,
           &VAR_7, &VAR_8);
  if (VAR_7 > 0 &&
      VAR_6->pipe_hdr.type == VAR_1)
   FUNC_1(VAR_3);
 } while (VAR_7 > 0 && VAR_9 == 0);
}
